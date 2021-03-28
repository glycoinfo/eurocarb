
"""
======================COPYRIGHT/LICENSE START==========================

EntryCompletionFrame.py: Part of the CcpNmr Analysis program

Copyright (C) 2005 Tim Stevens (University of Cambridge)

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

- contact the authors: tjs23@cam.ac.uk
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

import time

from memops.gui.ButtonList import ButtonList, UtilityButtonList
from memops.gui.CheckButton import CheckButton
from memops.gui.DataEntry import askString
from memops.gui.Entry import Entry
from memops.gui.FloatEntry import FloatEntry
from memops.gui.Frame import Frame
from memops.gui.IntEntry import IntEntry
from memops.gui.LabelDivider import LabelDivider
from memops.gui.Label import Label
from memops.gui.MessageReporter import showYesNo, showOkCancel, showWarning
from memops.gui.MultiWidget import MultiWidget
from memops.gui.PulldownList import PulldownList
from memops.gui.ScrolledMatrix import ScrolledMatrix
from memops.gui.TabbedFrame import TabbedFrame
from memops.gui.Text import Text

from ccpnmr.analysis.core.QualityControlBasic import analyseChemicalShifts

# # # #  To DISCUSS # # # # 
# Isotope labelling schemes

# # # # #  F O R   L A T E R  # # # # #
# More automated attribs for Nmr list details
# Extend to other types of citation, not just journal
# Shift notifiers for PPM check - or recalculate button
# Check later: Removed dependancy on ccpnmr.analysis
# Derive more global data ???

# Missing data rows can be clicked to take you to the right slot

# Buttons that will tar-gzip your project and send them to AutoDep
# for projects with structures and BMRB for those just with NMR data.

# TODO/BUGS for current software:
#   People - title - also set as None?
#   Citation - author pulldown fonts change
#            - journal abbrev not in right categories when add a new journal
#   Software - version not editable
#            - vendor website sets as http:// if not added
#   MolSystem - conf isomer/chem exchange state are boolean?
#   More submit? choices?
#   Sample - broken?
#   Experiment - If remove sample, get an error for experiments with that link gone.

# API name : Human Name : Documentation
NMR_LISTS_DATA = [('ShiftList','Shift lists','Assigned NMR chemical shifts'),
                  ('PeakList','Peak lists','Spectral peak lists'),
                  ('JCouplingList','J Coupling Lists','Lists of J couplings'),
                  ('ShiftDifferenceList','Shift difference lists','Chemical shift difference lists'),
                  ('ShiftAnisotropyList','CSA lists','Chemical Shift anisotropy lists'),
                  ('NoeList','Hetero/Homo NOE lists','Heteronuclear and homonuclear NOE lists'),
                  ('T1List','T1 lists','T1 (R1) NMR relaxation data'),
                  ('T2List','T2 lists','T2 (R2) NMR relaxation data'),
                  ('T1rhoList','T1rho lists','T1rho (R1rho) NMR relaxation data'),
                  ('RdcList','RDC lists','Residual dipolar coupling lists'),
                  ('HExchRateList','H exchange lists','Hydrogen exchange rates data'),
                  ('HExchProtectionList','H protection lists','Hydrogen exchange protection data'),
                  ('DipolarRelaxList','Dipole-dipole relax lists','Dipole-dipole relaxation data'),
                  ('IsotropicS2List','Order params','Isotropic S^2 Order parameters'),
                  ('SpectralDensityList','Spectral density','Spectral density factors'),
                  ('PkaList','pKa lists','NMR-derived pKas (acid dissociation constants)'),
                  ('DataList','Other data lists','Other NMR-derived data lists'),]

#['Dipole-dipole cross corrs','Dipole-dipole cross correlation data']
#['Dipole-CSA cross corrs','Dipole-CSA cross correlation data']
#['pH transitions','NMR-derived pH transitions (pKa, pHmid)']
#['D/H fractionation','NMR-derived D/H fractionation factors']
#['Calc shift lists','Theoretical (calculated) chemical shift values']

STANDARD_ISOTOPES = ['1H','13C','15N','31P','2H','29Si','19F','17O']

# Lots of things below could be derived from the data model!
MEASUREMENT_LIST_CLASSES = ['DipolarRelaxList', 'HExchProtectionList',
                            'HExchRateList', 'JCouplingList', 'NoeList',
                            'RdcList', 'ShiftAnisotropyList',
                            'ShiftDifferenceList', 'ShiftList',
                            'T1List', 'T1rhoList', 'T2List']

DERIVED_LIST_CLASSES =  ['DataList', 'IsotropicS2List',
                         'PkaList', 'SpectralDensityList']

TITLES = ['Dr', 'Prof', 'Mr', 'Ms', 'Mrs', 'Miss', 'Sir', 'Dame'] 

FAM_TITLES = ['Jr.', 'Sr.', 'III', 'IV', 'V'] 

VOLUME_UNITS   = ['ul','ml','l']
SAMPLE_STATES  = ['liquid', 'solid', 'ordered', 'powder', 'crystal']

SHIFT_REF_COMPOUNDS = ['DSS','TSP','TMS','HDO','CHCl3','DMSO','DMSO-d5',
                       'dioxane','CH3OH','acetone','acetone-d5','TFE','TFA',
                       'H3PO4','TMP','PCr','liquid NH3']                 

STANDARD_UNITS = ['ppm','ppt','ppb']

NMR_PROBE_TYPES = ['liquid', 'solid', 'nano', 'flow', 'MAS']

GENERATION_TYPES = ['denovo', 'refinement'] 

SAMPLE_UNITS = ['kg', 'L', 'number']

SAMPLE_COMP_UNITS = ['kg/m3', 'M', 'm3/m3', 'mol/mol', 'kg/kg']

# ionic strength not in API, but is useful to have it here

SAMPLE_CONDITION_TYPES = ['temperature', 'pressure', 'pH', 'ionic strength', 'spin-lock field',
                          'spin-lock offset', 'initial temperature', 'final temperature',
                          'delay time', 'mixing time']

POLYMER_PHYSICAL_STATES = ['native','denatured','molten globule','unfolded']

NICE_GREEN = '#B0FFB0'

CITATION_STATUS = ['published','in press','in preparation']

JOURNALS = ['Arch. Biochem. Biophys.', 'Biochemistry',
            'Biochem. Biophys. Res. Commun.', 'Biochem. J.',
            'Biochim. Biophys. Acta', 'Biomol. NMR Assignments',
            'Biophys. J.', 'Biopolymers', 'Cell', 'EMBO J.' ,
            'Eur. J. Biochem.', 'FEBS Lett.', 'Inorg. Chem.',
            'Int. J. Pept. Protein Res.', 'J. Am. Chem. Soc.',
            'J. Biochem.', 'J. Biol. Chem.', 'J. Biol. Inorg. Chem.',
            'J. Biomol. NMR', 'J. Biomol. Struct. Dyn.',
            'J. Inorg. Biochem.', 'J. Magn. Reson.', 'J. Mol. Biol.',
            'J. Pept. Res.', 'J. Protein Chem.', 'Mol. Cell', 'Nature',
            'Nat. Struct. Biol.', 'Nucleic Acids Res.',
            'Proc. Natl. Acad. Sci. U.S.A.', 'Protein Eng.',
            'Proteins', 'Protein Sci.', 'Proteins: Struct. Funct. Genet.',
            'RNA', 'Science', 'Structure', 'Structure (Cambridge, MA, U.S.)']

CITATION_DEPOSIT = ['primary','other','no']

PRODUCTION_METHODS = ['recombinant technology', 'purified from the natural source',
                      'chemical synthesis', 'cell free synthesis', 'enzymatic semisynthesis',
                      'reverse transcriptase', 'obtained from a vendor']

VECTOR_TYPES = ['plasmid', 'baculovirus', 'other virus', 'cosmid']

ORGANISM_TYPES = ['organism', 'virus', 'plasmid', 'cosmid', 'no natural source']

ORGANISMS = {'Eukarya':[('Anopheles gambiae','Mosquito'),
                        ('Bos taurus','Domestic cattle'),
                        ('Caenorhabditis elegans','Nematode worm'),
                        ('Sus scrofa','Domestic pig'),
                        ('Homo sapiens','Human'),
                        ('Mus musculus','House mouse'),
                        ('Oryza sativa ','Japanese rice'),
                        ('Arabidopsis thaliana','Thale-cress'),
                       ],
             'Bacteria':[
                        ('Enterococcus faecalis', None),                               
                        ('Erwinia tasmaniensis', None),                                
                        ('Erythrobacter litoralis', None),                           
                        ('Escherichia coli', None),            
                        ('Escherichia fergusonii', None),                          
                        ('Exiguobacterium sibiricum', None),                              
                        ('Fervidobacterium nodosum', None),                     
                        ('Finegoldia magna', None),                 
                        ('Flavobacterium johnsoniae', None),                       
                        ('Flavobacterium psychrophilu', None),                
                        ('Francisella novicida', None),            
                        ('Francisella philomiragia', None),     
                        ('Francisella tularensis', None),          
                        ('Frankia alni', None),                                 
                        ('Fusobacterium nucleatum', None),    
                        ('Geobacillus kaustophilus', None),                         
                        ('Geobacillus thermodenitrificans', None),                       
                        ('Geobacter bemidjiensis', None),
                        ],
             'Archaea':[('Aeropyrum pernix', None),
                        ('Archaeoglobus fulgidus', None),
                        ('Caldivirga maquilingensis', None),
                        ('Candidatus Korarchaeum', None),
                        ('Candidatus Methanoregula', None),
                        ('Candidatus Methanosphaerula', None),
                        ('Desulfurococcus kamchatkensis', None),
                        ('Haloarcula marismortui', None),
                        ('Halobacterium salinarum', None),
                        ('Halobacterium sp.', None),
                        ('Haloquadratum walsbyi', None),
                        ('Halorubrum lacusprofundi', None),
                        ('Hyperthermus butylicus', None),
                        ('Ignicoccus hospitalis', None),
                        ('Metallosphaera sedula', None),
                        ('Methanobrevibacter smithii', None),
                        ('Methanocaldococcus jannaschii', None),
                        ('Methanococcoides burtonii', None),
                        ('Methanococcus aeolicus', None),
                        ('Methanococcus maripaludis', None),
                        ('Methanococcus vannielii', None),
                        ('Methanocorpusculum labreanum', None),
                        ('Methanoculleus marisnigri', None),
                        ('Methanopyrus kandleri', None),
                        ('Methanosaeta thermophila', None),
                        ('Methanosarcina acetivorans', None),
                        ('Methanosarcina barkeri', None),
                        ('Methanosarcina mazei', None),
                        ('Methanosphaera stadtmanae', None),
                        ('Methanospirillum hungatei', None),
                        ('Methanothermobacter thermautotrophicus', None),
                        ('Nanoarchaeum equitans', None),
                        ('Natronomonas pharaonis', None),
                        ('Nitrosopumilus maritimus', None),
                        ('Picrophilus torridus', None),
                        ('Pyrobaculum aerophilum', None),
                        ('Pyrobaculum arsenaticum', None),
                        ('Pyrobaculum calidifontis', None),
                        ('Pyrobaculum islandicum', None),
                        ('Pyrococcus abyssi', None),
                        ('Pyrococcus furiosus', None),
                        ('Pyrococcus horikoshii', None),
                        ('Staphylothermus marinus', None),
                        ('Sulfolobus acidocaldarius', None),
                        ('Sulfolobus solfataricus', None),
                        ('Sulfolobus tokodaii', None),
                        ('Thermococcus kodakarensis', None),
                        ('Thermococcus onnurineus', None),
                        ('Thermofilum pendens', None),
                        ('Thermoplasma acidophilum', None),
                        ('Thermoplasma volcanium', None),
                        ('Thermoproteus neutrophilus', None),
                       ],
             }


UNDEFINED = 'undefined'

class EntryCompletionFrame(Frame):

  def __init__(self, parent, basePopup, *args, **kw):

    self.waiting = False
    self.entryObjType = 'ShiftList'
    self.editObject = None

    self.project = basePopup.project

    if self.project:
      self.nmrProject = self.project.currentNmrProject
    else:
      self.nmrProject = None  

    self.entry = None

    self.author = None
    self.contactPerson = None

    self.citation = None
    self.software = None

    self.shiftReference = None
    self.checkShiftList = None

    self.molSystem = None
    self.chain = None

    self.entryMolecule = None
    self.expSource = None
    self.natSource = None

    self.sample = None
    self.sampleComponent = None

    self.spectrometer = None
    self.experiment = None

    self.sampleConditionSet = None
    self.sampleCondition = None

    self.ensemble = None

    self.registerNotify = basePopup.registerNotify
    self.unregisterNotify = basePopup.unregisterNotify

    self.classSubmitDict = {'PeakList':('PeakList','peakLists'),}

    for className in MEASUREMENT_LIST_CLASSES:
      self.classSubmitDict[className] = ('MeasurementList', 'measurementLists')

    for className in DERIVED_LIST_CLASSES:
      self.classSubmitDict[className] = ('DerivedDataList', 'derivedDataLists')

    Frame.__init__(self, parent, **kw)

    self.grid_columnconfigure(1, weight=1)
    self.grid_rowconfigure(1, weight=1)

    options = ['Main', 'NMR Data','People','References', 
               'Shifts', 'Molecules', 'Sources', 'Samples',
	       'NMR Conditions', 'Experiments', 'Structures']

    tabbedFrame = TabbedFrame(self, options=options, callback=self.selectTab)
    tabbedFrame.grid(row=1, column=0, columnspan=2, sticky='nsew')

    self.tabbedFrame = tabbedFrame
    frameM, frameA, frameB, frameC, frameD, frameE, frameF, frameG, frameH, frameI, frameJ = tabbedFrame.frames


    #
    # Main
    #

    frameM.grid_columnconfigure(1, weight=1)
    frameM.grid_rowconfigure(7, weight=1)

    label = Label(frameM, text='Deposition entry:')
    label.grid(row=0, column=0, sticky='w')

    self.entryPulldown = PulldownList(frameM, callback=self.changeEntry)
    self.entryPulldown.grid(row=0, column=1, sticky='w')

    label = Label(frameM, text='Molecular System:')
    label.grid(row=1, column=0, sticky='w')
    self.molSystemPulldown = PulldownList(frameM, callback=self.changeMolSystem)
    self.molSystemPulldown.grid(row=1, column=1, sticky='w')

    label = Label(frameM, text='Title:')
    label.grid(row=2, column=0, sticky='w')

    self.titleEntry = Entry(frameM, text='', width=32,
                            returnCallback=self.updateEntryTitle)
    self.titleEntry.grid(row=2, column=1, sticky='ew')
    self.titleEntry.bind('<Leave>', self.updateEntryTitle) 

    label = Label(frameM, text='NMR Method Type:')
    label.grid(row=3, column=0, sticky='w')

    nmrMethodTypes = ['solution','solid-state','theoretical','?']
    self.nmrMethodPulldown = PulldownList(frameM, texts=nmrMethodTypes,
                                          callback=self.setEntryType)
    self.nmrMethodPulldown.grid(row=3, column=1, sticky='w')

    label = Label(frameM, text='Structural genomics\nproject submission?')
    #label.grid(row=2, column=0, sticky='w')

    self.sgCheck = CheckButton(frameM)
    #self.sgCheck.grid(row=2, column=1, sticky='w')
    self.sgCheck.set(False)

    label = Label(frameM, text='Detailed description')
    label.grid(row=4, column=0, sticky='w')

    self.detailsText = Text(frameM, text='', width=32, height=5)
    self.detailsText.grid(row=4, column=1, sticky='ew')
    self.detailsText.bind('<Leave>',self.setDetails)

    label = Label(frameM, text='Special deposition\ninstructions')
    label.grid(row=5, column=0, sticky='w')

    self.processText = Text(frameM, text='', width=32, height=5)
    self.processText.grid(row=5, column=1, sticky='ew')  
    self.processText.bind('<Leave>', self.setProcessing)

    div = LabelDivider(frameM, text='Completion Report', grid=(6,0), gridSpan=(1,2))

    headingList = ['CCPN Data Type','Comment']
    editWidgets = [None, None]
    editGetCallbacks = [self.remedyReport, None]
    editSetCallbacks = [None, None]

    self.reportTable = ScrolledMatrix(frameM, 
                                      multiSelect=False,
                                      editSetCallbacks=editSetCallbacks,
                                      editGetCallbacks=editGetCallbacks, 
                                      editWidgets=editWidgets,
                                      headingList=headingList, 
                                      callback=None, grid=(7,0), gridSpan=(1,2))   

    texts = ['Add new deposition Entry','Remove current deposition Entry']
    commands = [self.addNewEntry, self.deleteCurrentEntry]
    self.mainButtons = ButtonList(frameM, texts=texts, commands=commands)
    self.mainButtons.grid(row=8, column=0, columnspan=2, sticky='ew')
    self.mainButtons.buttons[0].config(bg=NICE_GREEN)


    #
    # Nmr Data
    #

    frameA.grid_columnconfigure(0, weight=1)
    frameA.grid_rowconfigure(1, weight=1)
    frameA.grid_rowconfigure(4, weight=1)

    div = LabelDivider(frameA, text='NMR Measurements')
    div.grid(row=0, column=0, sticky='ew')

    headingList = ['Data Type','Available','Selected','Notes']
    editWidgets = []
    editGetCallbacks = []
    editSetCallbacks = []
    justification = ['center','center','center','left']

    self.generalTable = ScrolledMatrix(frameA, 
                                       multiSelect=False,
                                       editSetCallbacks=editSetCallbacks,
                                       editGetCallbacks=editGetCallbacks, 
                                       editWidgets=editWidgets,
                                       headingList=headingList,
				       justifyList=justification, 
                                       callback=self.selectGenTable)

    self.generalTable.grid(row=1, column=0, sticky='nsew')

    texts = ['Add all available NMR data','Remove all NMR data']
    commands = [self.addAllNmrLists, self.removeAllNmrLists]
    buttons = ButtonList(frameA, texts=texts, commands=commands)
    buttons.grid(row=2, column=0, sticky='ew')

    self.submitText = 'Selected for Deposition'
    self.genDivider = LabelDivider(frameA, text='NMR Lists %s' % self.submitText)
    self.genDivider.grid(row=3, column=0, sticky='ew')

    headingList = ['List','Size','Submit?']
    editWidgets = [None, None, None]
    editGetCallbacks = [None, None, self.toggleSubmit]
    editSetCallbacks = [None, None, None]
    self.editTable = ScrolledMatrix(frameA, 
                                    multiSelect=True,
                                    headingList=headingList, 
                                    editSetCallbacks=editSetCallbacks,
                                    editGetCallbacks=editGetCallbacks, 
                                    editWidgets=editWidgets,
                                    callback=self.selectEditTable)

    self.editTable.grid(row=4, column=0, sticky='nsew')

    texts = ['Select all','Select',
             'Unselect','Unselect all']
    commands = [self.submitAll, self.submitSelected,
                self.withdrawSelected, self.withdrawAll]
    self.editButtons = ButtonList(frameA, texts=texts, commands=commands)
    self.editButtons.grid(row=5, column=0, sticky='ew')


    #
    # People
    #

    frameB.grid_columnconfigure(0, weight=1)
    frameB.grid_rowconfigure(1, weight=1)
    frameB.grid_rowconfigure(4, weight=1)

    div = LabelDivider(frameB, text='Authors')
    div.grid(row=0, column=0, sticky='ew')

    self.familyNameEntry = Entry(self, returnCallback=self.setFamilyName)
    self.titlePulldown = PulldownList(self, texts=TITLES,
                                      callback=self.setPersonTitle)
    self.givenNameEntry = Entry(self, returnCallback=self.setGivenName)                                   
    self.initialsEntry = Entry(self, returnCallback=self.setInitials)
    self.famTitlePulldown = PulldownList(self, texts=FAM_TITLES,
                                         callback=self.setFamilyTitle)

    headingList = ['#','Contact','Family Name','Title','Given Name',
                   'Initials','Family Title (e.g. Jr.)']

    editWidgets = [None, None, self.familyNameEntry, self.titlePulldown,
                    self.givenNameEntry, self.initialsEntry,
                    self.famTitlePulldown]
    editGetCallbacks = [None, self.toggleContact,
                        self.getFamilyName, self.getPersonTitle,
                        self.getGivenName, self.getInitials,
                        self.getFamilyTitle]
    editSetCallbacks = [None, None, self.setFamilyName, self.setPersonTitle,
                        self.setGivenName, self.setInitials,
                        self.setFamilyTitle]
    self.authorTable = ScrolledMatrix(frameB, 
                                      multiSelect=False,
                                      headingList=headingList, 
                                      editSetCallbacks=editSetCallbacks,
                                      editGetCallbacks=editGetCallbacks, 
                                      editWidgets=editWidgets,
                                      callback=self.selectAuthorTable)
    self.authorTable.grid(row=1, column=0, sticky='nsew')

    texts = ['Add Author','Remove Author',
             'Set Author As Contact',]
    commands = [self.addAuthor,  self.removeAuthor,
                self.setAuthorAsContact,]
    buttons = ButtonList(frameB, texts=texts, commands=commands)
    buttons.grid(row=2, column=0, sticky='ew')

    div = LabelDivider(frameB, text='Address Information', grid=(3,0))

    self.emailAddressEntry = Entry(self, returnCallback=self.setEmailAddress)
    self.mailAddressEntry = Entry(self, returnCallback=self.setMailAddress)
    self.personCityEntry = Entry(self, returnCallback=self.setPersonCity)
    #self.stateProvEntry = Entry(self, returnCallback=self.setStateProv)
    self.countryEntry = Entry(self, returnCallback=self.setCountry)
    self.postalCodeEntry = Entry(self, returnCallback=self.setPostalCode)
    self.telephoneEntry = Entry(self, returnCallback=self.setTelephone)
    self.faxEntry = Entry(self, returnCallback=self.setFax)
    self.positionEntry = Entry(self, returnCallback=self.setPosition)

    headingList = ['Family Name','Given Name','Email Address',
                   'Mailing Address','City','State/Province','Country',
                   'Postal Code','Telephone','FAX','Position']

    #editWidgets = [None] * 10
    #editGetCallbacks = [None] * 10
    #editSetCallbacks = [None] * 10

    editWidgets = [None, None, self.emailAddressEntry, self.mailAddressEntry,
                   self.personCityEntry, None, self.countryEntry,
                   self.postalCodeEntry, self.telephoneEntry, self.faxEntry, self.positionEntry]

    editSetCallbacks = [None, None, self.setEmailAddress, self.setMailAddress,
                        self.setPersonCity, None, self.setCountry,
                        self.setPostalCode, self.setTelephone, self.setFax, self.setPosition]

    editGetCallbacks = [None, None, self.getEmailAddress, self.getMailAddress,
                        self.getPersonCity, None, self.getCountry,
                        self.getPostalCode, self.getTelephone, self.getFax, self.getPosition]

    self.addressTable = ScrolledMatrix(frameB,
                                       headingList=headingList,
                                       editSetCallbacks=editSetCallbacks,
                                       editGetCallbacks=editGetCallbacks, 
                                       editWidgets=editWidgets,
                                       callback=self.selectAddressTable, grid=(4,0))

    texts = ['Add Address','Remove Address']
    commands = [self.addAddress,  self.removeAddress]
    buttons = ButtonList(frameB, texts=texts, commands=commands, grid=(5,0))


    #
    # References
    #

    frameC.grid_columnconfigure(0, weight=1)
    frameC.grid_rowconfigure(1, weight=1)
    frameC.grid_rowconfigure(4, weight=1)

    div = LabelDivider(frameC, text='Citations')
    div.grid(row=0, column=0, sticky='ew')

    self.citeDepositionPulldown = PulldownList(self, callback=self.setCiteDeposition)
    self.citationAuthorMulti = MultiWidget(self, PulldownList, minRows=1,
                                           callback=self.setCiteAuthors)
    self.citeYearPulldown = PulldownList(self, callback=self.setCiteYear)
    self.citeTitleEntry = Text(self, text='', width=64, height=5)
    self.citeJournalPulldown = PulldownList(self, callback=self.setCiteJournal)
    self.citeIssueEntry = Entry(self, width=6, returnCallback=self.setCiteIssue)
    self.citeVolumeEntry = Entry(self, width=6, returnCallback=self.setCiteVolume)
    self.citeFirstPageEntry = IntEntry(self, width=6, returnCallback=self.setCiteFirstPage)
    self.citeLastPageEntry = IntEntry(self, width=6, returnCallback=self.setCiteLastPage)
    self.citeStatusPulldown = PulldownList(self, callback=self.setCiteStatus)
    self.citePubMedEntry = Entry(self, width=12, returnCallback=self.setCitePubMed)
    self.citeMedLineEntry = Entry(self, width=12, returnCallback=self.setCiteMedLine)
    self.citeKeywordsMulti = MultiWidget(self, Entry, minRows=2,
                                         callback=self.setCiteKeywords)

    editWidgets = [None, self.citeDepositionPulldown,
                   self.citationAuthorMulti,
                   self.citeYearPulldown, self.citeTitleEntry,
                   self.citeJournalPulldown, self.citeIssueEntry,
                   self.citeVolumeEntry, self.citeFirstPageEntry,
                   self.citeLastPageEntry, self.citeStatusPulldown,
                   self.citePubMedEntry, self.citeMedLineEntry,
                   self.citeKeywordsMulti]

    editGetCallbacks = [None, self.getCiteDeposition,
                        self.getCiteAuthors, self.getCiteYear, 
                        self.getCiteTitle, self.getCiteJournal, 
                        self.getCiteIssue, self.getCiteVolume, 
                        self.getCiteFirstPage, self.getCiteLastPage, 
                        self.getCiteStatus, self.getCitePubMed, 
                        self.getCiteMedLine, self.getCiteKeywords]

    editSetCallbacks = [None, self.setCiteDeposition, 
                        self.setCiteAuthors, self.setCiteYear, 
                        self.setCiteTitle, self.setCiteJournal, 
                        self.setCiteIssue, self.setCiteVolume, 
                        self.setCiteFirstPage, self.setCiteLastPage, 
                        self.setCiteStatus, self.setCitePubMed, 
                        self.setCiteMedLine, self.setCiteKeywords]

    headingList = ['#','Submit?','Authors',
                   'Year','Title',
                   'Journal\nAbbrev','Issue','Volume',
		   'First\npage','Last\nPage',
		   'Status','PubMed ID', 
		   'Medline\nUI Code','Keywords']
    self.citationTable = ScrolledMatrix(frameC, 
                                        multiSelect=False,
                                        editSetCallbacks=editSetCallbacks,
                                        editGetCallbacks=editGetCallbacks,
                                        editWidgets=editWidgets,
                                        headingList=headingList,
                                        callback=self.selectCitation)
    self.citationTable.grid(row=1, column=0, sticky='nsew')

    texts = ['Add Citation','Remove Citation']
    commands = [self.addCitation, self.removeCitation]
    buttons = ButtonList(frameC, texts=texts, commands=commands)
    buttons.grid(row=2, column=0, sticky='ew')

    div = LabelDivider(frameC, text='Software')
    div.grid(row=3, column=0, sticky='ew')

    self.softTasksMulti = MultiWidget(self, Entry, minRows=1,
                                      callback=self.setSoftTasks)
    self.softVendorEntry = Entry(self, returnCallback=self.setSoftVendor)
    self.softVendorAddrEntry = Entry(self, returnCallback=self.setSoftVendorAddr)
    self.softVendorWebEntry = Entry(self, returnCallback=self.setSoftVendorWeb)
    self.softDetailsEntry = Entry(self, returnCallback=self.setSoftDetails)

    editWidgets = [None, None, self.softTasksMulti,
                   self.softVendorEntry, self.softVendorAddrEntry,
                   self.softVendorWebEntry, self.softDetailsEntry]

    editGetCallbacks = [None, None, self.getSoftTasks,
                        self.getSoftVendor, self.getSoftVendorAddr,
                        self.getSoftVendorWeb, self.getSoftDetails]

    editSetCallbacks = [None, None, self.setSoftTasks,
                        self.setSoftVendor, self.setSoftVendorAddr,
                        self.setSoftVendorWeb, self.setSoftDetails]

    headingList = ['Name','Version','Tasks','Vendor/Author',
                   'Vendor\nAddress','Vendor\nWebsite','Details']
    self.softwareTable = ScrolledMatrix(frameC, 
                                        editSetCallbacks=editSetCallbacks,
                                        editGetCallbacks=editGetCallbacks,
                                        editWidgets=editWidgets,
                                        multiSelect=True,
                                        headingList=headingList,
                                        callback=self.selectSoftware)
    self.softwareTable.grid(row=4, column=0, sticky='nsew')

    texts = ['Add Software','Remove Software']
    commands = [self.addSoftware, self.removeSoftware]
    buttons = ButtonList(frameC, texts=texts, commands=commands)
    buttons.grid(row=5, column=0, sticky='ew')


    #
    # Shifts
    #

    frameD.grid_columnconfigure(1, weight=1)
    frameD.grid_rowconfigure(1, weight=1)
    frameD.grid_rowconfigure(5, weight=1)

    # Shift references

    div = LabelDivider(frameD, text='Chemical Shift References')
    div.grid(row=0, column=0, columnspan=2, sticky='ew')

    self.isotopePulldown = PulldownList(self, texts=STANDARD_ISOTOPES,
                                        callback=self.setShiftRefIsotope)

    self.molNamePulldown = PulldownList(self, texts=SHIFT_REF_COMPOUNDS,
                                        callback=self.setShiftRefMolName)

    self.atomGroupEntry  = Entry(self, text='', width=8, returnCallback=self.setShiftRefAtomGroup)
    self.valueEntry      = FloatEntry(self, text=0.0, width=6, returnCallback=self.setShiftRefValue)
    self.ratioEntry      = FloatEntry(self, text=0.0, width=6, returnCallback=self.setShiftRefRatio)
    self.unitPulldown    = PulldownList(self,  texts=STANDARD_UNITS,
                                        callback=self.setShiftRefUnit)

    self.geometryEntry   = Entry(self, text='', returnCallback=self.setShiftRefGeometry)
    self.locationEntry   = Entry(self, text='', returnCallback=self.setShiftRefLocation)
    self.axisEntry       = Entry(self, text='', returnCallback=self.setShiftRefAxis)

    colHeadings      = ['#','Class','Isotope','Experiments',
                        'Mol. Name','Atom','Value','Unit',
                        'Ref Type','Indirect\nShift Ratio',
                        'Sample\nGeometry','Location','Axis']

    editWidgets      = [None, None, self.isotopePulldown, None, self.molNamePulldown,
                        self.atomGroupEntry,self.valueEntry, self.unitPulldown,None,
                        self.ratioEntry,self.geometryEntry,self.locationEntry,self.axisEntry]

    editGetCallbacks = [None, None, self.getShiftRefIsotope, None, self.getShiftRefMolName,
                        self.getShiftRefAtomGroup,self.getShiftRefValue,self.getShiftRefUnit,self.toggleShiftRefType,
                        self.getShiftRefRatio ,self.getShiftRefGeometry,self.getShiftRefLocation,self.getShiftRefAxis]

    editSetCallbacks = [None, None, self.setShiftRefIsotope, None, self.setShiftRefMolName,
                        self.setShiftRefAtomGroup,self.setShiftRefValue,self.setShiftRefUnit,None,
                        self.setShiftRefRatio ,self.setShiftRefGeometry,self.setShiftRefLocation,self.setShiftRefAxis]

    self.shiftRefMatrix = ScrolledMatrix(frameD, multiSelect=True,
                                         editSetCallbacks=editSetCallbacks,
                                         editGetCallbacks=editGetCallbacks,
                                         editWidgets=editWidgets,
                                         headingList=colHeadings,
                                         callback=self.selectShiftRef)
    self.shiftRefMatrix.doEditMarkExtraRules = self.doShiftRefEditMarkExtraRules
    self.shiftRefMatrix.grid(row=1, column=0, columnspan=2, sticky='nsew')

    texts    = ['Add Internal\nReference','Add External\nReference','Remove\nSelected']
    commands = [self.addInternalShiftRef,self.addExternalShiftRef,self.removeShiftRefs]
    self.shiftRefButtons = ButtonList(frameD,texts=texts,expands=True,commands=commands)
    self.shiftRefButtons.grid(row=2, column=0, columnspan=2, sticky='ew')

    # Unusual shifts

    div = LabelDivider(frameD, text='Unusual Chemical Shifts')
    div.grid(row=3, column=0, columnspan=2, sticky='ew')

    label = Label(frameD, text='Shift List:')
    label.grid(row=4, column=0, sticky='w')
    self.checkShiftListPulldown = PulldownList(frameD, callback=self.changeCheckShiftList)
    self.checkShiftListPulldown.grid(row=4, column=1, sticky='w')

    colHeadings = ['#','Isotope','Resonance','PPM',
                   'SD','BMRB\nMean','Random\nCoil']

    self.shiftCheckMatrix = ScrolledMatrix(frameD, multiSelect=False,
                                           headingList=colHeadings,
                                           callback=None)
    self.shiftCheckMatrix.grid(row=5, column=0, columnspan=2, sticky='nsew')


    #
    # Molecules
    #

    frameE.grid_columnconfigure(0, weight=1)
    frameE.grid_rowconfigure(1, weight=1)
    frameE.grid_rowconfigure(3, weight=1)

    div = LabelDivider(frameE, text='Molecular System Chains')
    div.grid(row=0, column=0, sticky='ew')

    headingList = ['Chain Code','Length','Molecule','Conf Isomer',
                   'Chem Exchange State','Folded State']

    self.chainConfIsomerEntry    = Entry(self, returnCallback=self.setChainConfIsomer)
    self.chainChemExchStateEntry = Entry(self, returnCallback=self.setChainChemExchState)
    self.chainPhysicalStatePulldown = PulldownList(self, callback=self.setChainPhysicalState)

    editWidgets = [None, None, None,
                   self.chainConfIsomerEntry,
                   self.chainChemExchStateEntry,
                   self.chainPhysicalStatePulldown]

    editGetCallbacks = [None, None, None,
                        self.getChainConfIsomer,
                        self.getChainChemExchState,
                        self.getChainPhysicalState,]

    editSetCallbacks = [None, None, None,
                        self.setChainConfIsomer,
                        self.setChainChemExchState,
                        self.setChainPhysicalState,]

    self.molSysTable = ScrolledMatrix(frameE, 
                                      multiSelect=False,
                                      headingList=headingList,
                                      editSetCallbacks=editSetCallbacks,
                                      editGetCallbacks=editGetCallbacks,
                                      editWidgets=editWidgets,
                                      callback=self.selectChain)
    self.molSysTable.grid(row=1, column=0, sticky='nsew')

    div = LabelDivider(frameE, text='Molecules in Entry')
    div.grid(row=2, column=0, sticky='ew')

    headingList = ['Name', 'Mol Type', 'Num Residues',
                   'Sequence', 'Is paramagnetic?']
    self.moleculeTable = ScrolledMatrix(frameE, 
                                        multiSelect=False,
                                        headingList=headingList,
                                        callback=None)
    self.moleculeTable.grid(row=3, column=0, sticky='nsew')

    div = LabelDivider(frameE, text='Non-standard & non-polymer Chem Comps')
    div.grid(row=4, column=0, sticky='ew')

    headingList = ['CcpCode', 'PDB Code', 'Mol Type', 'Name']
    self.unusualChemCompTable = ScrolledMatrix(frameE, 
                                               multiSelect=False,
                                               headingList=headingList,
                                               callback=None)
    self.unusualChemCompTable.grid(row=5, column=0, sticky='nsew')


    #
    # Biological sources
    #

    frameF.grid_columnconfigure(0, weight=1)
    frameF.grid_rowconfigure(1, weight=1)
    frameF.grid_rowconfigure(4, weight=1)

    div = LabelDivider(frameF, text='Experimental Sample Sources', grid=(0,0))

    self.expHostSciNamePulldown = PulldownList(self, callback=self.setExpHostSciName)
    self.expHostNameEntry = Entry(self, returnCallback=self.setExpHostName)
    self.expHostMolPulldown = PulldownList(self, callback=self.setExpHostMol)
    self.expHostProdMethodPulldown = PulldownList(self, callback=self.setExpHostProdMethod)
    self.expHostStrainEntry = Entry(self, returnCallback=self.setExpHostStrain)
    self.expHostVecTypePulldown = PulldownList(self, callback=self.setExpHostVecType)
    self.expHostVecNameEntry = Entry(self, returnCallback=self.setExpHostVecName)

    editWidgets = [self.expHostSciNamePulldown,self.expHostNameEntry,None,
                   self.expHostProdMethodPulldown,self.expHostStrainEntry,
                   self.expHostVecTypePulldown,self.expHostVecNameEntry]
    editGetCallbacks = [self.getExpHostSciName,self.getExpHostName,None,
                        self.getExpHostProdMethod,self.getExpHostStrain,
                        self.getExpHostVecType,self.getExpHostVecName]
    editSetCallbacks = [self.setExpHostSciName,self.setExpHostName,None,
                        self.setExpHostProdMethod,self.setExpHostStrain,
                        self.setExpHostVecType,self.setExpHostVecName]

    headingList = ['Scientific Name','Common Name','Molecule','Production Method',
                   'Host strain','Vector Type','Vector Name',]
    self.expSourceTable = ScrolledMatrix(frameF,
                                         headingList=headingList,
                                         editSetCallbacks=editSetCallbacks,
                                         editGetCallbacks=editGetCallbacks, 
                                         editWidgets=editWidgets,
                                         callback=self.selectEntryMol, grid=(1,0))

    texts = ['Add Polymer Experimental Sources','Remove Experimental Source']
    commands = [self.addExpSource, self.removeExpSource]
    buttons = ButtonList(frameF, texts=texts, commands=commands, grid=(2,0))

    div = LabelDivider(frameF, text='Biological & Sequence Origin', grid=(3,0))

    self.natSourceSciNamePulldown = PulldownList(self, callback=self.setNatSourceSciName)
    self.natSourceNameEntry = Entry(self, returnCallback=self.setNatSourceName)
    self.natSourceMolPulldown = PulldownList(self, callback=self.setNatSourceMol)
    self.natSourceOrgTypePulldown = PulldownList(self, callback=self.setNatSourceOrgType)
    self.natSourceStrainEntry = Entry(self, returnCallback=self.setNatSourceStrain)
    self.natSourceVariantEntry = Entry(self, returnCallback=self.setNatSourceVariant)
    self.natSourceGeneNameEntry = Entry(self, returnCallback=self.setNatSourceGeneName)

    editWidgets = [self.natSourceSciNamePulldown,self.natSourceNameEntry,
                   None, self.natSourceOrgTypePulldown,
                   self.natSourceStrainEntry, self.natSourceVariantEntry,
                   self.natSourceGeneNameEntry]
    editGetCallbacks = [self.getNatSourceSciName,self.getNatSourceName,None,
                        self.getNatSourceOrgType,self.getNatSourceStrain,
                        self.getNatSourceVariant,self.getNatSourceGeneName]
    editSetCallbacks = [self.setNatSourceSciName,self.setNatSourceName,None,
                        self.setNatSourceOrgType,self.setNatSourceStrain,
                        self.setNatSourceVariant,self.setNatSourceGeneName]

    headingList = ['Scientific Name','Common Name','Molecule',
                   'Organism Type','Strain','Variant','Gene Name',]

    self.natSourceTable = ScrolledMatrix(frameF,
                                         headingList=headingList,
                                         editSetCallbacks=editSetCallbacks,
                                         editGetCallbacks=editGetCallbacks, 
                                         editWidgets=editWidgets,
                                         callback=self.selectNatSource, grid=(4,0))

    texts = ['Add Polymer Natural Sources','Remove Natural Source']
    commands = [self.addNatSources, self.removeNatSource]
    buttons = ButtonList(frameF, texts=texts, commands=commands, grid=(5,0))


    #
    # Samples
    #

    frameG.grid_columnconfigure(0, weight=1)
    frameG.grid_rowconfigure(1, weight=1)
    frameG.grid_rowconfigure(4, weight=1)

    div = LabelDivider(frameG, text='Samples')
    div.grid(row=0, column=0, sticky='ew')

    self.sampleAmountEntry = FloatEntry(self, text='', width=12,
                                        returnCallback=self.setSampleAmount)

    self.sampleUnitPulldown = PulldownList(self, texts=SAMPLE_UNITS,
                                           callback=self.setSampleUnit)

    self.sampleIonicEntry = FloatEntry(self, text='', width=12,
                                       returnCallback=self.setSampleIonic)

    self.samplePhEntry = FloatEntry(self, text='', width=12,
                                       returnCallback=self.setSamplePh)

    self.sampleDetailsEntry = Entry(self, text='', width=10,
                                 returnCallback=self.setSampleDetails)

    headingList = ['#','Name','Amount','Unit',
                   'Ionic\nStrength', 'pH','Details']

    editWidgets = [None, None, self.sampleAmountEntry, self.sampleUnitPulldown,
                   self.sampleIonicEntry, self.samplePhEntry, self.sampleDetailsEntry]

    editGetCallbacks = [None, None, self.getSampleAmount, self.getSampleUnit,
                        self.getSampleIonic, self.getSamplePh, self.getSampleDetails]

    editSetCallbacks = [None, None, self.setSampleAmount, self.setSampleUnit,
                        self.setSampleIonic, self.setSamplePh, self.setSampleDetails]

    self.sampleTable = ScrolledMatrix(frameG,
                                      multiSelect=False,
                                      editSetCallbacks=editSetCallbacks,
                                      editGetCallbacks=editGetCallbacks,
                                      editWidgets=editWidgets,
                                      headingList=headingList,
                                      callback=self.selectSample)
    self.sampleTable.grid(row=1, column=0, sticky='nsew')

    texts = ['Add Sample','Remove Sample']
    commands = [self.addSample, self.removeSample]
    buttons = ButtonList(frameG, texts=texts, commands=commands)
    buttons.grid(row=2, column=0, sticky='ew')

    div = LabelDivider(frameG, text='Sample Components', grid=(3,0))

    self.sampleCompMolPulldown = PulldownList(self, callback=self.setSampleCompMol)

    self.sampleCompConcEntry = FloatEntry(self, text='', width=12,
                                          returnCallback=self.setSampleCompConc)

    self.sampleCompConcErrEntry = FloatEntry(self, text='', width=12,
                                             returnCallback=self.setSampleCompConcErr)

    self.sampleCompConcUnitPulldown = PulldownList(self, texts=SAMPLE_COMP_UNITS,
                                           callback=self.setSampleUnit)

    headingList = ['Molecular Component','Concentration','Error','Unit']

    editWidgets = [None, self.sampleCompConcEntry,
                   self.sampleCompConcErrEntry, self.sampleCompConcUnitPulldown]

    editGetCallbacks = [None, self.getSampleCompConc,
                        self.getSampleCompConcErr, self.getSampleCompConcUnit]

    editSetCallbacks = [None, self.setSampleCompConc,
                        self.setSampleCompConcErr, self.setSampleCompConcUnit]

    self.sampleComponentTable = ScrolledMatrix(frameG,
                                               multiSelect=False,
                                               editSetCallbacks=editSetCallbacks,
                                               editGetCallbacks=editGetCallbacks,
                                               editWidgets=editWidgets,headingList=headingList,
                                               callback=self.selectSampleComponent, grid=(4,0))

    texts = ['Add Polymer Sample Components','Add Other Sample Component','Remove Sample Component']
    commands = [self.addPolySampleComponents, self.addOtherSampleComponent, self.removeSampleComponent]
    buttons = ButtonList(frameG, texts=texts, commands=commands)
    buttons.grid(row=5, column=0, sticky='ew')


    #
    # NMR Conditions
    #

    frameH.grid_columnconfigure(0, weight=1)
    frameH.grid_rowconfigure(1, weight=1)
    frameH.grid_rowconfigure(4, weight=1)

    div = LabelDivider(frameH, text='NMR Condition Sets')
    div.grid(row=0, column=0, sticky='ew')

    self.sampleConditionSetEntry = Entry(self, text='', width=10,
                                         returnCallback=self.setSampleConditionSet)

    self.sampleConditionSetDetailsEntry = Entry(self, text='', width=10,
                                                returnCallback=self.setSampleConditionSetDetails)

    headingList = ['#','Condition Set','Details']

    editWidgets = [None,self.sampleConditionSetEntry,self.sampleConditionSetDetailsEntry]

    editGetCallbacks = [None,self.getSampleConditionSet,self.getSampleConditionSetDetails]

    editSetCallbacks = [None,self.setSampleConditionSet,self.setSampleConditionSetDetails]

    self.nmrCondSetTable = ScrolledMatrix(frameH,
                                          headingList=headingList,
                                          editSetCallbacks=editSetCallbacks,
                                          editGetCallbacks=editGetCallbacks,
                                          editWidgets=editWidgets,
                                          callback=self.selectSampleConditionSet)

    self.nmrCondSetTable.grid(row=1, column=0, sticky='nsew')

    texts = ['Add Condition Set','Remove Condition Set']
    commands = [self.addSampleConditionSet, self.removeSampleConditionSet]

    buttons = ButtonList(frameH, texts=texts, commands=commands)
    buttons.grid(row=2, column=0, sticky='ew')

    div = LabelDivider(frameH, text='NMR Conditions')
    div.grid(row=3, column=0, sticky='ew')

    self.sampleConditionPulldown = PulldownList(self, callback=self.setSampleCondition)

    self.sampleConditionValueEntry = FloatEntry(self, text='', width=12,
                                                returnCallback=self.setSampleConditionValue)

    self.sampleConditionErrorEntry = FloatEntry(self, text='', width=12,
                                                returnCallback=self.setSampleConditionError)

    self.sampleConditionUnitEntry = Entry(self, text='', width=10,
                                          returnCallback=self.setSampleConditionUnit)

    headingList = ['Condition','Value','Error','Unit']

    editWidgets      = [None,self.sampleConditionValueEntry,
                        self.sampleConditionErrorEntry,self.sampleConditionUnitEntry]

    editGetCallbacks = [None,self.getSampleConditionValue,
                        self.getSampleConditionError,self.getSampleConditionUnit]

    editSetCallbacks = [None,self.setSampleConditionValue,
                        self.setSampleConditionError,self.setSampleConditionUnit]

    self.nmrCondTable = ScrolledMatrix(frameH,
                                       headingList=headingList,
                                       editSetCallbacks=editSetCallbacks,
                                       editGetCallbacks=editGetCallbacks, 
                                       editWidgets=editWidgets,
                                       callback=self.selectSampleCondition)

    self.nmrCondTable.grid(row=4, column=0, sticky='nsew')

    texts = ['Add Standard Conditions','Add Condition','Remove Condition']
    commands = [self.addStdSampleCondition, self.addSampleCondition, self.removeSampleCondition]

    buttons = ButtonList(frameH, texts=texts, commands=commands)
    buttons.grid(row=5, column=0, sticky='ew')


    #
    # Experiments
    #

    frameI.grid_columnconfigure(0, weight=1)
    frameI.grid_rowconfigure(1, weight=1)
    frameI.grid_rowconfigure(4, weight=1)

    div = LabelDivider(frameI, text='NMR Spectrometers')
    div.grid(row=0, column=0, sticky='ew')

    self.spectrometerNameEntry = Entry(self, text='', width=10,
                                       returnCallback=self.setSpectrometerName)

    self.spectrometerFreqEntry = FloatEntry(self, text='', width=12,
                                            returnCallback=self.setSpectrometerFreq)

    self.spectrometerManufacturerEntry = Entry(self, text='', width=10,
                                               returnCallback=self.setSpectrometerManufacturer)

    self.spectrometerModelEntry = Entry(self, text='', width=10,
                                        returnCallback=self.setSpectrometerModel)

    self.spectrometerSerialEntry = Entry(self, text='', width=10,
                                         returnCallback=self.setSpectrometerSerial)

    self.spectrometerDetailsEntry = Entry(self, text='', width=10,
                                          returnCallback=self.setSpectrometerDetails)

    headingList = ['#','Name','Nominal Freq.','Proton Freq. (MHz)',
                   'Manufacturer','Model','Serial #','Details']

    editWidgets      = [None,self.spectrometerNameEntry,
                        None,self.spectrometerFreqEntry, self.spectrometerManufacturerEntry,
                        self.spectrometerModelEntry, self.spectrometerSerialEntry,
                        self.spectrometerDetailsEntry]

    editGetCallbacks = [None,self.getSpectrometerName,
                        None,self.getSpectrometerFreq, self.getSpectrometerManufacturer,
                        self.getSpectrometerModel,self.getSpectrometerSerial,
                        self.getSpectrometerDetails]

    editSetCallbacks = [None,self.setSpectrometerName,
                        None,self.setSpectrometerFreq, self.setSpectrometerManufacturer,
                        self.setSpectrometerModel,self.setSpectrometerSerial,
                        self.setSpectrometerDetails]

    self.spectrometerMatrix = ScrolledMatrix(frameI,
                                             editSetCallbacks=editSetCallbacks,
                                             editGetCallbacks=editGetCallbacks,
                                             editWidgets=editWidgets,
                                             headingList=headingList,
                                             callback=self.selectSpectrometer)

    self.spectrometerMatrix.grid(row=1, column=0, sticky='nsew')

    texts    = ['Add Spectrometer','Remove Spectrometer']
    commands = [self.addSpectrometer,self.removeSpectrometer]
    self.spectrometerButtons = ButtonList(frameI,texts=texts, expands=True, commands=commands)
    self.spectrometerButtons.grid(row=2, column=0, sticky='ew')

    div = LabelDivider(frameI, text='Experiments')
    div.grid(row=3, column=0, sticky='ew')

    self.experimentNameEntry = Entry(self, text='', width=10,
                                     returnCallback=self.setExperimentName)

    self.experimentSamplePulldown = PulldownList(self, callback=self.setExperimentSample)

    self.experimentSampleCondPulldown = PulldownList(self, callback=self.setExperimentSampleCond)

    self.experimentSpecPulldown = PulldownList(self, callback=self.setExperimentSpectrometer)

    self.expShiftRefSelect = MultiWidget(self, CheckButton, callback=self.setExpShiftRefs,
                                           minRows=0, useImages=False)

    headingList = ['Name','Submit?','Sample','Condition Set','Chemical\nShift Ref.',
                   'Raw data?','Spectrometer']

    editWidgets = [self.experimentNameEntry, None, self.experimentSamplePulldown,
                   self.experimentSampleCondPulldown, self.expShiftRefSelect,
                   None, self.experimentSpecPulldown]
    editGetCallbacks = [self.getExperimentName, self.toggleExperiment, self.getExperimentSample,
                        self.getExperimentSampleCond, self.getExpShiftRefs,
                        None, self.getExperimentSpectrometer]
    editSetCallbacks = [self.setExperimentName, None, self.setExperimentSample,
                        self.setExperimentSampleCond, self.setExpShiftRefs,
                        None, self.setExperimentSpectrometer]

    self.experimentTable = ScrolledMatrix(frameI,
                                          multiSelect=False,
                                          editSetCallbacks=editSetCallbacks,
                                          editGetCallbacks=editGetCallbacks,
                                          editWidgets=editWidgets,
                                          headingList=headingList,
                                          callback=self.selectExperiment)
    self.experimentTable.grid(row=4, column=0, sticky='nsew')

    texts = ['Add Experiment','Remove Experiment','Submit All','Submit Minimal']
    commands = [self.addExperiment, self.removeExperiment,
                self.submitAllExperiments, self.submitMinExperiments]
    buttons = ButtonList(frameI, texts=texts, commands=commands)
    buttons.grid(row=5, column=0, sticky='ew')


    #
    # Structures
    #

    frameJ.grid_columnconfigure(0, weight=1)
    frameJ.grid_rowconfigure(0, weight=1)

    self.strucGenPulldown = PulldownList(self, callback=self.setStrucGen)
    self.strucGenTypePulldown = PulldownList(self, callback=self.setStrucGenType)
    self.constraintSetPulldown = PulldownList(self, callback=self.setConstraintSet)
    self.strucGenNameEntry = Entry(self, returnCallback=self.setStrucGenName)

    editWidgets = [None, None, None, None, None,
                   self.strucGenPulldown,
                   self.strucGenNameEntry,
                   self.strucGenTypePulldown,
                   self.constraintSetPulldown]

    editGetCallbacks = [None, self.toggleEnsemble, None, None, None,
                        self.getStrucGen,
                        self.getStrucGenName,
                        self.getStrucGenType,
                        self.getConstraintSet]

    editSetCallbacks = [None, None, None, None, None,
                        self.setStrucGen,
                        self.setStrucGenName,
                        self.setStrucGenType,
                        self.setConstraintSet]

    # More details about restraints would take a long time to load
    headingList = ['#','Submit?','Models','Chains','Residues',
                   'Structure\nGeneration','Generation\nName',
                   'Generation\nType', 'Constraint\nSet',]

    self.ensembleTable = ScrolledMatrix(frameJ, 
                                        multiSelect=False,
                                        editSetCallbacks=editSetCallbacks,
                                        editGetCallbacks=editGetCallbacks,
                                        editWidgets=editWidgets,
                                        headingList=headingList,
                                        callback=self.selectEnsemble)
    self.ensembleTable.grid(row=0, column=0, sticky='nsew')    

    #
    # Back to main
    #

    self.administerNotifiers(self.registerNotify)

    #self.updateEntries()

    # Go to the right bit of the GUI according to obj type...

  def remedyReport(self, ccpnObj):

    pass

  def deleteCurrentEntry(self):

    entry = self.entry
    if entry:
      msg = 'Really delete deposition "%s" ?' % entry.name
      if showOkCancel('Confirm', msg, parent=self):
        entry.delete()
        self.changeEntry(None)

  def addNewEntry(self):

    msg = 'Working name for deposition entry:'
    name = askString('Query', msg, parent=self) or ''
    name.strip()

    if len(name.split()) > 1:
      showWarning('Failure','Name cannot contain whitespace.', parent=self)
      return

    if name:
      store = getEntryStore(self.project)

      if store.findFirstEntry(name=name):
        showWarning('Failure','Name already in use.', parent=self)
        return

      entry = store.newEntry(name=name)
      self.changeEntry(entry)

  def changeEntry(self, entry):

    self.entry = entry
    if entry:
      self.molSystem = entry.molSystem

    else:
      self.molSystem = None

    self.updateAll()

  def checkEntryConsistency(self):

    entry = self.entry

    if entry:
      for peakList in entry.peakLists:
        experiment = peakList.dataSource.experiment

        if experiment not in entry.experiments:
          entry.addExperiment(experiment)

      constraintSets = set()
      for structureAnalysis in entry.structureAnalyses:
        rSet = structureAnalysis.nmrConstraintStore
        if rSet:
          constraintSets.add(rSet)

      for structureAnalysis in self.entry.structureGenerations:
        rSet = structureAnalysis.nmrConstraintStore
        if rSet:
          constraintSets.add(rSet)

      for constraintSet in constraintSets:
        for constraintList in constraintSet.constraintLists:
          for experiment in constraintList.experiments:
            if experiment not in entry.experiments:
              entry.addExperiment(experiment)

      methodStore = getMethodStore(self.project)
      entry.software = methodStore.sortedSoftware()

  def updateEntries(self):

    names = []
    index = []
    store = self.project.currentNmrEntryStore or \
              self.project.newNmrEntryStore(name='Default')
    entries = store.sortedEntries()
    entry = self.entry

    if entries:
      names = [e.name for e in entries]
      if entry not in entries:
        entry = entries[0]
      index = entries.index(entry)  

    else:
      entry = None

    if entry is not self.entry:
      self.changeEntry(entry)

    self.entryPulldown.setup(names, entries, index)

  def updateReport(self):

    from ccpnmr.eci.CompletenessCheck import checkNmrEntryCompleteness

    textMatrix = []
    objectList = []
    colorMatrix = []

    if self.entry:
      results = checkNmrEntryCompleteness(self.entry)

      for ccpn, notes, color in results:

        datum = [ccpn, notes]
        textMatrix.append(datum)

        objectList.append(ccpn)

        colors = [None, color]
        colorMatrix.append(colors)

    self.reportTable.update(textMatrix=textMatrix,
                            objectList=objectList,
                            colorMatrix=colorMatrix)

  def administerNotifiers(self, notifyFunc):

    for func in ('','__init__','delete'):
      for clazz in ('ccp.nmr.NmrEntry.Entry',):
        notifyFunc(self.updateEntryAfter,clazz, func)

    for func in ('__init__','delete','setPersonInGroup',
                 'setFamilyName', 'setTitle', 'setGivenName',
                 'setMiddleInitials', 'setFamilyTitle'):
      notifyFunc(self.updatePersonAfter, 'ccp.general.Affiliation.Person', func)

    for func in ('','__init__','delete','setEmailAddress','setPhoneNumbers','setFaxNumber','setPosition'):
      notifyFunc(self.updateAddressAfter, 'ccp.general.Affiliation.PersonInGroup', func)

    for func in ('','__init__','delete'):
      notifyFunc(self.updateAddressAfter, 'ccp.general.Affiliation.Group', func)

    for func in ('','__init__','delete','setAddresses','setCity','setCountry','setPostalCode'):
      notifyFunc(self.updateAddressAfter, 'ccp.general.Affiliation.Organisation', func)

    # Citations

    for func in ('','__init__','delete'):
      notifyFunc(self.updateCitations, 'ccp.general.Citation.JournalCitation',func)

    # Software

    for func in ('','__init__','delete'):
      notifyFunc(self.updateSoftwareAfter, 'ccp.general.Method.Software',func)

    # Molecules & chains
    
    notifyFunc(self.updateMolDataAfter,'ccp.nmr.NmrEntry.Entry', 'setMolSystem')
    for func in ('setConformationalIsomer',
                 'setPhysicalState',
                 'setChemExchangeState',):
      notifyFunc(self.updateMolDataAfter,'ccp.molecule.MolSystem.Chain', func)


    # Shift References

    for func in ('__init__','delete','setAtomGroup','setIndirectShiftRatio',
                 'setValue','setIsotopeCode','setMolName','setReferenceType',
                 'setUnit','setExperiments','addExperiment','removeExperiment'):
      for clazz in ('ccp.nmr.Nmr.ExternalShiftReference','ccp.nmr.Nmr.InternalShiftReference'):
        notifyFunc(self.updateShiftRefs,clazz, func)

    for func in ('setShiftReferences',
                 'addShiftReference','removeShiftReference'):
      notifyFunc(self.updateShiftRefs,'ccp.nmr.Nmr.Experiment', func)

    # Sources

    for func in ('','__init__','delete','setMolecule','setProductionMethod','setSourceType','setVectorType'):
      notifyFunc(self.updateSourcesAfter, 'ccp.nmr.NmrEntry.EntryMolecule', func)

    for func in ('','__init__','delete','setScientificName','setOrganismName','setStrain',
                 'setPlasmid','setVariant','setGeneMnemonic','setDetails'):
      notifyFunc(self.updateSourcesAfter,'ccp.general.Taxonomy.NaturalSource', func)

    # Samples

    for func in ('','__init__','delete','setName',
                 'setInitialAmount', 'setAmountUnit',
                 'setIonicStrength', 'setPh', 'setDetails'):
      notifyFunc(self.updateSamplesAfter,'ccp.lims.Sample.Sample', func)

    for func in ('','__init__','delete','setName','setDetails'):
      notifyFunc(self.updateSampleComponentsAfter,'ccp.lims.RefSampleComponent.MolComponent', func)

    for func in ('','__init__','delete','setRefComponent','setConcentration',
                 'setConcentrationError','setConcentrationUnit'):
      notifyFunc(self.updateSampleComponentsAfter,'ccp.lims.Sample.SampleComponent', func)

    # Sample Conditions

    for func in ('','__init__','delete','setName','setDetails','addSampleCondition','removeSampleCondition'):
      notifyFunc(self.updateSampleConditionSetsAfter,'ccp.nmr.Nmr.SampleConditionSet', func)

    for func in ('','__init__','delete','setCondition','setValue','setError','setUnit'):
      notifyFunc(self.updateSampleConditionsAfter,'ccp.nmr.Nmr.SampleCondition', func)

    # Experiments

    for func in ('','__init__','delete','setName', 'setNumDim','setSample',
                 'setSampleConditionSet', 'setSpectrometer', 'setSampleConditionSet'):
      notifyFunc(self.updateExperimentsAfter,'ccp.nmr.Nmr.Experiment', func)

    # NMR Spectrometers

    for func in ('__init__','delete','setName',
                 'setSerialNumber','setDetails','setManufacturer',
                 'setModel','setNominalFreq',
                 'setProtonFreq','setExperiments',
                 'addExperiment','removeExperiment'):
      notifyFunc(self.updateInstrumentsAfter,'ccp.general.Instrument.NmrSpectrometer',func)

    # Structures

    for func in ('__init__','delete'):
      notifyFunc(self.updateStructureAfter,'ccp.molecule.MolStructure.StructureEnsemble', func)

    for func in ('','__init__','delete'):
      notifyFunc(self.updateStrucGenAfter,'ccp.nmr.Nmr.StructureGeneration', func)

  def updateSoftwareAfter(self, software):

    self.after_idle(self.updateSoftware)

  def updateStrucGenAfter(self, strucGen):

    self.updateStructureAfter(strucGen.structureEnsemble)

  def updateStructureAfter(self, ensemble):

    if self.molSystem and ensemble:
      if ensemble.molSystem is self.molSystem:
        self.after_idle(self.updateStructures)

  def updatePersonAfter(self, person):

    if self.entry:
      if person in self.entry.authors:
        self.updatePeople()

      if person in self.entry.contactPersons:
        self.updateAddresses()

  def selectAuthorTable(self, obj, row, col):

    self.author = obj

  def updateEntryAfter(self, entry=None):

    if self.waiting:
      return 

    else:
      self.waiting = True
      self.after_idle(self.updateAll)  

  def updateMain(self):

    if self.entry:
      title = self.entry.title or ''
      details = self.entry.details or ''
      process = self.entry.bmrbProcessing or ''
      self.nmrMethodPulldown.set(self.entry.entryType)
    else:
      title = details = process = ''

    self.titleEntry.set(title)
    self.detailsText.setText(details)
    self.processText.setText(process)
    self.updateMolSystemPulldown()
    self.updateReport()

  def changeMolSystem(self, molSystem):

    if self.entry and (molSystem is not self.entry.molSystem):
      self.entry.molSystem = molSystem
      self.molSystem = molSystem

      if molSystem:

        experiments = self.entry.experiments
        for experiment in experiments:
          if molSystem not in experiment.molSystems:
            self.entry.removeExperiment(experiment)

        peakLists = self.entry.peakLists
        for peakList in peakLists:
          experiment = peakList.dataSource.experiment
          if molSystem not in experiment.molSystems:
            self.entry.removePeakList(peakList)

      self.updateChains()
      self.updateMolecules()
      self.updateCheckShiftListPulldown()

  def updateMolSystemPulldown(self):

    index = 0
    names = []
    molSystems = []

    if self.entry:
      molSystems = self.project.sortedMolSystems()
      molSystem = self.entry.molSystem

      if molSystems:
        names = [ms.code for ms in molSystems]

        if molSystem not in molSystems:
          molSystem = molSystems[0]

        index = molSystems.index(molSystem)  

      else:
        molSystem = None

      if molSystem is not self.entry.molSystem:
        self.changeMolSystem(molSystem)

    self.molSystemPulldown.setup(names, molSystems, index)

  def selectTab(self, index):

    funcsDict = {0:(self.updateMain,),
                 1:(self.updateNmrLists,),
                 2:(self.updatePeople, self.updateAddresses),
                 3:(self.updateCitations, self.updateSoftware),
                 4:(self.updateShiftRefs, self.updateCheckShiftListPulldown),
                 5:(self.updateMolecules, self.updateChains),
                 6:(self.updateSources,),
                 7:(self.updateSamples, self.updateSampleComponents),
                 8:(self.updateSampleConditionSets, self.updateSampleConditions),
                 9:(self.updateExperiments, self.updateInstruments),
                10:(self.updateStructures,)}

    for func in funcsDict[index]:
      func()

  def updateAll(self, project=None):
    # Called by Extend-NMR GUI to change/set CCPN projects 

    if project:
      self.project = project
      self.nmrProject = project.currentNmrProject

    self.updateEntries()
    self.checkEntryConsistency()

    self.selectTab(self.tabbedFrame.selected)    

    self.waiting = False

  def destroy(self):

    self.administerNotifiers(self.unregisterNotify)

    Frame.destroy(self)


  # NMR List functions

  def toggleSubmit(self, nmrListType):

    baseName, listName = self.classSubmitDict[self.entryObjType]

    if self.editObject in getattr(self.entry, listName):
      func = getattr(self.entry,'remove'+baseName)
    else:
      func = getattr(self.entry,'add'+baseName)

    func(self.editObject)      

  def submitAll(self):

    baseName, listName = self.classSubmitDict[self.entryObjType]

    func = getattr(self.entry,'add'+baseName)
    for obj in getNmrLists(self.nmrProject, self.entryObjType):
      if obj not in getattr(self.entry, listName):
        func(obj)

  def submitSelected(self):

    baseName, listName = self.classSubmitDict[self.entryObjType]

    func = getattr(self.entry,'add'+baseName)
    if self.editObject not in getattr(self.entry, listName):
      func(self.editObject)

  def withdrawSelected(self):

    baseName, listName = self.classSubmitDict[self.entryObjType]

    func = getattr(self.entry,'remove'+baseName)
    if self.editObject in getattr(self.entry, listName):
      func(self.editObject)

  def withdrawAll(self):

    baseName, listName = self.classSubmitDict[self.entryObjType]

    func = getattr(self.entry,'remove'+baseName)
    for obj in getNmrLists(self.nmrProject, self.entryObjType):
      if obj in getattr(self.entry, listName):
        func(obj)

  def selectGenTable(self, obj, row, col):

    self.entryObjType = obj
    self.updateEditTable()

  def selectEditTable(self, obj, row, col):

    self.editObject = obj

  def updateNmrLists(self, entry=None):  

    if entry and (entry is not self.entry):
      return

    headColor = [None] * 4

    textMatrix = []
    colorMatrix = []
    objectList = []

    if self.entry:
      for className, title, description in NMR_LISTS_DATA:
        selected = getattr(self.entry, self.classSubmitDict[className][1])
        selected = [s for s in selected if s.className == className]
        nmrLists = getNmrLists(self.nmrProject, className)

        textMatrix.append([title,len(nmrLists),len(selected),description])
        colorMatrix.append(headColor)
        objectList.append(className)

    self.generalTable.update(textMatrix=textMatrix,
                             colorMatrix=colorMatrix,
			     objectList=objectList)

    self.updateEditTable()

  def updateEditTable(self):

    textMatrix = []
    objectList = []
    headingList = []
    colorMatrix = []
    baseName, listName = self.classSubmitDict[self.entryObjType]

    if self.entry:
      for obj in getNmrLists(self.nmrProject, self.entryObjType):
        if obj in getattr(self.entry, listName):
          use = 'Yes'
          colors = [NICE_GREEN] * 3
        else:
          use = 'No'
          colors = [None] * 3

        if hasattr(obj, 'measurements'):
          size = len(obj.measurements)
        elif hasattr(obj, 'peaks'):
          size = len(obj.peaks)
        elif hasattr(obj, 'derivations'):
          size = len(obj.derivations)
        else:
          size = None

        datum = [getNmrListName(obj),
                 size,
                 use]

        objectList.append(obj)
        textMatrix.append(datum)
        colorMatrix.append(colors)

    headingList = self.editTable.headingList
    headingList[0] = self.entryObjType

    self.editTable.update(textMatrix=textMatrix,
                          objectList=objectList,
                          colorMatrix=colorMatrix,
                          headingList=headingList)

  def addAllNmrLists(self):

    if self.entry:
      for className, title, description in NMR_LISTS_DATA:
         baseName, listName = self.classSubmitDict[className]

         func = getattr(self.entry,'add'+baseName)
         for obj in getNmrLists(self.nmrProject, className):
           if obj not in getattr(self.entry, listName):
             func(obj)

  def removeAllNmrLists(self):

    if self.entry:
      for className, title, description in NMR_LISTS_DATA:
        baseName, listName = self.classSubmitDict[className]

        func = getattr(self.entry,'remove'+baseName)
        for obj in getNmrLists(self.nmrProject, className):
          if obj in getattr(self.entry, listName):
            func(obj)


  # People

  def updatePeople(self):

    if self.entry:
      if self.author not in self.entry.authors:
        self.author = None 
    else:
      self.author = None

    textMatrix = []
    objectList = []

    if self.entry:
      for i, author in enumerate(self.entry.authors):
        datum = [i+1,
                 author in self.entry.contactPersons and 'Yes' or None,
                 author.familyName,
                 author.title,
                 author.givenName,
                 ' '.join(author.middleInitials),
                 author.familyTitle]

        objectList.append(author)
        textMatrix.append(datum)

    self.authorTable.update(textMatrix=textMatrix,
	                    objectList=objectList)

  def addAuthor(self):

    if not self.entry:
      return

    fName = askString('Query','Family name:',parent=self) or ''
    fName.strip()

    if fName:
      affStore = getAffiliationStore(self.project)
      person = affStore.findFirstPerson(familyName=fName)
      if (not person) or (person in self.entry.authors):
        person = affStore.newPerson(familyName=fName, title=TITLES[0])

      self.entry.addAuthor(person)

  def removeAuthor(self):

    if not self.entry:
      return

    author = self.author
    if author:

      msg = 'Delete record for %s entirely?'
      if showYesNo('Query', msg % getPersonName(author), parent=self):
        self.entry.removeAuthor(author)
        author.delete()
      else:
        self.entry.removeAuthor(author)

  def setAuthorAsContact(self):

    if not (self.entry and self.author):
      return

    self.entry.contactPersons.append(self.author)

  def setFamilyName(self, event):

    text = self.familyNameEntry.get() or ''
    text.strip()

    if text:
      self.author.familyName = text

  def setPersonTitle(self, event):

    title = self.titlePulldown.getText()
    self.author.title = title

  def setGivenName(self, event):

    text = self.givenNameEntry.get() or ''
    text.strip()

    if text:
      self.author.givenName = text

  def setInitials(self, event):

    text = self.initialsEntry.get() or ''
    initials = []

    for letter in text:
      if letter.upper() != letter.lower():
        initials.append(letter.upper())

    self.author.setMiddleInitials(initials)

  def setFamilyTitle(self, event):

    title = self.famTitlePulldown.getObject()
    self.author.familyTitle = title

  def getFamilyName(self, person):

    self.familyNameEntry.set(person.familyName)

  def getPersonTitle(self, person):

    title = person.title

    if not title:
      return

    names = TITLES
    if title not in names:
      names.append(title)

    index = names.index(title)
    self.titlePulldown.setup(names, names, index)  

  def getGivenName(self, person):

    self.givenNameEntry.set(person.givenName)

  def getInitials(self, person):

    text = ' '.join(person.middleInitials)
    self.initialsEntry.set(text)

  def getFamilyTitle(self, person):

    title = person.familyTitle
    names = ['<None>',] + FAM_TITLES
    objects = [None,] + FAM_TITLES

    if title not in objects:
      names.append(title)
      objects.append(title)

    index = objects.index(title)
    self.famTitlePulldown.setup(names, objects, index)  

  def toggleContact(self, person):

    if person in self.entry.contactPersons:
      self.entry.contactPersons.remove(person)

    else:
      self.entry.contactPersons.append(person)

  def selectAddressTable(self, obj, row, col):

    self.contactPerson = obj

  def updateAddressAfter(self, person):

    if self.waiting:
      return
    else:
      self.waiting = True
      self.after_idle(self.updateAddresses)

  def updateAddresses(self):

    entry = self.entry

    if entry:
      if self.contactPerson not in self.entry.contactPersons:
        self.contactPerson = None
    else:
      self.contactPerson = None

    textMatrix = []
    objectList = []

    if entry:
      for i, contactPerson in enumerate(entry.contactPersons):
        email = addresses = city = stateProv = country = \
                  postalCode = phoneNumber = faxNumber = None
                  
        cPinG = getPersonInGroup(entry, contactPerson)
        
        if cPinG:
          organisation = cPinG.group.organisation
          email = cPinG.emailAddress
          addresses = ','.join(organisation.addresses)
          city = organisation.city
          country = organisation.country
          postalCode = organisation.postalCode
          phoneNumber = '/'.join(cPinG.phoneNumbers)
          faxNumber = cPinG.faxNumber
          position = cPinG.position

        datum = [contactPerson.familyName,
                 contactPerson.givenName,
                 email,
                 addresses,
                 city,
                 stateProv,
                 country,
                 postalCode,
                 phoneNumber,
                 faxNumber,
                 position]

        objectList.append(contactPerson)
        textMatrix.append(datum)

    self.addressTable.update(textMatrix=textMatrix,
                             objectList=objectList)

    self.waiting = False

  def addAddress(self):

    if not self.entry:
      return

    person = self.contactPerson
    personInGroup = getPersonInGroup(self.entry, person)
 
    email = askString('Query','Email address:',parent=self) or ''
    email.strip()

    if email and person:
      personInGroup.emailAddress = email


  def removeAddress(self):

    if not self.entry:
      return

    person = self.contactPerson
    personInGroup = person.currentPersonInGroup
    
    if person and personInGroup:
      msg = 'Delete address for %s entirely?'
      if showYesNo('Query', msg % getPersonName(person), parent=self):
        person.setCurrentPersonInGroup(None)
        personInGroup.delete()
        self.contactPerson = None

  def setEmailAddress(self, event):

    person = self.contactPerson
    if person:
      text = self.emailAddressEntry.get() or ''
      text.strip()

      if text:
        personInGroup = getPersonInGroup(self.entry, person) 
        personInGroup.emailAddress = text

  def setMailAddress(self, event):

    if self.contactPerson:
      text = self.mailAddressEntry.get() or ''
      text.strip()

      if text:
        personInGroup = getPersonInGroup(self.entry, self.contactPerson) 
        personInGroup.group.organisation.addresses = text.split(',')

  def setPersonCity(self, event):

    if self.contactPerson:
      text = self.personCityEntry.get() or ''
      text.strip()

      if text:
        personInGroup = getPersonInGroup(self.entry, self.contactPerson) 
        personInGroup.group.organisation.city = text

  #def setStateProv(self, event):
  #
  #  if self.contactPerson:
  #    text = self.stateProvEntry.get() or ''
  #    text.strip()
  #
  #    if text:
  #      personInGroup = getPersonInGroup(self.entry, self.contactPerson) 
  #      personInGroup.group.... = text

  def setCountry(self, event):

    if self.contactPerson:
      text = self.countryEntry.get() or ''
      text.strip()

      if text:
        personInGroup = getPersonInGroup(self.entry, self.contactPerson) 
        personInGroup.group.organisation.country = text

  def setPostalCode(self, event):

    if self.contactPerson:
      text = self.postalCodeEntry.get() or ''
      text.strip()

      if text:
        personInGroup = getPersonInGroup(self.entry, self.contactPerson) 
        personInGroup.group.organisation.postalCode = text

  def setTelephone(self, event):

    if self.contactPerson:
      text = self.telephoneEntry.get() or ''
      text.strip()

      if text:
        personInGroup = getPersonInGroup(self.entry, self.contactPerson) 
        personInGroup.phoneNumbers = [text,]

  def setFax(self, event):

    if self.contactPerson:
      text = self.faxEntry.get() or ''
      text.strip()

      if text:
        personInGroup = getPersonInGroup(self.entry, self.contactPerson) 
        personInGroup.faxNumber = text

  def setPosition(self, event):

    if self.contactPerson:
      text = self.positionEntry.get() or ''
      text.strip()

      if text:
        personInGroup = getPersonInGroup(self.entry, self.contactPerson) 
        personInGroup.position = text

  def getEmailAddress(self, person):

    if person and person.currentPersonInGroup:
      self.emailAddressEntry.set(person.currentPersonInGroup.emailAddress)

  def getMailAddress(self, person):

    if person and person.currentPersonInGroup:
      self.mailAddressEntry.set(', '.join(person.currentPersonInGroup.group.organisation.addresses) )

  def getPersonCity(self, person):

    if person and person.currentPersonInGroup:
      self.personCityEntry.set(person.currentPersonInGroup.group.organisation.city)

  def getCountry(self, person):

    if person and person.currentPersonInGroup:
      self.countryEntry.set(person.currentPersonInGroup.group.organisation.country)

  def getPostalCode(self, person):

    if person and person.currentPersonInGroup:
      self.postalCodeEntry.set(person.currentPersonInGroup.group.organisation.postalCode)

  def getTelephone(self, person):

    if person and person.currentPersonInGroup:
      numbers = person.currentPersonInGroup.phoneNumbers
    
      if numbers:
        number = numbers[0]
      else:
        number = None  
        
      self.telephoneEntry.set(number)

  def getFax(self, person):

    if person and person.currentPersonInGroup:
      self.faxEntry.set(person.currentPersonInGroup.faxNumber)

  def getPosition(self, person):

    if person and person.currentPersonInGroup:
      self.positionEntry.set(person.currentPersonInGroup.position)


  def updateEntryTitle(self, event=None):

    text = self.titleEntry.get() or ''
    text.strip()

    if self.entry:
      self.entry.setTitle(text or None)

  def setEntryType(self, text):

    if self.entry:
      self.entry.entryType = text

  def setDetails(self, event=None):

    if self.entry:
      text = self.detailsText.getText()[:-1] or ''
      text.rstrip()
      self.entry.details = text or None

  def setProcessing(self, event=None):

    if self.entry:
      text = self.processText.getText()[:-1] or ''
      text.rstrip()
      self.entry.bmrbProcessing = text or None


  # Chem shift reference functions

  def updateShiftRefs(self, obj=None):

    objectList  = []
    textMatrix  = []
    if self.nmrProject:
      for shiftReference in self.nmrProject.sortedShiftReferences():

        refClass = shiftReference.className[:8]

        if refClass == 'External':
          geometry = shiftReference.sampleGeometry
          location = shiftReference.location
          axis     = shiftReference.axis
        else:
          geometry = location = axis = None

        #' '.join([e.name for e in shiftReference.experiments]),
        datum = [shiftReference.serial,
                 refClass,
                 shiftReference.isotopeCode,
                 len(shiftReference.experiments),
                 shiftReference.molName,
                 shiftReference.atomGroup,
                 shiftReference.value,
                 shiftReference.unit,
                 shiftReference.referenceType,
                 shiftReference.indirectShiftRatio,
                 geometry,location,axis]

        textMatrix.append(datum)
        objectList.append(shiftReference)

    self.shiftRefMatrix.update(objectList=objectList, textMatrix=textMatrix)

    self.waiting = False

  def doShiftRefEditMarkExtraRules(self, obj, row, col):

    if (col > 9) and (obj.className != 'ExternalShiftReference'):
      return False

    return True  

  def toggleShiftRefType(self, shiftReference):

    if shiftReference:
      if shiftReference.referenceType == 'direct':
        shiftReference.setReferenceType('indirect')
      else:
        shiftReference.setReferenceType('direct')

  def getShiftRefValue(self, shiftReference):

    value = 0.0
    if shiftReference:
      value = shiftReference.value

    self.valueEntry.set(value)

  def getShiftRefRatio(self, shiftReference):

    value = 0.0
    if shiftReference:
      value = shiftReference.indirectShiftRatio

    self.ratioEntry.set(value)

  def getShiftRefGeometry(self, shiftReference):

    text = ''
    if shiftReference and (shiftReference.className == 'ExternalShiftReference'):
      text = shiftReference.sampleGeometry

    self.geometryEntry.set(text)

  def getShiftRefLocation(self, shiftReference):

    text = ''
    if shiftReference and (shiftReference.className == 'ExternalShiftReference'):
      text = shiftReference.location

    self.locationEntry.set(text)

  def getShiftRefAxis(self, shiftReference):

    text = ''
    if shiftReference and (shiftReference.className == 'ExternalShiftReference'):
      text = shiftReference.axis

    self.axisEntry.set(text)

  def getShiftRefAtomGroup(self, shiftReference):

    text = ''
    if shiftReference:
      text = shiftReference.atomGroup

    self.atomGroupEntry.set(text)

  def getShiftRefIsotope(self, shiftReference):

    self.isotopePulldown.set(shiftReference.isotopeCode)

  def getShiftRefMolName(self, shiftReference):

    self.molNamePulldown.set(shiftReference.molName)

  def getShiftRefUnit(self, shiftReference):

    self.unitPulldown.set(shiftReference.unit)

  def setShiftRefValue(self, event):

    if self.shiftReference:
      value = self.valueEntry.get() or 0.0

      self.shiftReference.value = value

  def setShiftRefRatio(self, event):

    if self.shiftReference:
      value = self.ratioEntry.get() or None

      self.shiftReference.indirectShiftRatio = value

  def setShiftRefGeometry(self, event):

    if self.shiftReference:
      text = self.geometryEntry.get() or None

      self.shiftReference.sampleGeometry = text

  def setShiftRefLocation(self, event):

    if self.shiftReference:
      text = self.locationEntry.get() or None

      self.shiftReference.location = text

  def setShiftRefAxis(self, event):

    if self.shiftReference:
      text = self.axisEntry.get() or None

      self.shiftReference.axis = text

  def setShiftRefAtomGroup(self, event):

    if self.shiftReference:
      text = self.atomGroupEntry.get() or None

      self.shiftReference.atomGroup = text

  def setShiftRefIsotope(self, null):

    isotopeCode = self.isotopePulldown.getText()

    self.shiftReference.isotopeCode = isotopeCode

  def setShiftRefMolName(self, null):

    molName = self.molNamePulldown.getText() 

    self.shiftReference.molName = molName

  def setShiftRefUnit(self, null):

    unit = self.unitPulldown.getText()

    self.shiftReference.unit = unit

  def addInternalShiftRef(self):

    if self.nmrProject:
      newRef = self.nmrProject.newInternalShiftReference
      self.shiftReference = newRef(isotopeCode='1H', molName='TSP',
                                   atomGroup='H', value=0.000,
                                   referenceType='direct')

  def addExternalShiftRef(self):

    if self.nmrProject:
      newRef = self.nmrProject.newExternalShiftReference
      self.shiftReference = newRef(isotopeCode='1H', molName='TSP',
                                   atomGroup='H', value=0.000,
                                   referenceType='direct')

  def removeShiftRefs(self):

    haveExpts = False
    for shiftReference in self.shiftRefMatrix.currentObjects:
      if shiftReference.experiments:
        haveExpts = True
        break

    msg = 'Really delete shift references with links to experiments?'
    if haveExpts and not showOkCancel('Confrim', msg, parent=self):
      return

    for shiftReference in self.shiftRefMatrix.currentObjects:
      shiftReference.delete()

  def selectShiftRef(self, shiftRef, row, col):

    if shiftRef:
      self.shiftReference = shiftRef


  # Shift Check functions

  def updateCheckShiftListPulldown(self):

    names = []
    index = 0

    if self.nmrProject:
      shiftLists = getNmrLists(self.nmrProject, 'ShiftList')
    else:
      shiftLists = []  

    shiftList = self.checkShiftList

    if shiftLists:
      names = ['%d' % sl.serial for sl in shiftLists]

      if shiftList not in shiftLists:
        shiftList = shiftLists[0]

      index = shiftLists.index(shiftList)  

    else:
      shiftList = None

    if shiftList is not self.checkShiftList:
      self.changeCheckShiftList(shiftList)

    self.checkShiftListPulldown.setup(names, shiftLists, index)

  def changeCheckShiftList(self, shiftList):

    if shiftList is not self.checkShiftList:
      self.checkShiftList = shiftList
      self.updateShiftCheck()

  def updateShiftCheck(self):

    textMatrix  = []
    objectList  = []
    colorMatrix = []

    if self.checkShiftList:

      data = analyseChemicalShifts(self.checkShiftList)

      for shift, datum in data:
        num, isotope, name, boundResonances, mean, \
         coil, prob, value, sd, peakDelta, \
         nContribs, isDuplicate, boundWarn = datum

        resonanceSet = shift.resonance.resonanceSet
        if resonanceSet:
          atom = resonanceSet.findFirstAtomSet().findFirstAtom()
          if atom.topObject is not self.molSystem:
            continue

        color = None             
        if prob is not None:
          if prob < 0.001:
            color = '#FF0000'
          elif prob < 0.01:
            color = '#d0b8a0'
          #elif prob < 0.05:
          #  color = '#d0d0a0'

        if color is None:
          continue

        colors = [color] * 7

        objectList.append(shift)
        textMatrix.append([num, isotope, name, value, sd, mean, coil])
        colorMatrix.append(colors)

    self.shiftCheckMatrix.update(textMatrix=textMatrix,
                                objectList=objectList,
                                colorMatrix=colorMatrix)


  # Molecule functions

  def selectChain(self, chain, row, col):

    self.chain = chain

  def getChainConfIsomer(self, chain):

    self.chainConfIsomerEntry.set(chain.conformationalIsomer)

  def setChainConfIsomer(self, event):

    if self.chain:
      text = self.chainConfIsomerEntry.get() or ''
      text.strip()

      self.chain.conformationalIsomer = text or None

  def getChainPhysicalState(self, chain):
    
    if len(chain.residues) > 1:
      names  = POLYMER_PHYSICAL_STATES[:]
      states = POLYMER_PHYSICAL_STATES[:]
    
    else:
      names = []
      states = []
   
    names.append('undefined')
    states.append(None)
    
    state = chain.physicalState
    if state not in states:
       names.insert(0, state)
       states.insert(0, state)

    index = states.index(state)

    self.chainPhysicalStatePulldown.setup(names, states, index)

  def setChainPhysicalState(self, event):

    if self.chain:
      state = self.chainPhysicalStatePulldown.getObject() or None
      self.chain.physicalState = state

  def getChainChemExchState(self, chain):

    self.chainChemExchStateEntry.set(chain.chemExchangeState)

  def setChainChemExchState(self, event):

    if self.chain:
      text = self.chainChemExchStateEntry.get() or ''
      text.strip()

      self.chain.chemExchangeState = text or None

  def updateMolDataAfter(self, obj=None):
    
    if self.tabbedFrame.selected == 5:
      self.after_idle(self.updateChains)
      self.after_idle(self.updateMolecules)

  def updateChains(self):

    textMatrix  = []
    objectList  = []

    if self.molSystem:
      for chain in self.molSystem.sortedChains():
        datum = [chain.code,
                 len(chain.residues),
                 chain.molecule.name,
                 chain.conformationalIsomer,
                 chain.chemExchangeState,
                 chain.physicalState]

        objectList.append(chain)
        textMatrix.append(datum)

    self.molSysTable.update(textMatrix=textMatrix,
                            objectList=objectList)

  def getMolecules(self):

    molecules = []
    if self.molSystem:
      molecules = list(set([c.molecule for c in self.molSystem.chains]))
      molecules.sort()

    return molecules

  def updateMolecules(self):

    textMatrix  = []
    objectList  = []

    molecules = self.getMolecules()

    for molecule in molecules:
      molResidues = molecule.sortedMolResidues()

      seq = ''.join([mr.chemComp.code1Letter or 'X' for mr in molResidues[:25]])

      datum = [molecule.name,
               molecule.molType,
               len(molResidues),
               seq + '...',
               molecule.isParamagnetic and 'Yes' or 'No']


      objectList.append(molecule)
      textMatrix.append(datum)

    self.moleculeTable.update(textMatrix=textMatrix,
                              objectList=objectList)

    textMatrix  = []
    objectList  = []

    chemComps = set()
    for molecule in molecules:
      for molResidue in molecule.molResidues:
        chemComp = molResidue.chemComp

        if chemComp.molType == 'other':
          chemComps.add(chemComp)
        elif not chemComp.isLinearPolymer:
          chemComps.add(chemComp)
        elif chemComp.stdChemComp and (chemComp.stdChemComp is not chemComp):
          chemComps.add(chemComp)

    chemComps = list(chemComps)
    chemComps.sort()

    for chemComp in chemComps:

      datum = [chemComp.ccpCode,
               chemComp.code3Letter,
               chemComp.molType,
               chemComp.name]

      objectList.append(chemComp)
      textMatrix.append(datum)

    self.unusualChemCompTable.update(textMatrix=textMatrix,
                                      objectList=objectList)


  # Source functions

  def selectEntryMol(self, obj, row, col):

    self.entryMolecule = obj

  def selectNatSource(self, obj, row, col):

    self.natSource = obj

    for entMol in self.entry.sortedEntryMolecules():
      if self.natSource.findFirstMolecule().findFirstEntryMolecule() == entMol:
        self.entryMolecule = entMol
        break

  def updateSourcesAfter(self, person):

    if self.waiting:
      return
    else:
      self.waiting = True
      self.after_idle(self.updateSources)

  def updateSources(self):

    if self.entry:
      if self.entryMolecule not in self.entry.entryMolecules:
        self.entryMolecule = None
    else:
      self.entryMolecule = None

    textMatrix  = []
    objectList  = []

    for entryMol in self.entry.entryMolecules:
      expSource = None
      if entryMol:
        expSource = entryMol.experimentalSource

      if expSource:
        datum = [expSource.scientificName,
                 expSource.organismName,
                 entryMol.molecule.name,
                 entryMol.productionMethod,
                 expSource.strain,
                 entryMol.vectorType,
                 expSource.plasmid]

        objectList.append(entryMol)
        textMatrix.append(datum)

    self.expSourceTable.update(textMatrix=textMatrix,
                               objectList=objectList)

    textMatrix  = []
    objectList  = []

    for entryMol in self.entry.entryMolecules:
      natSource = None
      if entryMol:
        natSource = entryMol.molecule.naturalSource

      if natSource:
        datum = [natSource.scientificName,
                 natSource.organismName,
                 entryMol.molecule.name,
                 entryMol.sourceType,
                 natSource.strain,
                 natSource.variant,
                 natSource.geneMnemonic]

        objectList.append(natSource)
        textMatrix.append(datum)

    self.natSourceTable.update(textMatrix=textMatrix,
                               objectList=objectList)

    self.waiting = False

  def addExpSource(self):

    if not self.molSystem:
      return

    entry = self.entry

    molecules = set()
    for chain in self.molSystem.chains:
      molecule = chain.molecule
      entryMolecule = entry.findFirstEntryMolecule(molecule=molecule)
      
      if not entryMolecule:
        molecules.add(molecule)
    
    if not molecules:
      chain = self.molSystem.findFirstChain()
      
      if chain:
        molecules.add(chain.molecule)
            
    # First time round this will make at least
    # one exp source for each molecule

    for molecule in molecules:
       
      for prodMethod0 in PRODUCTION_METHODS:
        if not entry.findFirstEntryMolecule(molecule=molecule,
                                       productionMethod=prodMethod0):
          prodMethod = prodMethod0
          break
          
      else:
        prodMethod = UNDEFINED
        while entry.findFirstEntryMolecule(molecule=molecule,
                                           productionMethod=prodMethod):
          prodMethod += '?'

      entryMolecule = entry.newEntryMolecule(molecule=molecule,
                                             productionMethod=prodMethod)
      getExpSource(entryMolecule)

  def removeExpSource(self):

    if self.entryMolecule:
      expSource = self.entryMolecule.experimentalSource
      
      self.entryMolecule.delete()
      
      if expSource and not (expSource.entryMolecules or expSource.molecules):
        expSource.delete()      
    
      self.entryMolecule = None

    #self.waiting = False

  def setExpHostSciName(self, event):

    if self.entryMolecule:
      names = self.expHostSciNamePulldown.getObject()
      expSource = getExpSource(self.entryMolecule)
 
      if names is None:
        msg = 'Source organism scientific name:'
        sciName = askString('Input', msg, parent=self) or ''
        sciName.strip()
        
        if sciName:
           expSource.scientificName = sciName
           
           if expSource.organismName == UNDEFINED:
             expSource.organismName = sciName

      else:
        expSource.scientificName = names[0]
        
        if expSource.organismName == UNDEFINED:
          expSource.organismName = names[1] or names[0]
 
  def setExpHostName(self, event):

    if self.entryMolecule:
      expSource = getExpSource(self.entryMolecule)
      name = self.expHostNameEntry.get()
      name.strip()
      expSource.organismName = name or None

  def setExpHostMol(self, event):

    entryMolecule = self.entryMolecule
    if entryMolecule:
      molecule = self.expHostMolPulldown.getObject() or None
      
      if molecule:
        prodMethod = entryMolecule.productionMethod
        sourceType = entryMolecule.sourceType
        vectorType = entryMolecule.vectorType
        expSource  = getExpSource(entryMolecule)
        
        entryMolecule.delete()
        entryMolecule =self.entry.newEntryMolecule(molecule=molecule,
                                                   experimentalSource=expSource,
                                                   productionMethod=prodMethod,
                                                   vectorType=vectorType,
                                                   sourceType=sourceType)
        self.entryMolecule = None

  def setExpHostProdMethod(self, event):

    if self.entryMolecule:
      prodMethod = self.expHostProdMethodPulldown.getObject()

      if prodMethod is None:
        msg = 'Non standard production method:'
        prodMethod = askString('Input', msg, parent=self) or ''
        prodMethod.strip()

      self.entryMolecule.productionMethod = prodMethod or None

  def setExpHostStrain(self, event):

    if self.entryMolecule:
      expSource = getExpSource(self.entryMolecule)
      expSource.strain = self.expHostStrainEntry.get() or None

  def setExpHostVecType(self, event):

    if self.entryMolecule:
      vecType = self.expHostVecTypePulldown.getObject()

      if vecType is None:
        msg = 'Non standard vector type:'
        vecType = askString('Input', msg, parent=self) or ''
        vecType.strip()

      self.entryMolecule.vectorType = vecType or None

  def setExpHostVecName(self, event):

    if self.entryMolecule:
      expSource = getExpSource(self.entryMolecule)
      expSource.plasmid = self.expHostVecNameEntry.get() or None

  def getExpHostSciName(self, entryMolecule):

    index = 0
    names = []
    organisms = []
    categories = []

    if entryMolecule:
      expSource = getExpSource(entryMolecule)
      sciName0 = expSource.scientificName
      
      for kingdom in ORGANISMS.keys():
        for sciName, commonName in ORGANISMS[kingdom]:
          names.append(sciName)
          organisms.append((sciName, commonName))
          categories.append('%s %s' % (kingdom, sciName[0]))
          
          if sciName == sciName0:
            index = len(organisms)-1

      names.append('<Other>')
      organisms.append(None)
      categories.append(None)
      
    self.expHostSciNamePulldown.setup(names, organisms, index, categories=categories)

  def getExpHostName(self, entryMolecule):

    value = None
    if entryMolecule:
      expSource = getExpSource(entryMolecule)
      value = expSource.organismName

    self.expHostNameEntry.set(value)

  def getExpHostMol(self, entryMolecule):

    molecules = self.getMolecules()

    index = 0
    if self.entryMolecule:
      index = molecules.index(self.entryMolecule.molecule)

    names = [ mol.name for mol in molecules ]

    self.expHostMolPulldown.setup(names, molecules, index)

  def getExpHostProdMethod(self, entryMolecule):

    if not entryMolecule:
      return

    if not hasattr(self, 'prodMethods'):
      self.prodMethods = PRODUCTION_METHODS
      self.prodMethods.sort()

    cProdMethod = entryMolecule.productionMethod

    if cProdMethod not in self.prodMethods:
      self.prodMethods.append(cProdMethod)
      self.prodMethods.sort()

    # Filter out already used methods
    prodMethods = []
    entry = entryMolecule.entry
    for prodMethod in self.prodMethods:
      if not entry.findFirstEntryMolecule(molecule=entryMolecule.molecule,
                                          productionMethod=prodMethod):
        prodMethods.append(prodMethod)
    
    index = prodMethods.index(cProdMethod)
    names = prodMethods[:] + ['<Other>',]
    prodMethods.append(None)

    self.expHostProdMethodPulldown.setup(names, prodMethods, index)

  def getExpHostStrain(self, entryMolecule):

    value = None
    if entryMolecule:
      expSource = getExpSource(entryMolecule)
      value = expSource.strain

    self.expHostStrainEntry.set(value)

  def getExpHostVecType(self, expSource):

    if not hasattr(self, 'vecTypes'):
      self.vecTypes = VECTOR_TYPES
      self.vecTypes.sort()
      self.vecTypes.append(None)

    cVecType = None
    if self.entryMolecule:
      cVecType = self.entryMolecule.vectorType

    if cVecType:
      if cVecType not in self.vecTypes:
        self.vecTypes.insert(0, cVecType)
        self.vecTypes.remove(None)
        self.vecTypes.sort()
        self.vecTypes.append(None)

    index = self.vecTypes.index(cVecType)

    names = self.vecTypes[:-1] + ['<Other>',]

    self.expHostVecTypePulldown.setup(names, self.vecTypes, index)

  def getExpHostVecName(self, entryMolecule):

    value = None
    if entryMolecule:
      expSource = getExpSource(entryMolecule)
      value = expSource.plasmid

    self.expHostVecNameEntry.set(value)

  def addNatSources(self):

    if not self.molSystem:
      return

    entry = self.entry

    molecules = set()
    for chain in self.molSystem.chains:
      molecule = chain.molecule
      
      if not molecule.naturalSource:
        molecules.add(molecule)
                
    # First time round this will make at least
    # one natural source for each molecule
    
    tax = getTaxonomy(entry.root)
    for molecule in molecules:
       
      #for natSource in tax.naturalSources:
      #  if natSource.molecules:
      #    molecule.naturalSource = natSource
      #    break
      #    
      #else:    
      
      natSource = tax.newNaturalSource(organismName=UNDEFINED,
                                       scientificName=UNDEFINED)
      molecule.naturalSource = natSource

  def removeNatSource(self):

    if self.natSource:
      self.natSource.delete()
      self.natSource = None

    #self.waiting = False

  def setNatSourceSciName(self, event):

    if self.natSource:
      names = self.natSourceSciNamePulldown.getObject()
 
      if names is None:
        msg = 'Source organism scientific name:'
        sciName = askString('Input', msg, parent=self) or ''
        sciName.strip()
        
        if sciName:
           self.natSource.scientificName = sciName
           
           if self.natSource.organismName == UNDEFINED:
             self.natSource.organismName = sciName

      else:
        self.natSource.scientificName = names[0]
        
        if self.natSource.organismName == UNDEFINED:
          self.natSource.organismName = names[1] or names[0]

  def setNatSourceName(self, event):

    if self.natSource:
      self.natSource.organismName = self.natSourceNameEntry.get() or ''

  def setNatSourceMol(self, event):

    if self.natSource:
      molecule = self.natSourceMolPulldown.getObject() or None
      if molecule:
        self.natSource.molecule = molecule

  def setNatSourceOrgType(self, event):

    if self.natSource:
      orgType = self.natSourceOrgTypePulldown.getObject()

      if orgType is None:
        msg = 'Non standard organism type:'
        vecType = askString('Input', msg, parent=self) or ''
        vecType.strip()

      self.entryMolecule.source = orgType or None

  def setNatSourceStrain(self, event):

    if self.natSource:
      self.natSource.strain = self.natSourceStrainEntry.get() or None

  def setNatSourceVariant(self, event):

    if self.natSource:
      self.natSource.variant = self.natSourceVariantEntry.get() or None

  def setNatSourceGeneName(self, event):

    if self.natSource:
      self.natSource.geneMnemonic = self.natSourceGeneNameEntry.get() or None

  def getNatSourceSciName(self, natSource):

    index = 0
    names = []
    organisms = []
    categories = []

    if self.natSource:
      sciName0 = self.natSource.scientificName
      
      for kingdom in ORGANISMS.keys():
        for sciName, commonName in ORGANISMS[kingdom]:
          names.append(sciName)
          organisms.append((sciName, commonName))
          categories.append('%s %s' % (kingdom, sciName[0]))
          
          if sciName == sciName0:
            index = len(organisms)-1

      names.append('<Other>')
      organisms.append(None)
      categories.append(None)
      
    self.natSourceSciNamePulldown.setup(names, organisms, index, categories=categories)

  def getNatSourceName(self, natSource):

    value = None
    if natSource:
      value = natSource.organismName

    self.natSourceNameEntry.set(value)

  def getNatSourceMol(self, natSource):

    molecules = self.getMolecules()

    index = 0
    if self.entryMolecule:
      index = molecules.index(self.entryMolecule.molecule)

    names = [ mol.name for mol in molecules ]

    self.natSourceMolPulldown.setup(names, molecules, index)

  def getNatSourceOrgType(self, natSource):

    if not hasattr(self, 'orgTypes'):
      self.orgTypes = ORGANISM_TYPES
      self.orgTypes.sort()
      self.orgTypes.append(None)

    cOrgType = None
    if self.entryMolecule:
      cOrgType = self.entryMolecule.sourceType

    if cOrgType:
      if cOrgType not in self.orgTypes:
        self.orgTypes.insert(0, cOrgType)
        self.orgTypes.remove(None)
        self.orgTypes.sort()
        self.orgTypes.append(None)

    index = self.orgTypes.index(cOrgType)

    names = self.orgTypes[:-1] + ['<Other>',]

    self.natSourceOrgTypePulldown.setup(names, self.orgTypes, index)

  def getNatSourceStrain(self, natSource):

    value = None
    if natSource:
      value = natSource.strain

    self.natSourceStrainEntry.set(value)

  def getNatSourceVariant(self, natSource):

    value = None
    if natSource:
      value = natSource.variant

    self.natSourceVariantEntry.set(value)

  def getNatSourceGeneName(self, natSource):

    value = None
    if natSource:
      value = natSource.geneMnemonic

    self.natSourceGeneNameEntry.set(value)


  # Experiment functions

  def checkExperimentRemoval(self, experiment, verbose=False):

    for spectrum in experiment.dataSources:
      for peakList in spectrum.peakLists:
        if peakList in self.entry.peakLists:
          if verbose:
            msg = "Cannot toggle experiment off while it's "
            msg += "peak lists are selected for deposition."
            showWarning('Warning', msg, parent=self)
          return False

    constraintSets = set()
    for structureAnalysis in self.entry.structureAnalyses:
      rSet = structureAnalysis.nmrConstraintStore
      if rSet:
        constraintSets.add(rSet)

    for structureAnalysis in self.entry.structureGenerations:
      rSet = structureAnalysis.nmrConstraintStore
      if rSet:
        constraintSets.add(rSet)

    for rSet in constraintSets:
      for constraintList in rSet.constraintLists:
        if experiment in constraintList.experiments:
          if verbose:
            msg = "Cannot toggle experiment off as it is associated with "
            msg += "the structural restraints selected for deposition."
            showWarning('Warning', msg, parent=self)
          return False

    return True

  def toggleExperiment(self, experiment):

    if experiment in self.entry.experiments:
      present = True
    else:
      present = False

    if present:
      if not self.checkExperimentRemoval(experiment, verbose=True):
        return

      self.entry.removeExperiment(experiment)

    else:
      self.entry.addExperiment(experiment)

  def selectExperiment(self, experiment, row, col):

    self.experiment = experiment

  def addExperiment(self):

    msg = 'Name of experiment'
    name = askString('Query', msg, parent=self) or ''
    name.strip()

    #msg = 'No of dimensions'
    #numDim = askInteger('Query', msg, parent=self) or 2
    numDim = 2

    self.nmrProject = getNmrProject(self.project)

    self.experiment = self.nmrProject.newExperiment(name=name, numDim=numDim)

    self.entry.addExperiment(self.experiment)

  def removeExperiment(self):

    if self.experiment:
      self.experiment.delete()
      self.experiment = None

  def setExperimentName(self, event):

    if self.experiment:
      self.experiment.name = self.experimentNameEntry.get() or self.experiment.name

  def setExperimentSample(self, event):

    if self.experiment:

      sample = self.experimentSamplePulldown.getObject()

      if sample:
        self.experiment.setSample(sample)

  def setExperimentSampleCond(self, event):

    if self.experiment:

      scs = self.experimentSampleCondPulldown.getObject()

      if scs:
        self.experiment.setSampleConditionSet(scs)

  def setExperimentSpectrometer(self, event):

    if self.experiment:

      spectrometer = self.experimentSpecPulldown.getObject()

      if spectrometer:
        self.experiment.setSpectrometer(spectrometer)

  def setExpShiftRefs(self, obj):
  
    if self.experiment:
      if obj is None:
        self.experimentTable.keyPressEscape()
      else:
        shiftRefs = self.experiment.nmrProject.sortedShiftReferences()
        values = self.expShiftRefSelect.get()
        selectedRefs = [shiftRefs[i] for i in range(len(values)) if values[i]]
        self.experiment.setShiftReferences(selectedRefs)
        self.experimentTable.keyPressEscape()
  
  def getExpShiftRefs(self, experiment):
  
    shiftRefs = self.nmrProject.sortedShiftReferences()
    names  = []
    values = []
    for shiftReference in shiftRefs:
      data = (shiftReference.serial,
              shiftReference.isotopeCode,
              shiftReference.molName)
      names.append('%d:%s:%s' % data)
      
      if shiftReference in experiment.shiftReferences:
        values.append(True)
      else:
        values.append(False)  
        
    self.expShiftRefSelect.set(values=values,options=names)

  def getExperimentName(self, experiment):

    text = ''
    if experiment:
      text = experiment.name

    self.experimentNameEntry.set(text)

  def getExperimentSample(self, experiment):

    sampleStore = getSampleStore(self.project)

    index = 0
    samples = []
    names = []
    for sample in sampleStore.sortedAbstractSamples():
      names.append(sample.name)
      samples.append(sample)

    if experiment.sample:
      index = samples.index(experiment.sample)

    self.experimentSamplePulldown.setup(names, samples, index)

  def getExperimentSampleCond(self, experiment):

    self.nmrProject = getNmrProject(self.project)

    index = 0
    scsList = []
    names = []
    for scs in self.nmrProject.sortedSampleConditionSets():
      names.append(scs.name)
      scsList.append(scs)

    if experiment.sampleConditionSet:
      index = scsList.index(experiment.sampleConditionSet)

    self.experimentSampleCondPulldown.setup(names, scsList, index)

  def getExperimentSpectrometer(self, experiment):

    instrumentStore = getInstrumentStore(self.project)
    getInstruments = instrumentStore.findAllInstruments

    spectrometers = list(getInstruments(className='NmrSpectrometer') )
    spectrometers.sort()
    
    index = 0
    names = []
    for spectrometer in spectrometers:
      names.append(spectrometer.name)

    if experiment.spectrometer:
      index = spectrometers.index(experiment.spectrometer)

    self.experimentSpecPulldown.setup(names, spectrometers, index)

  def submitAllExperiments(self):

    if self.entry and self.nmrProject:
      for experiment in self.nmrProject.sortedExperiments():
        if experiment not in self.entry.experiments:
          self.entry.addExperiment(experiment)

  def submitMinExperiments(self):   

    if self.entry:
      for experiment in self.entry.experiments:
        if self.checkExperimentRemoval(experiment):
          self.entry.removeExperiment(experiment)

  def updateExperimentsAfter(self, *opt):

    if self.waiting:
      return
    else:
      self.waiting = True
      self.after_idle(self.updateExperiments)

  def updateExperiments(self):

    self.updateSampleConditionSets()

    textMatrix  = []
    objectList  = []
    colorMatrix = []

    if self.entry and self.nmrProject:

      for experiment in self.nmrProject.sortedExperiments():

        if experiment.spectrometer:
          spectrometer = experiment.spectrometer.name
        else:
          spectrometer = None

        if experiment.sample:
          sample = experiment.sample.name
        else:
          sample = None

        if experiment.sampleConditionSet:
          scs = experiment.sampleConditionSet.name
        else:
          scs = None

        if experiment in self.entry.experiments:
          submit = 'Yes'
          colors = [NICE_GREEN] * 7
        else:
          submit = 'No'
          colors = [None] * 7

        shiftRefs = []
        for shiftReference in experiment.sortedShiftReferences():
          data = (shiftReference.isotopeCode,
                  shiftReference.molName)
          shiftRefs.append('%s:%s' % data)
 
        shiftRef = ','.join(shiftRefs)
 

        datum = [experiment.name,
                 submit,
                 sample,
                 scs,
                 shiftRef,
                 experiment.rawData and 'Yes' or 'No',
                 spectrometer]

        objectList.append(experiment)
        textMatrix.append(datum)
        colorMatrix.append(colors)

    self.experimentTable.update(textMatrix=textMatrix,
                                objectList=objectList,
                                colorMatrix=colorMatrix)

    self.waiting = False

  """
  Experiment set attrs:

  sampleState
  sampleVolume
  volumeUnit
  sample
  """


  # Sample functions

  def selectSample(self, sample, row, col):

    self.sample = sample

    self.updateSampleComponentsAfter()

  def addSample(self):

    msg = 'Name of sample'
    name = askString('Query', msg, parent=self) or ''
    name.strip()

    if len(name.split()) > 1:
      showWarning('Failure','Name cannot contain whitespace.', parent=self)
      return

    sampleStore = getSampleStore(self.project)

    if sampleStore.findFirstAbstractSample(name=name):
      showWarning('Failure','Name already in use.', parent=self)
      return

    classification = getClassification(self.project)

    if not hasattr(self, 'sampleCategory'):
      self.sampleCategory = classification.findFirstSampleCategory(name='deposition')
      if not self.sampleCategory:
        self.sampleCategory = classification.newSampleCategory(name='deposition')

    sampleStore.newSample(name=name, sampleCategories=[self.sampleCategory])

  def removeSample(self):  

    if self.sample:
      self.sample.delete()
      self.sample = None

  def setSampleAmount(self, event):

    if self.sample:
      self.sample.initialAmount = self.sampleAmountEntry.get() or None

  def setSampleUnit(self, event):

    if self.sample:
      unit = self.sampleUnitPulldown.getObject()
      self.sample.amountUnit = unit

  def setSampleIonic(self, event):

    if self.sample:
      ionicStr = self.sampleIonicEntry.get() or None
      self.sample.ionicStrength = ionicStr

  def setSamplePh(self, event):

    if self.sample:
      ph = self.samplePhEntry.get() or None
      self.sample.ph = ph

  def setSampleDetails(self, event):

    if self.sample:
      details = self.sampleDetailsEntry.get() or ''
      self.sample.details = details

  def getSampleAmount(self, sample):

    value = None
    if sample:
      value = sample.initialAmount

    self.sampleAmountEntry.set(value)

  def getSampleUnit(self, sample):

    unit = sample.amountUnit

    if not unit:
      return

    names = SAMPLE_UNITS

    index = names.index(unit)
    self.sampleUnitPulldown.setup(names, names, index)

  def getSampleIonic(self, sample):

    value = None
    if sample:
      value = sample.ionicStrength

    self.sampleIonicEntry.set(value)

  def getSamplePh(self, sample):

    value = None
    if sample:
      value = sample.ph

    self.samplePhEntry.set(value)

  def getSampleDetails(self, sample):

    text = ''
    if sample:
      text = sample.details

    self.sampleDetailsEntry.set(text)

  def updateSamplesAfter(self, *opt):

    if self.waiting:
      return
    else:
      self.waiting = True
      self.after_idle(self.updateSamples)

  def updateSamples(self, obj=None):

    textMatrix  = []
    objectList  = []

    if self.project:
      sampleStore = getSampleStore(self.project)

      for i, sample in enumerate(sampleStore.sortedAbstractSamples()):

        if sample.className != 'Sample':
          continue

        datum = [i+1,
                 sample.name,
                 sample.initialAmount,
                 sample.amountUnit,
                 sample.ionicStrength,
                 sample.ph,
                 sample.details]

        objectList.append(sample)
        textMatrix.append(datum)

    self.sampleTable.update(textMatrix=textMatrix,
                            objectList=objectList)

    self.waiting = False


  # Sample component functions

  def selectSampleComponent(self, obj, row, col):

    self.sampleComponent = obj

  def addPolySampleComponents(self):

    if not self.sample:
      return

    if not self.molSystem:
      return

    refSampleCompStore = getRefSampleComponentStore(self.project)

    molecules = self.getMolecules()

    for mol in molecules:
      if not mol.isFinalised:
        mol.isFinalised = True

      sampCompFlag = False

      for sampComp in self.sample.sortedSampleComponents():
        if sampComp.refComponent.className == 'MolComponent':
          if sampComp.refComponent.molecule == mol:
            sampCompFlag = True

      if sampCompFlag:
        continue

      molComp = refSampleCompStore.newMolComponent(name=mol.name + self.sample.name, # TODO - better key!
                                                   molecule=mol)

      sampComp = self.sample.newSampleComponent(refComponent=molComp)

  def addOtherSampleComponent(self):

    if not self.sample:
      return

    msg = 'Other sample component'
    sampCompMol = askString('Input', msg, parent=self) or ''
    sampCompMol.strip()

    refSampleCompStore = getRefSampleComponentStore(self.project)

    for comp in refSampleCompStore.sortedComponents():
      if sampCompMol == comp.name:
        #complain
        return

    molComp = refSampleCompStore.newMolComponent(name=sampCompMol + self.sample.name, # TODO: better?
                                                 details = sampCompMol)

    sampComp = self.sample.newSampleComponent(refComponent=molComp)

  def removeSampleComponent(self):

    if self.sampleComponent:

      msg = 'Really remove sample component?'

      if showOkCancel('query',msg):
        self.sampleComponent.delete()
        self.sampleComponent = None

  def updateSampleComponentsAfter(self, *opt):

    #if self.waiting:
    #  return
    #else:
    #  self.waiting = True

    self.after_idle(self.updateSampleComponents)

  def updateSampleComponents(self, obj=None):

    textMatrix  = []
    objectList  = []

    if self.project and self.sample:

      for sampComp in self.sample.sortedSampleComponents():

        molName = ''

        if sampComp.refComponent.className == 'MolComponent':
          if sampComp.refComponent.molecule:
            molName = sampComp.refComponent.molecule.name
          else:
            molName = sampComp.refComponent.details
        else:
          molName = sampComp.refComponent.details

        datum = [molName,
                 sampComp.concentration,
                 sampComp.concentrationError,
                 sampComp.concentrationUnit]

        objectList.append(sampComp)
        textMatrix.append(datum)

    self.sampleComponentTable.update(textMatrix=textMatrix,
                                     objectList=objectList)

    #self.waiting = False

  def setSampleCompMol(self, event):

    if not self.sample:
      return

    if self.sampleComponent:
      sampCompMol = self.sampleCompMolPulldown.getObject()

      if sampCompMol is None:
        msg = 'Other sample component'
        sampCompMol = askString('Input', msg, parent=self) or ''
        sampCompMol.strip()

      molecules = self.getMolecules()

      for mol in molecules:
        if sampCompMol == mol.name:
          if not mol.isFinalised:
            mol.isFinalised = True

          if self.sampleComponent.refComponent.className == 'MolComponent':
            self.sampleComponent.refComponent.setMolecule(mol)
            break
      else:
        #self.sampleComponent.refComponent.name = sampCompMol + self.sample.name # TODO: better
        self.sampleComponent.refComponent.details = sampCompMol

  def setSampleCompConc(self, event):

    if self.sampleComponent:
      conc = self.sampleCompConcEntry.get() or None
      self.sampleComponent.concentration = conc

  def setSampleCompConcErr(self, event):

    if self.sampleComponent:
      err = self.sampleCompConcErrEntry.get() or None
      self.sampleComponent.concentrationError = err

  def setSampleCompConcUnit(self, event):

    if self.sampleComponent:
      unit = self.sampleCompConcUnitPulldown.getObject()
      self.sampleComponent.concentrationUnit = unit

  def getSampleCompMol(self, sampleComponent):

    if not self.sample or self.sampleComponent:
      return

    molecules = self.getMolecules()

    molNames = [ mol.name for mol in molecules ]

    sampCompMols = molNames
    sampCompMols.sort()

    for sampComp in self.sample.sortedSampleComponents():
      if sampComp.refComponent.className == 'MolComponent':
        if sampComp.refComponent.molecule is not None:
          continue

      sampCompMols.append(sampComp.refComponent.details)

    sampCompMols.append(None)

    cMolName = None
    if sampleComponent:
      if sampleComponent.refComponent.className == 'MolComponent':
        if sampleComponent.refComponent.molecule:
          cMolName = sampleComponent.refComponent.molecule.name
        else:
          cMolName = sampleComponent.refComponent.details
      else:
        cMolName = sampleComponent.refComponent.details


    if cMolName:
      if cMolName not in sampCompMols:
        sampCompMols.insert(0, cMolName)

    index = sampCompMols.index(cMolName)

    names = sampCompMols[:-1] + ['<Other>',]

    self.sampleCompMolPulldown.setup(names, sampCompMols, index)

  def getSampleCompConc(self, sampComp):

    value = None
    if sampComp:
      value = sampComp.concentration

    self.sampleCompConcEntry.set(value)

  def getSampleCompConcErr(self, sampComp):

    value = None
    if sampComp:
      value = sampComp.concentrationError

    self.sampleCompConcErrEntry.set(value)

  def getSampleCompConcUnit(self, sampComp):

    unit = sampComp.concentrationUnit

    if not unit:
      return

    names = SAMPLE_COMP_UNITS

    index = names.index(unit)
    self.sampleCompConcUnitPulldown.setup(names, names, index)


  # Spectrometer functions

  def selectSpectrometer(self, obj, row, col):

    self.spectrometer = obj

  def addSpectrometer(self):

    instrumentStore = getInstrumentStore(self.project)

    name = ''
    while not name:
      name = askString('Text Entry','Enter NMR Spectrometer Name')

    spectrometer = instrumentStore.newNmrSpectrometer(name=name)

  def removeSpectrometer(self):

    if self.spectrometer:

      msg = 'Really remove specification of NMR Spectrometer %s?' %  self.spectrometer.name

      if showOkCancel('query',msg):
        self.spectrometer.delete()
        self.spectrometer = None

  def setSpectrometerName(self, event):

    if self.spectrometer:
      default = 'self.spectrometer%d' % self.spectrometer.serial
      self.spectrometer.name = self.spectrometerNameEntry.get() or default

  def setSpectrometerFreq(self, event):

    if self.spectrometer:
      value = self.spectrometerFreqEntry.get() or None
      self.spectrometer.setProtonFreq( value )

      if value is not None:
        value = '%d' % round(value)

      self.spectrometer.setNominalFreq( value )
      self.updateInstrumentsAfter()

  def setSpectrometerManufacturer(self, event):

    if self.spectrometer:
      value = self.spectrometerManufacturerEntry.get() or None

      if value is not None:
        affStore = getAffiliationStore(self.project)

        manu = affStore.findFirstOrganisation(name=value)
        if manu is None:
          manu = affStore.newOrganisation(name=value)

        self.spectrometer.setManufacturer( manu )

      #self.updateInstrumentsAfter()

  def setSpectrometerModel(self, event):

    if self.spectrometer:
      self.spectrometer.setModel( self.spectrometerModelEntry.get() or None )

  def setSpectrometerSerial(self, event):

    if self.spectrometer:
      self.spectrometer.serialNumber = self.spectrometerSerialEntry.get() or None

  def setSpectrometerDetails(self, event):

    if self.spectrometer:
      self.spectrometer.setDetails( self.spectrometerDetailsEntry.get() or None )

  def getSpectrometerName(self, spectrometer):

    text = ''
    if spectrometer:
      text = spectrometer.name

    self.spectrometerNameEntry.set(text)

  def getSpectrometerFreq(self, spectrometer):

    value = 0.0
    if spectrometer:
      value = spectrometer.protonFreq

      if not spectrometer.protonFreq:
        if spectrometer.nominalFreq:
          spectrometer.protonFreq = float(spectrometer.nominalFreq)
          value = spectrometer.nominalFreq

    self.spectrometerFreqEntry.set(value)  

  def getSpectrometerModel(self, spectrometer):

    text = ''
    if spectrometer:
      text = spectrometer.model

    self.spectrometerModelEntry.set(text)

  def getSpectrometerManufacturer(self, spectrometer):

    text = ''
    if spectrometer:
      manu = spectrometer.manufacturer
      if manu:
        text = manu.name

    self.spectrometerManufacturerEntry.set(text)

  def getSpectrometerSerial(self, spectrometer):

    text = ''
    if spectrometer:
      text = spectrometer.serialNumber

    self.spectrometerSerialEntry.set(text)

  def getSpectrometerDetails(self, spectrometer):

    text = ''
    if spectrometer:
      text = spectrometer.details

    self.spectrometerDetailsEntry.set(text)

  def updateInstrumentsAfter(self, *opt):

    #if self.waiting:
    #  return
    #else:
    #  self.waiting = True
    
    self.after_idle(self.updateInstruments)

  def updateInstruments(self):

    instrumentStore = getInstrumentStore(self.project)
    getInstruments = instrumentStore.findAllInstruments

    objectList = []
    textMatrix = []
    spectrometers = [(s.serial, s) for s in getInstruments(className='NmrSpectrometer')]
    spectrometers.sort()
    for serial, spectrometer in spectrometers:
      manu = spectrometer.manufacturer
      specManu = ''
      if manu:
        specManu = manu.name

      datum = [serial,
               spectrometer.name,
               spectrometer.nominalFreq,
               spectrometer.protonFreq,
               specManu,
               spectrometer.model,
               spectrometer.serialNumber,
               spectrometer.details]

      objectList.append(spectrometer)
      textMatrix.append(datum)

    self.spectrometerMatrix.update(objectList=objectList, textMatrix=textMatrix)

    self.waiting = False


  # Sample Condition Set functions

  def selectSampleConditionSet(self, sampleConditionSet, row, col):

    self.sampleConditionSet = sampleConditionSet

    self.updateSampleConditionsAfter()

  def updateSampleConditionSetsAfter(self, *opt):

    #if self.waiting:
    #  return
    #else:
    #  self.waiting = True
    
    self.after_idle(self.updateSampleConditionSets)

  def updateSampleConditionSets(self, obj=None):

    textMatrix  = []
    objectList  = []

    if self.project and self.nmrProject:  

      for scs in self.nmrProject.sortedSampleConditionSets():

        if not scs.name:
          scs.name = 'CondSet' + str(scs.serial)

        datum = [scs.serial,
                 scs.name,
                 scs.details]

        objectList.append(scs)
        textMatrix.append(datum)

    self.nmrCondSetTable.update(textMatrix=textMatrix,
                                objectList=objectList)

    self.waiting = False

  def addSampleConditionSet(self):

    if not self.nmrProject:
      self. nmrProject = getNmrProject

    msg = 'Name for sample condition set'
    cName = askString('Query', msg, parent=self) or ''
    cName.strip()

    if self.nmrProject.findFirstSampleConditionSet(name=cName):
      showWarning('Failure','Type already in use.', parent=self)
      return

    self.sampleConditionSet = self.nmrProject.newSampleConditionSet(name=cName)

  def removeSampleConditionSet(self):

    if self.sampleConditionSet:
      self.sampleConditionSet.delete()
      self.sampleConditionSet = None

  def setSampleConditionSet(self, event):

    if self.sampleConditionSet:
      value = self.sampleConditionSetEntry.get() or None

      self.sampleConditionSet.name = value

  def setSampleConditionSetDetails(self, event):

    if self.sampleConditionSet:
      value = self.sampleConditionSetDetailsEntry.get() or None

      self.sampleConditionSet.details = value

  def getSampleConditionSet(self, sampleConditionSet):

    value = None
    if sampleConditionSet:
      value = sampleConditionSet.name

    self.sampleConditionSetEntry.set(value)

  def getSampleConditionSetDetails(self, sampleConditionSet):

    value = None
    if sampleConditionSet:
      value = sampleConditionSet.details

    self.sampleConditionSetDetailsEntry.set(value)


  # Sample Condition functions

  def selectSampleCondition(self, sampleCondition, row, col):

    self.sampleCondition = sampleCondition

  def updateSampleConditionsAfter(self, *opt):

    #if self.waiting:
    #  return
    #else:
    #  self.waiting = True
    
    self.after_idle(self.updateSampleConditions)

  def updateSampleConditions(self, obj=None):

    if not self.sampleConditionSet:
      return

    textMatrix  = []
    objectList  = []

    if self.project and self.nmrProject:  

      for sc in self.sampleConditionSet.sortedSampleConditions():

        datum = [sc.condition,
                 sc.value,
                 sc.error,
                 sc.unit]

        objectList.append(sc)
        textMatrix.append(datum)

    self.nmrCondTable.update(textMatrix=textMatrix,
                             objectList=objectList)

    self.waiting = False

  def addStdSampleCondition(self):

    if not self.sampleConditionSet:
      showWarning('Failure','No condition set selected.', parent=self)
      return

    stdSampleConditions = ( ('temperature', 0.0, 'K'),
                            ('pH', 0.0, 'pH'),
                            ('pressure', 1.0, 'atm'),
                            ('ionic strength', 0.0, 'M') )

    for (cType, cVal, cUnit) in stdSampleConditions:

      if self.sampleConditionSet.findFirstSampleCondition(condition=cType):
        continue

      self.sampleCondition = self.sampleConditionSet.newSampleCondition(condition=cType,
                                                                        value=cVal,
                                                                        unit=cUnit)

  def addSampleCondition(self):

    if not self.sampleConditionSet:
      showWarning('Failure','No condition set selected.', parent=self)
      return

    if not self.nmrProject:
      self. nmrProject = getNmrProject

    # TODO: do this as a list?

    msg = 'Type of sample condition'
    cType = askString('Query', msg, parent=self) or ''
    cType.strip()

    # TODO: Need a way to deal with sampleConditionSets (new tab maybe?)

    if self.sampleConditionSet.findFirstSampleCondition(condition=cType):
      showWarning('Failure','Type already in use.', parent=self)
      return

    self.sampleCondition = self.sampleConditionSet.newSampleCondition(condition=cType)

  def removeSampleCondition(self):

    if self.sampleCondition:
      self.sampleCondition.delete()
      self.sampleCondition = None

  def setSampleCondition(self, event):

    if self.sampleCondition:
      cType = self.sampleConditionPulldown.getObject()

      if cType is None:
        msg = 'Non standard sample condition type:'
        cType = askString('Input', msg, parent=self) or ''
        cType.strip()

      self.sampleCondition.condition = cType or None

  def setSampleConditionValue(self, event):

    if self.sampleCondition:
      value = self.sampleConditionValueEntry.get() or 0.0

      self.sampleCondition.value = value

  def setSampleConditionError(self, event):

    if self.sampleCondition:
      value = self.sampleConditionErrorEntry.get() or None

      self.sampleCondition.error = value

  def setSampleConditionUnit(self, event):

    if self.sampleCondition:
      unit = self.sampleConditionUnitEntry.get() or None
      self.sampleCondition.unit = unit

  def getSampleCondition(self, sampleCondition):

    if not hasattr(self, 'cTypes'):
      self.cTypes = SAMPLE_CONDITION_TYPES
      self.cTypes.sort()
      self.cTypes.append(None)

    cType = None
    if self.sampleCondition:
      cType = self.sampleCondition.condition

    if cType:
      if cType not in self.cTypes:
        self.cTypes.insert(0, cType)
        self.cTypes.remove(None)
        self.cTypes.sort()
        self.cTypes.append(None)

    index = self.cTypes.index(cType)

    names = self.cTypes[:-1] + ['<Other>',]

    self.sampleConditionPulldown.setup(names, self.cTypes, index)

  def getSampleConditionValue(self, sampleCondition):

    value = None
    if sampleCondition:
      value = sampleCondition.value

    self.sampleConditionValueEntry.set(value)

  def getSampleConditionError(self, sampleCondition):

    value = None
    if sampleCondition:
      value = sampleCondition.error

    self.sampleConditionErrorEntry.set(value)

  def getSampleConditionUnit(self, sampleCondition):

    text = ''
    if sampleCondition:
      text = sampleCondition.unit

    self.sampleConditionUnitEntry.set(text)


  # Structure functions

  def selectEnsemble(self, ensemble, row, col):

    self.ensemble = ensemble

  def toggleEnsemble(self, ensemble):

    if ensemble and self.entry:
      strucGen = getStructureGeneratation(ensemble)

      if strucGen in self.entry.structureGenerations:
        self.entry.removeStructureGeneration(strucGen)
      else:
        self.entry.addStructureGeneration(strucGen)

  def updateStructures(self):

    textMatrix  = []
    objectList  = []
    colorMatrix = []

    nCols = len(self.ensembleTable.headingList)

    if self.molSystem and self.entry:

      for ensemble in self.molSystem.structureEnsembles:

        strucGen = ensemble.structureGeneration

        if strucGen:
          strucGenSerial = strucGen.serial
          strucGenName = strucGen.name
          strucGenType = strucGen.generationType

          if strucGen.nmrConstraintStore:
            constraintSet = strucGen.nmrConstraintStore.serial
          else:
            constraintSet = None

        else:
          strucGenSerial = None
          strucGenName = None
          strucGenType = None
          constraintSet = None

        if strucGen and (strucGen in self.entry.structureGenerations):
          colors = [NICE_GREEN] * nCols
          submit = 'Yes'
        else:
          colors = [None] * nCols
          submit = 'No'

        chains = ensemble.sortedCoordChains()
        nRes = 0
        for chain in chains:
          nRes += len(chain.residues)

        datum = [ensemble.ensembleId,
                 submit,
                 len(ensemble.models),
                 ','.join([ch.code for ch in chains]),
                 nRes,
                 strucGenSerial,
                 strucGenName,
                 strucGenType,
                 constraintSet]

        objectList.append(ensemble)
        textMatrix.append(datum)
        colorMatrix.append(colors)

      self.checkEntryConsistency()

    self.ensembleTable.update(textMatrix=textMatrix,
                            objectList=objectList,
                            colorMatrix=colorMatrix)

  def getStrucGen(self, ensemble):

    index = 0
    names = []
    strucGens = [None,]
    if self.nmrProject:
      strucGens.extend(self.nmrProject.sortedStructureGenerations() )

    strucGen = ensemble.structureGeneration

    if strucGen not in strucGens:
      strucGen = strucGens[0]

    names = ['<New>',] + ['%d:%s' % (sg.serial, sg.name or '') for sg in strucGens[1:]]
    index = strucGens.index(strucGen)

    self.strucGenPulldown.setup(names, strucGens, index)

  def getStrucGenName(self, ensemble):

    strucGen = getStructureGeneratation(ensemble)
    self.strucGenNameEntry.set(strucGen.name)

  def getStrucGenType(self, ensemble):

    strucGen = getStructureGeneratation(ensemble)

    if strucGen.generationType not in GENERATION_TYPES:
      strucGen.generationType = GENERATION_TYPES[1]

    index = GENERATION_TYPES.index(strucGen.generationType)

    self.strucGenTypePulldown.setup(GENERATION_TYPES, GENERATION_TYPES, index)

  def getConstraintSet(self, ensemble):

    strucGen = getStructureGeneratation(ensemble)

    index = 0
    names = []
    constraintSets = self.project.sortedNmrConstraintStores()

    if constraintSets:
      names = ['%d' % cs.serial for cs in constraintSets]

      if strucGen.nmrConstraintStore not in constraintSets:
        strucGen.nmrConstraintStore = constraintSets[0]

      index = constraintSets.index(strucGen.nmrConstraintStore)

    self.constraintSetPulldown.setup(names, constraintSets, index)

  def setStrucGen(self, event):

    strucGen = self.strucGenPulldown.getObject()

    if strucGen is None:
      self.ensemble.structureEnsemble = None
      strucGen = getStructureGeneratation(self.ensemble)

    else:
      strucGen.structureEnsemble = self.ensemble

  def setStrucGenName(self, event):

    name = self.strucGenNameEntry.get()

    strucGen = getStructureGeneratation(self.ensemble)
    strucGen.name = name

  def setStrucGenType(self, event):

    strucGen = getStructureGeneratation(self.ensemble)

    strucGen.generationType = self.strucGenTypePulldown.getObject()

  def setConstraintSet(self, event):

    constraintSet = self.constraintSetPulldown.getObject()
    strucGen = getStructureGeneratation(self.ensemble)
    strucGen.nmrConstraintStore = constraintSet


  # Citation functions

  def updateCitations(self, obj=None):

    textMatrix  = []
    objectList  = []
    colorMatrix = []

    nCols = len(self.citationTable.headingList)
    entry = self.entry

    if entry:
      citationStore = getCitationStore(self.project)

      for citation in citationStore.sortedCitations():
        if citation.className != 'JournalCitation':
          continue  

        if not entry.primaryCitation:
          entry.primaryCitation = citation

        authors = []
        for author in citation.authors:
          if author.givenName:
            initials = ''.join([author.givenName[0]] + list(author.middleInitials))
          else:
            initials = ''.join(list(author.middleInitials))
          authors.append('%s %s' % (author.familyName, initials))   

        if len(authors) > 2:
          authors = authors[0] + ' et al.'
        elif len(authors) == 2:
          authors = ' & '.join(authors)
        elif authors:
          authors = authors[0]
        else:
          authors = None  

        if citation is self.entry.primaryCitation:
          submit = 'primary'
          colors = [NICE_GREEN] * nCols
        elif citation in entry.otherCitations:
          submit = 'other'
          colors = ['#B0D0B0'] * nCols
        else:
          submit = 'no'
          colors = [None] * nCols

        title = citation.title

        if title and len(title) > 60:
          title = title[:57]+'...'

        datum = [citation.serial,
                 submit,
                 authors,
                 citation.year,
                 title,
                 citation.journalAbbreviation,
                 citation.issue,
                 citation.volume,
                 citation.firstPage,
                 citation.lastPage,
                 citation.status,
                 citation.pubMedId,
                 citation.medlineUiCode,
                 ','.join(citation.keywords)]

        objectList.append(citation)
        textMatrix.append(datum)
        colorMatrix.append(colors)

    self.citationTable.update(textMatrix=textMatrix,
                              objectList=objectList,
                              colorMatrix=colorMatrix)

  def getCiteDeposition(self, citation):

    status = citation.status
    if status not in CITATION_DEPOSIT:
      status = CITATION_DEPOSIT[-1]

    index = CITATION_DEPOSIT.index(status)

    self.citeDepositionPulldown.setup(CITATION_DEPOSIT, CITATION_DEPOSIT, index)

  def getCiteAuthors(self, citation):

    affStore = getAffiliationStore(self.project)

    selected = []
    names = []
    for person in affStore.sortedPersons():
      names.append(getPersonName(person))
      if person in citation.authors:
        selected.append(getPersonName(person))

    self.citationAuthorMulti.set(selected, names)

  def getCiteYear(self, citation):

    year = time.localtime()[0]

    cYear = citation.year or year

    years = range(min(cYear,year-37),max(cYear,year+3))
    years.reverse()

    index = years.index(cYear)
    names = [str(y) for y in years]

    self.citeYearPulldown.setup(names, years, index)

  def getCiteTitle(self, citation):

    text = citation.title or ''
    self.citeTitleEntry.setText(text)

  def getCiteJournal(self, citation):

    if not hasattr(self, 'journals'):
      self.journals = JOURNALS
      self.journals.sort()

    cJournal = citation.journalAbbreviation
    if cJournal:
      if cJournal not in self.journals:
        self.journals.append(cJournal)
        self.journals.sort()

    categories = [j[0] for j in self.journals] + [None]
    
    if cJournal:
      index = self.journals.index(cJournal)
    else:
      index = 0 # len(self.journals)

    names = self.journals + ['<Other>',]

    self.citeJournalPulldown.setup(names, self.journals+[True], index, categories=categories)

  def getCiteIssue(self, citation):

    text = citation.issue or ''
    self.citeIssueEntry.set(text)

  def getCiteVolume(self, citation):

    text = citation.volume or ''
    self.citeVolumeEntry.set(text)

  def getCiteFirstPage(self, citation):

    page = citation.firstPage
    self.citeFirstPageEntry.set(page)

  def getCiteLastPage(self, citation):

    page = citation.lastPage
    self.citeLastPageEntry.set(page)

  def getCiteStatus(self, citation):

    status = citation.status
    if status not in CITATION_STATUS:
      status = CITATION_STATUS[-1]

    index = CITATION_STATUS.index(status)

    self.citeStatusPulldown.setup(CITATION_STATUS, CITATION_STATUS, index)

  def getCitePubMed(self, citation):

    text = citation.pubMedId or ''
    self.citePubMedEntry.set(text)

  def getCiteMedLine(self, citation):

    text = citation.medlineUiCode or ''
    self.citeMedLineEntry.set(text)

  def getCiteKeywords(self, citation):

    self.citeKeywordsMulti.setValues(citation.keywords)

  def setCiteDeposition(self, event):

    choice = self.citeDepositionPulldown.getObject()
    citation = self.citation
    entry = self.entry
    primary = entry.primaryCitation

    if choice == CITATION_DEPOSIT[0]:

      if primary:
        if citation is not primary:
          if primary not in entry.otherCitations:
            entry.addOtherCitation(primary)

          entry.primaryCitation = citation

      else:
        if citation in entry.otherCitations:
          entry.removeOtherCitation(citation)

        entry.primaryCitation = citation

    elif choice == CITATION_DEPOSIT[1]:
      if citation is primary:
        entry.primaryCitation = None

      if citation not in entry.otherCitations:
        entry.addOtherCitation(citation)  

    else:
      if citation is primary:
        entry.primaryCitation = None

      if citation in entry.otherCitations:
        entry.removeOtherCitation(citation)

  def setCiteAuthors(self, event):

    affStore = getAffiliationStore(self.project)

    names = []
    people = []
    for person in affStore.persons:
      names.append(getPersonName(person))
      people.append(person)

    useNames = self.citationAuthorMulti.get()
    usePeople = []

    for name in useNames:
      index = names.index(name)
      person = people[index]

      if person not in usePeople:
        usePeople.append(person)

    self.citation.setAuthors(usePeople)
    self.citationTable.keyPressEscape()

  def setCiteYear(self, event):

    self.citation.year = self.citeYearPulldown.getObject()

  def setCiteTitle(self, event):

    text = self.citeTitleEntry.getText().strip() or ''
    text = ' '.join(text.split('\n')).strip()

    self.citation.title = text or None

  def setCiteJournal(self, event):

    journal = self.citeJournalPulldown.getObject()

    if journal is True:
      msg = 'Abbrevated journal name (e.g. "J. Mol. Biol.")'
      journal = askString('Input', msg, parent=self) or ''
      journal.strip()

    self.citation.journalAbbreviation = journal or None

  def setCiteIssue(self, event):

    self.citation.issue = self.citeIssueEntry.get() or None

  def setCiteVolume(self, event):

    self.citation.volume = self.citeVolumeEntry.get() or None

  def setCiteFirstPage(self, event):

    page = self.citeFirstPageEntry.get() or 0 
    page = str(page)

    self.citation.firstPage = page or None

  def setCiteLastPage(self, event):

    page = self.citeLastPageEntry.get() or 0
    page = str(page)

    self.citation.lastPage = page or None

  def setCiteStatus(self, event):

    self.citation.status = self.citeStatusPulldown.getObject()

  def setCitePubMed(self, event):

    self.citation.pudMedId = self.citePubMedEntry.get() or None

  def setCiteMedLine(self, event):

    self.citation.medlineUiCode = self.citeMedLineEntry.get() or None

  def setCiteKeywords(self, event):

    keywords = [w.strip() for w in self.citeKeywordsMulti.get() if w.strip()]
    self.citationTable.keyPressEscape()
    self.citation.keywords = keywords 

  def selectCitation(self, citation, row, col):

    self.citation = citation

  def addCitation(self):

   citationStore = getCitationStore(self.project)

   citationStore.newJournalCitation(year=time.localtime()[0],
                                    status=CITATION_STATUS[0])

  def removeCitation(self):

    if self.citation and showOkCancel('Confirm','Delete %s citation?',parent=self):
      self.citation.delete()
      self.citation = None


  # Software functions

  def updateSoftware(self, obj=None):

    textMatrix  = []
    objectList  = []

    entry = self.entry

    if entry:
      methodStore = getMethodStore(self.project)

      for software in methodStore.sortedSoftware():

        datum = [software.name,
                 software.version,
                 ', '.join(software.tasks),
                 software.vendorName,
                 software.vendorAddress,
                 software.vendorWebAddress,
                 software.details]

        objectList.append(software)
        textMatrix.append(datum)

      self.checkEntryConsistency()

    self.softwareTable.update(textMatrix=textMatrix,
                              objectList=objectList)

  def selectSoftware(self, software, row, col):

    self.software = software  

  def addSoftware(self):

    msg  = 'Name of software:'
    name = askString('Input', msg, parent=self) or ''
    name.strip()

    if not name:
      return

    msg = 'Software version (e.g. 2.1):'
    version = askString('Input', msg, parent=self) or ''
    version.strip()

    if not version:
      return

    methodStore = getMethodStore(self.project)
    software = methodStore.findFirstSoftware(name=name, version=version)
    if not software:
      software = methodStore.newSoftware(name=name, version=version)

  def removeSoftware(self):

    software = self.softwareTable.currentObjects

    if not software:
      return

    if len(software) == 1:
      msg = 'Delete software reference?'
    else:
      msg = 'Delete %s software references?' % len(software)

    if showOkCancel('Confirm', msg, parent=self):
      self.administerNotifiers(self.unregisterNotify)
      for softwareRef in software:
        softwareRef.delete()

      self.software = None  
      self.administerNotifiers(self.registerNotify)
      self.updateSoftware()

  def getSoftTasks(self, software):

    self.softTasksMulti.set(software.tasks)

  def getSoftVendor(self, software):

    self.softVendorEntry.set(software.vendorName or '')

  def getSoftVendorAddr(self, software):

   self.softVendorAddrEntry.set(software.vendorAddress or '')

  def getSoftVendorWeb(self, software):

    self.softVendorWebEntry.set(software.vendorWebAddress or 'http://')

  def getSoftDetails(self, software):

    self.softDetailsEntry.set(software.details or '')

  def setSoftTasks(self, event):

    tasks = self.softTasksMulti.get()
    tasks = [t.strip() for t in tasks]
    self.softwareTable.keyPressEscape()

    self.software.tasks = [t for t in tasks if t]

  def setSoftVendor(self, event):

    text = self.softVendorEntry.get() or ''
    text.strip()

    self.software.vendorName = text or None

  def setSoftVendorAddr(self, event):

    text = self.softVendorAddrEntry.get() or ''
    text.strip()

    self.software.vendorAddress = text or None

  def setSoftVendorWeb(self, event):

    text = self.softVendorWebEntry.get() or ''
    text.strip()

    self.software.vendorWebAddress = text or None

  def setSoftDetails(self, event):

    text = self.softDetailsEntry.get() or ''
    text.strip()

    self.software.details = text or None


# general functions to be moved top a general spot later 

def getTopLevelStore(memopsRoot, className):

  store = getattr(memopsRoot, 'current'+className) or \
          getattr(memopsRoot, 'findFirst'+className)() or \
          getattr(memopsRoot, 'new'+className)(name='default')

  return store

def getTopLevelStore2(memopsRoot, className):

  store = getattr(memopsRoot, 'current'+className) or \
          getattr(memopsRoot, 'findFirst'+className)() or \
          getattr(memopsRoot, 'new'+className)(namingSystem='default')

  return store

def getMethodStore(memopsRoot):

  return getTopLevelStore(memopsRoot, 'MethodStore')

def getCitationStore(memopsRoot):

  return getTopLevelStore(memopsRoot, 'CitationStore')

def getAffiliationStore(memopsRoot):

  return getTopLevelStore(memopsRoot, 'AffiliationStore')

def getSampleStore(memopsRoot):

  return getTopLevelStore(memopsRoot, 'SampleStore')

def getRefSampleComponentStore(memopsRoot):

  return getTopLevelStore(memopsRoot, 'RefSampleComponentStore')

def getNmrProject(memopsRoot):

  return getTopLevelStore(memopsRoot, 'NmrProject')

def getEntryStore(memopsRoot):

  return getTopLevelStore(memopsRoot, 'NmrEntryStore') 

def getTaxonomy(memopsRoot):

  return getTopLevelStore(memopsRoot, 'Taxonomy') 

def getInstrumentStore(memopsRoot):

  return getTopLevelStore(memopsRoot, 'InstrumentStore') 

def getClassification(memopsRoot):

  return getTopLevelStore2(memopsRoot, 'Classification')

def getStructureGeneratation(ensemble):

  strucGen = ensemble.structureGeneration

  if not strucGen:
    nmrProject = ensemble.memopsRoot.currentNmrProject
    strucGen = nmrProject.newStructureGeneration(generationType=GENERATION_TYPES[1])
    strucGen.name = 'default'
    strucGen.structureEnsemble = ensemble

  return strucGen


def getPersonInGroup(entry, person, defaultOrgName=UNDEFINED, defaultGroupName='newGroup'):

  # Check for this person directly
  pig = person.currentPersonInGroup
  
  if not pig:
    pig = person.findFirstPersonInGroup()
    
    if pig:
      person.currentPersonInGroup = pig

  if not pig:

    # Check other people in this entry
    entryPeople = list(entry.contactPersons) + list(entry.authors)
    for person2 in entryPeople:
      if person2 is not person:
        pig2 = person2.currentPersonInGroup or \
               person2.findFirstPersonInGroup()
        
        if pig2:
          pig = person.newPersonInGroup(group=pig2.group)
          break
    
    # Otherwise make a default
    if not pig:
      affStore = person.affiliationStore
 
      organisation = affStore.findFirstOrganisation(name=defaultOrgName) or \
                     affStore.newOrganisation(name=defaultOrgName)
 
      group = organisation.findFirstGroup(name=defaultGroupName) or \
              organisation.newGroup(name=defaultGroupName)
                  
      pig = person.newPersonInGroup(group=group)
      person.currentPersonInGroup = pig
      
  return pig


def getExpSource(entryMolecule, orgName=UNDEFINED):

  if entryMolecule.experimentalSource:
    return entryMolecule.experimentalSource
  
  else:
    expSource = None
    entry = entryMolecule.entry
    
    # Use any existing sources first by default
    for entryMolecule2 in entry.entryMolecules:
      if entryMolecule2.experimentalSource:
        expSource = entryMolecule2.experimentalSource
        break

    if not expSource:
      tax = getTaxonomy(entry.root)
      expSource = tax.findFirstNaturalSource(molecules=[]) or \
                  tax.newNaturalSource(scientificName=orgName, organismName=orgName)
    
    entryMolecule.experimentalSource = expSource
    
  return expSource


def getPersonName(person):

  data = (person.title,
          person.givenName,
          ' '.join(person.middleInitials),
          person.familyName,
          person.familyTitle)

  return ' '.join([d for d in data if d])

def getNmrLists(nmrProject, className, molSystem=None):

  if className == 'PeakList':
    peakLists = []

    for experiment in nmrProject.sortedExperiments():
      if molSystem and (molSystem not in experiment.molSystems):
        continue

      for spectrum in experiment.sortedDataSources():
        peakLists.extend(spectrum.sortedPeakLists())

    return peakLists

  elif className in DERIVED_LIST_CLASSES:
    derivedDataLists = []
    dLists = nmrProject.sortedDerivedDataLists()

    for dList in dLists:
      if dList.className == className:
        derivedDataLists.append(dList)

    return derivedDataLists

  else:
    measurementLists = []
    mLists = nmrProject.sortedMeasurementLists()

    for mList in mLists:
      if mList.className == className:
        measurementLists.append(mList)

    return measurementLists

def getNmrListName(nmrList):

  if nmrList.className == 'PeakList':
    spectrum = nmrList.dataSource
    experiment = spectrum.experiment

    return '%s:%s:%d' % (experiment.name, spectrum.name, nmrList.serial)

  else:
    return '%s %d' % (nmrList.className, nmrList.serial)

#def checkNmrEntryCompleteness(entry):

#  return [('Shift List', 'You must have at least one chemical shift list selected!','#FF4040'),]
