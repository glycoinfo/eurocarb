### $ANTLR 2.7.7 (20080103): "glycoct_grammar.py.g" -> "GlycoctParser.py"$
### import antlr and other modules ..
import sys
import antlr

version = sys.version.split()[0]
if version < '2.2.1':
    False = 0
if version < '2.3':
    True = not False
### header action >>> 

### header action <<< 
### preamble action>>>

### preamble action <<<

### import antlr.Token 
from antlr import Token
### >>>The Known Token Types <<<
SKIP                = antlr.SKIP
INVALID_TYPE        = antlr.INVALID_TYPE
EOF_TYPE            = antlr.EOF_TYPE
EOF                 = antlr.EOF
NULL_TREE_LOOKAHEAD = antlr.NULL_TREE_LOOKAHEAD
MIN_USER_TYPE       = antlr.MIN_USER_TYPE
RES = 4
LIN = 5
PRO = 6
REP = 7
INTEGER = 8
SEMICOLON = 9
MONOSAC_DECLARATION = 10
SUBSTIT_DECLARATION = 11
HYPHEN = 12
IDENTIFIER = 13
LITERAL_hex = 14
LITERAL_pen = 15
LITERAL_hept = 16
LITERAL_non = 17
COLON = 18
UNKNOWN_TERMINUS = 19
PIPE = 20
COMMA = 21
LPARENTHESIS = 22
RPARENTHESIS = 23
INCHI_DECLARATION = 24
STA = 25
ISO = 26
AGL = 27
WS = 28


