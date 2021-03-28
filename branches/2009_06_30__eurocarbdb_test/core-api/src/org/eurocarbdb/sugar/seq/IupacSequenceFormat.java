/*
*   EuroCarbDB, a framework for carbohydrate bioinformatics
*
*   Copyright (c) 2006-2009, Eurocarb project, or third-party contributors as
*   indicated by the @author tags or express copyright attribution
*   statements applied by the authors.  
*
*   This copyrighted material is made available to anyone wishing to use, modify,
*   copy, or redistribute it subject to the terms and conditions of the GNU
*   Lesser General Public License, as published by the Free Software Foundation.
*   A copy of this license accompanies this distribution in the file LICENSE.txt.
*
*   This program is distributed in the hope that it will be useful,
*   but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
*   or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License
*   for more details.
*
*   Last commit: $Rev: 1249 $ by $Author: glycoslave $ on $Date:: 2009-06-24 #$  
*/

package org.eurocarbdb.sugar.seq;

//  stdlib imports
import java.io.StringReader;

//  3rd party imports
import org.apache.log4j.Logger;
import com.google.common.collect.ListMultimap;
import com.google.common.collect.ArrayListMultimap;

//  eurocarb imports
import org.eurocarbdb.util.graph.Graph;
import org.eurocarbdb.util.graph.Vertex;
import org.eurocarbdb.util.graph.Edge;
import org.eurocarbdb.util.graph.DepthFirstGraphVisitor;

import org.eurocarbdb.sugar.Sugar;
import org.eurocarbdb.sugar.Residue;
import org.eurocarbdb.sugar.Linkage;
import org.eurocarbdb.sugar.Anomer;
import org.eurocarbdb.sugar.Basetype;
import org.eurocarbdb.sugar.Substituent;
import org.eurocarbdb.sugar.Substituents;
import org.eurocarbdb.sugar.Monosaccharide;
import org.eurocarbdb.sugar.SugarSequence;
import org.eurocarbdb.sugar.SequenceFormat;
import org.eurocarbdb.sugar.RingConformation;
import org.eurocarbdb.sugar.SequenceFormatException;
import org.eurocarbdb.sugar.impl.SimpleMonosaccharide;

import org.eurocarbdb.sugar.seq.grammar.IupacLexer;
import org.eurocarbdb.sugar.seq.grammar.IupacParser;
import org.eurocarbdb.sugar.seq.grammar.ParserAdaptor;
import org.eurocarbdb.sugar.seq.grammar.IupacParserAdaptor;

//  static imports


/*  class IupacSequenceFormat  *//***********************************
* 
<style>
    tt { color: darkgreen; }
</style>
<p>
    Implementation of a parser/generator for the Eurocarb carbohydrate 
    sequence format. This format is largely based on the 
    <a href="http://www.chem.qmul.ac.uk/iupac/2carb/index.html">1996 IUPAC 
    recommendations for carbohydrate nomenclature</a>. As is the norm
    for carbohydrate sequences, structures are read from right-to-left;
    that is, the "root" monosaccharide is always the rightmost 
    monosaccharide. 
</p>
<p>
    Samples of this format are as follows:
    
    <ul>
        <li>The human 'A' blood group antigen:
            <br/>
            <tt>GalNAc(a1-3)[Fuc(a1-2)]Gal</tt>
        </li>
        <li>The human 'B' blood group antigen:
            <br/>
            <tt>Gal(a1-3)[Fuc(a1-2)]Gal</tt>
        </li>
        <li>The human 'O' blood group antigen:
            <br/>
            <tt>Fuc(a1-2)Gal</tt>
        </li>
        <li>
            The N-glycan Man3GlcNAc2 core:
            <br/> 
            <tt>Man(a1-6)[Man(1-3)]Man(b1-4)GlcNAc(b1-4)GlcNAc</tt>
        </li>
        <li>An example tri-antennary, tri-sialylated complex N-glycan:
            <br/>
            <tt>NeuAc(a2-6)Gal(b1-4)GlcNAc(b1-4)[NeuAc(a2-3)Gal(b1-4)GlcNAc(b1-2)]Man(a1-6)[NeuAc(a2-3)Gal(b1-4)GlcNAc(b1-2)Man(1-3)]Man(b1-4)GlcNAc(b1-4)GlcNAc</tt>
        </li>
    </ul>
</p>

<h2>Grammar</h2>

<h3>Residues</h3>
<p>
    Monosaccharide/residues must be between 3 and 6 characters long, 
    and may consist of any alphanumeric or underscore ([A-Za-z0-9_]), 
    upper or lower case, except for the first letter, which must be 
    alphabetic and upper-case. Examples include Man, Glc, GlcNAc, NeuAc,
    Neu2Ac. 
</p>
<p>
    This nomenclature is consistent with the overwhelming majority of 
    common naturally occuring monosaccharide names covered by IUPAC. 
    Names currently cannot contain hyphens ('-'), although these may 
    be added to accomodate the reduced forms of sugars, which are 
    commonly abbreviated to <tt>-ol</tt>, eg: <tt>GlcNAc-ol</tt>.
</p>

<h3>Linkages</h3>
<p>
    Linkages generally take the form 
    '<tt>([anomer][reducing-terminus]-[non-reducing-terminus])</tt>',
    eg: <tt>Gal(b1-4)Glc</tt> refers to an beta 1->4 linkage from the
    1 (reducing) position of the Gal (Galactose), to the 4
    (a non-reducing) position on the Glc (Glucose) to form the
    common disaccharide Lactose. Parentheses '()' are required around
    linkages and the internal delimiter '<tt>-</tt>' is required between reducing
    and non-reducing terminii.
</p>
<p>
    There are several other linkage descriptions that deviate from this,
    for example covalently bound inorganic phosphate ('<tt>P</tt>') 
    and sulfate ('<tt>S</tt>'). 
    These substituents omit the anomer and reducing terminus syntax, 
    as per the following examples: <tt>P(-4)Gal(b1-4)Glc</tt>. 
    <strong>(P & S linkage syntax is NOT yet supported by this parser)</strong> 
</p>

<h3>Branches</h3>
<p>
    Branches are indicated in the text sequence by the delimiters 
    '<tt>[]</tt>', which surround the text from the opening (rightmost) 
    linkage in the branch to the last (leftmost) residue in the branch.
</p>

<p>
    Created 06-Oct-2005.
</p>
*
*   @author mjh
*   @see IupacParser
*   @see IupacLexer
*   @see IupacParserAdaptor
*   @see SugarSequence
*   @see Sugar
*
********************************************************************/
public class IupacSequenceFormat implements SequenceFormat
{   
    //~~~~~~~~~~~~~~~~~~~~~~ STATIC FIELDS ~~~~~~~~~~~~~~~~~~~~~~~~//
    
    /** Logging handle. */
    static final Logger log = Logger.getLogger( IupacSequenceFormat.class );
    
    
    //~~~~~~~~~~~~~~~~~~~~~~~~~~ FIELDS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//

    
    //~~~~~~~~~~~~~~~~~~~~~~ CONSTRUCTORS ~~~~~~~~~~~~~~~~~~~~~~~~~//
    
    //  no constructors...
    
    //~~~~~~~~~~~~~~~~~~~~~~~~~ METHODS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//

    /** Returns "Iupac" */
    public String getName() {  return "Iupac";  }

    
    /** {@inheritDoc}  @see SequenceFormat#getMonosaccharide(String)  */
    public Monosaccharide getMonosaccharide( String seq ) 
    throws SequenceFormatException
    {
        return SimpleMonosaccharide.forName( seq );   
    }
    

    public Substituent getSubstituent( String seq ) throws SequenceFormatException
    {
        return Substituents.getSubstituent( seq );
    }

    
    /** {@inheritDoc}  @see SequenceFormat#getSugar(String)  */
    public Sugar getSugar( String seq ) throws SequenceFormatException
    {
        IupacLexer   lexer = new IupacLexer( new StringReader( seq ) );
        IupacParser parser = new IupacParser( lexer );

        ParserAdaptor.performParse( parser, seq );
        
        return parser.getSugar();
    }

    
    /** {@inheritDoc}  @see SequenceFormat#getSequence(Sugar)  */
    public String getSequence( Sugar s )
    {
        throw new UnsupportedOperationException("NOT YET IMPLEMENTED");
        
        // Graph<Linkage,Residue> graph = s.getGraph();
    }

    
    /** {@inheritDoc}  @see SequenceFormat#getSequence(Monosaccharide)  */
    public String getSequence( Monosaccharide m )
    {
        Basetype b = m.getBasetype();
        Anomer a = m.getAnomer();
        RingConformation rc = m.getRingConformation();
        
        throw new UnsupportedOperationException();
    }
    
    
    /** {@inheritDoc}  @see SequenceFormat#getSequence(Residue)  */
    public String getSequence( Residue r )
    {
        return r.getName();
    }


    /** {@inheritDoc}  @see SequenceFormat#getSequence(Substituent)  */
    public String getSequence( Substituent s )
    {
        return s.getName();
    }

    
    
    
    public static class Generator extends DepthFirstGraphVisitor<Linkage,Residue>
    {
        private final Graph<Linkage,Residue> graph;
        
        private StringBuffer sequence = new StringBuffer();
        
        
        public Generator( Graph<Linkage,Residue> g )
        {
            this.graph = g;   
        }
        
        
        public void visit()
        {
            visit( graph );
        }
        
        
        public void accept( Vertex<Linkage,Residue> v )
        {
        
            super.accept( v );
            
        }
        
        
        public void accept( Edge<Linkage,Residue> e )
        {
        
            super.accept( e );
            
        }
        
    } // end class Generator
    
} // end class IupacSequenceFormat