###/*****************************************************
###*<p>
###*    This class defines an LLk parser based on ANTLR (http://antlr.org) syntax 
###*   rules for parsing carbohydrate sequences in GlycoCT syntax, according 
###*   to the syntax rules described (TODO: provide a definitive syntax reference link). 
###*</p>
###*<p>
###*   This class' superclass provides the majority of 
###*   the semantic action code that is called from within this grammar. This
###*   is in order to keep the grammar as clear as possible and to facillitate
###*   re-targeting of this grammar to other languages than Java (at time of 
###*   writing ANTLR also supports C++, python, C#).
###*</p>
###*<p>
###*   Note that the source code for this class has been auto-generated by ANTLR.
###*</p>
###*
###*   @see GlycoctLexer
###*   @see GlycoctParserAdaptor
###*   @see ParserAdaptor
###*   @see glycoct_grammar.g
###*
###*    @author mjh [matt@ebi.ac.uk]
###*/
class Parser(antlr.LLkParser):
    ### user action >>>
    # empty
    ### user action <<<
    
    def __init__(self, *args, **kwargs):
        antlr.LLkParser.__init__(self, *args, **kwargs)
        self.tokenNames = _tokenNames
        

    ###/** Toplevel rule defining a sugar sequence.  */
    def sugar(self):    
        
        pass
        self.res_section()
        la1 = self.LA(1)
        if False:
            pass
        elif la1 and la1 in [LIN]:
            pass
            self.lin_section()
        elif la1 and la1 in [EOF]:
            pass
        else:
                raise antlr.NoViableAltException(self.LT(1), self.getFilename())
            
        self.match(EOF_TYPE)
    

    ###/** Rule for a RES (residues) section. */
    def res_section(self):    
        
        pass
        self.match(RES)
        _cnt5= 0
        while True:
            if (self.LA(1)==INTEGER):
                pass
                self.residue()
            else:
                break
            
            _cnt5 += 1
        if _cnt5 < 1:
            raise antlr.NoViableAltException(self.LT(1), self.getFilename())
    

    ###/** Rule for a LIN (linkages) section. */
    def lin_section(self):    
        
        pass
        self.match(LIN)
        _cnt8= 0
        while True:
            if (self.LA(1)==INTEGER):
                pass
                self.linkage()
            else:
                break
            
            _cnt8 += 1
        if _cnt8 < 1:
            raise antlr.NoViableAltException(self.LT(1), self.getFilename())
    

    ###/** A numbered residue entry in the 'RES' section. */
    def residue(self):    
        
        pass
        self.match(INTEGER)
        self.residue_specification()
        self.match(SEMICOLON)
    

    ###/** Rule matching a single linkage declaration. */
    def linkage(self):    
        
        i = None
        nrti = None
        nrtt = None
        rti = None
        rtt = None
        pass
        i = self.LT(1)
        self.match(INTEGER)
        self.match(COLON)
        nrti = self.LT(1)
        self.match(INTEGER)
        nrtt = self.LT(1)
        self.match(IDENTIFIER)
        self.match(LPARENTHESIS)
        lnrt=self.terminus_position()
        self.match(HYPHEN)
        lrt=self.terminus_position()
        self.match(RPARENTHESIS)
        rti = self.LT(1)
        self.match(INTEGER)
        rtt = self.LT(1)
        self.match(IDENTIFIER)
        self.match(SEMICOLON)
        self.addLinkage( i, nrti, nrtt, lnrt, lrt, rti, rtt );
    

    ###/** Rule for a PRO (heterogeneity) section. */
    def pro_section(self):    
        
        pass
        self.match(PRO)
        _cnt11= 0
        while True:
            if (self.LA(1)==INTEGER):
                pass
                self.linkage()
            else:
                break
            
            _cnt11 += 1
        if _cnt11 < 1:
            raise antlr.NoViableAltException(self.LT(1), self.getFilename())
    

    ###/** Rule for the REP (repeats) section. */
    def rep_section(self):    
        
        pass
        self.match(REP)
        _cnt14= 0
        while True:
            if (self.LA(1)==RES):
                pass
                self.sugar()
            else:
                break
            
            _cnt14 += 1
        if _cnt14 < 1:
            raise antlr.NoViableAltException(self.LT(1), self.getFilename())
    

    ###/** 
    ###*   Rule for a single residue, which may be either a monosaccharide, 
    ###*   a substituent, or one of the other types specified by GlycoCT 
    ###*   (ie: INCHI, freetext).
    ###*/
    def residue_specification(self):    
        
        la1 = self.LA(1)
        if False:
            pass
        elif la1 and la1 in [MONOSAC_DECLARATION]:
            pass
            self.monosac_specification()
        elif la1 and la1 in [SUBSTIT_DECLARATION]:
            pass
            self.substit_specification()
        else:
                raise antlr.NoViableAltException(self.LT(1), self.getFilename())
            
    

    ###/** 
    ###*   Rule that tests whether a residue is a monosaccharide. 
    ###*   "Monosaccharide-ness" is implied by matching lexer rule 
    ###*   MONOSAC_DECLARATION.
    ###*/
    def monosac_specification(self):    
        
        pass
        self.match(MONOSAC_DECLARATION)
        self.monosaccharide()
    

    ###/** 
    ###*   Rule that tests whether a residue is a substituent. 
    ###*   "Substituent-ness" is implied by matching lexer rule 
    ###*   SUBSTIT_DECLARATION.
    ###*/
    def substit_specification(self):    
        
        pass
        self.match(SUBSTIT_DECLARATION)
        self.substituent_name()
    

    ###/** 
    ###*   Rule for a monosaccharide, in GlycoCT format, consisting of a 
    ###*   monosaccharide name, its superclass, ring closure positions, 
    ###*   and a list of modifications at each terminus, if any. 
    ###*/
    def monosaccharide(self):    
        
        pass
        n=self.monosaccharide_name()
        self.addResidue( n );
        self.match(HYPHEN)
        self.monosac_superclass()
        self.match(HYPHEN)
        self.monosac_ring_closure()
        while True:
            if (self.LA(1)==PIPE):
                pass
                self.monosac_modifications()
            else:
                break
            
    

    ###/** 
    ###*   Rule for a substituent name (ie: non-monosaccharide). 
    ###*   A substituent name may be any hyphen-separated list of identifiers.
    ###*/
    def substituent_name(self):    
        
        n = None
        x = None
        pass
        n = self.LT(1)
        self.match(IDENTIFIER)
        while True:
            if (self.LA(1)==HYPHEN):
                pass
                self.match(HYPHEN)
                x = self.LT(1)
                self.match(IDENTIFIER)
                n.setText( n.getText() + "-" + x.getText() );
            else:
                break
            
        self.addResidue( self.createResidueToken( n ) );
    

    ###/** 
    ###*   Rule for a monosaccharide name. A monosaccharide name in GlycoCT
    ###*   is basically its stem-type, that is, the name/type given to the 
    ###*   basic monosaccharide sans mods, eg: glc. Note that there may be 
    ###*   multiple stem-types given, separated by hyphens.
    ###*
    ###*   Note also that for the purposes of this rule, anomeric config is 
    ###*   considered part of the monosaccharide name.
    ###*/
    def monosaccharide_name(self):    
        m = None
        
        n = None
        x = None
        pass
        n = self.LT(1)
        self.match(IDENTIFIER)
        while True:
            if (self.LA(1)==HYPHEN) and (self.LA(2)==IDENTIFIER):
                pass
                self.match(HYPHEN)
                x = self.LT(1)
                self.match(IDENTIFIER)
                n.setText( n.getText() + "-" + x.getText() );
            else:
                break
            
        m = self.createResidueToken( n );
        return m
    

    ###/** 
    ###*   Rule for ring size/configuration, eg: hex (for hexose), hept (for heptose). 
    ###*
    ###*   The fact that all alts of this rule are literal strings means that 
    ###*   ALL incidences of these strings in input text will be interpreted as 
    ###*   a monosac_superclass (literal) token, which will in most situations 
    ###*   produce a syntax exception. 
    ###*
    ###*   This means that this effectively precludes these strings being used
    ###*   as monosaccharide or substituent names, which I believe is the 
    ###*   correct behaviour.
    ###*/
    def monosac_superclass(self):    
        
        pass
        c = self.LT(1);
        la1 = self.LA(1)
        if False:
            pass
        elif la1 and la1 in [LITERAL_hex]:
            pass
            self.match(LITERAL_hex)
        elif la1 and la1 in [LITERAL_pen]:
            pass
            self.match(LITERAL_pen)
        elif la1 and la1 in [LITERAL_hept]:
            pass
            self.match(LITERAL_hept)
        elif la1 and la1 in [LITERAL_non]:
            pass
            self.match(LITERAL_non)
        else:
                raise antlr.NoViableAltException(self.LT(1), self.getFilename())
            
        self.setSuperclass( c );
    

    ###/**
    ###*   Rule for GlycoCT monosaccharide ring closure syntax, of form 
    ###*   "<terminus_position>-<terminus_position>".
    ###*/
    def monosac_ring_closure(self):    
        
        t1 = None
        t2 = None
        pass
        t1 = self.LT(1)
        self.match(INTEGER)
        self.match(COLON)
        t2 = self.LT(1)
        self.match(INTEGER)
        self.setRingClosure( t1, t2 );
    

    ###/**
    ###*   Rule for a monosaccharide modification list, which may be 
    ###*   a pipe-symbol ('|') delimited list of monosaccharide 
    ###*   modifications. The general form of a monosac modification is
    ###*   "<terminus_position>:<identifier>". Modifications that affect
    ###*   2 terminii (such as double or triple bonds) are also matched
    ###*   by this rule.
    ###*/
    def monosac_modifications(self):    
        
        t1 = None
        t2 = None
        n = None
        pass
        self.match(PIPE)
        t1 = self.LT(1)
        self.match(INTEGER)
        la1 = self.LA(1)
        if False:
            pass
        elif la1 and la1 in [COMMA]:
            pass
            self.match(COMMA)
            t2 = self.LT(1)
            self.match(INTEGER)
        elif la1 and la1 in [COLON]:
            pass
        else:
                raise antlr.NoViableAltException(self.LT(1), self.getFilename())
            
        self.match(COLON)
        n = self.LT(1)
        self.match(IDENTIFIER)
        self.addModification( n, t1, t2 );
    

    ###/**
    ###*   Rule defining a valid terminus position, which may be
    ###*   either a positive integer, or the unknown symbol ('x').
    ###*/
    def terminus_position(self):    
        t = None
        
        i = None
        u = None
        la1 = self.LA(1)
        if False:
            pass
        elif la1 and la1 in [INTEGER]:
            pass
            i = self.LT(1)
            self.match(INTEGER)
            t = i;
        elif la1 and la1 in [UNKNOWN_TERMINUS]:
            pass
            u = self.LT(1)
            self.match(UNKNOWN_TERMINUS)
            t = u;
        else:
                raise antlr.NoViableAltException(self.LT(1), self.getFilename())
            
        return t
    

_tokenNames = [
    "<0>", 
    "EOF", 
    "<2>", 
    "NULL_TREE_LOOKAHEAD", 
    "a RES (residue) section start identifier", 
    "a LIN (linkage) section start identifier", 
    "a PRO (heterogeneity due to uncertainty) section start identifier", 
    "a REP (repeat) section start identifier", 
    "a positive integer or zero", 
    "a residue/linkage token separator ';'", 
    "a basetype declaration 'b:'", 
    "a substituent declaration 's:'", 
    "a hyphen '-'", 
    "an alphabetic identifier", 
    "\"hex\"", 
    "\"pen\"", 
    "\"hept\"", 
    "\"non\"", 
    "a colon separator ':'", 
    "an unknown terminal position '?'", 
    "a residue substitution delimiter '|'", 
    "a comma ','", 
    "a linkage start delimiter '('", 
    "a linkage end delimiter ')'", 
    "an inchi section declaration 'i:'", 
    "a STA (heterogeneity due to a statistical distribution) section start identifier", 
    "an ISO (isotope) section start identifier", 
    "an AGL (aglycon) section start identifier", 
    "WS"
]
    
    
