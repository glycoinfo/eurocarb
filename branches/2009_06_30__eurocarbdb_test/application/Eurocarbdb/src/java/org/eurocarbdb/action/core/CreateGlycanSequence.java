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
*   Last commit: $Rev: 1210 $ by $Author: glycoslave $ on $Date:: 2009-06-11 #$  
*/
/**
* $Id: CreateGlycanSequence.java 1210 2009-06-11 18:13:15Z glycoslave $
* Last changed $Author: glycoslave $
* EUROCarbDB Project
*/
package org.eurocarbdb.action.core;

//  stdlib imports
import java.util.Date;
import java.util.List;

//  3rd party imports
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory; 

//  eurocarb imports
import org.eurocarbdb.action.EurocarbAction;
import org.eurocarbdb.dataaccess.EntityManager;
import org.eurocarbdb.dataaccess.EntityDoesntExistException;

import org.eurocarbdb.dataaccess.core.Contributor;
import org.eurocarbdb.dataaccess.core.GlycanSequence;

//  static imports
import static org.eurocarbdb.dataaccess.Eurocarb.getEntityManager;


/*  class CreateGlycanSequence  *//**********************************
*
*   Action for entering a new glycan sequence into Eurocarb.
*
*   Minimum required parameters:
*
*   sequence - A sequence string
*   contributor.contributorId - A reference to an existing Contributor.
*
*   @author              mjh [matt@ebi.ac.uk]
*   @version             $Rev: 1210 $
*/
public class CreateGlycanSequence extends EurocarbAction 
{
    //~~~~~~~~~~~~~~~~~~~~~  STATIC FIELDS  ~~~~~~~~~~~~~~~~~~~~~~~//
    
    /** Class/Action-specific log handle. */
    public static final Log log 
        = LogFactory.getLog( CreateGlycanSequence.class );

    
    //~~~~~~~~~~~~~~~~~~~~~~~~~  FIELDS  ~~~~~~~~~~~~~~~~~~~~~~~~~~//

    /** String version of input sequence. */
    private String sequence;

    /** The contributor of this sequence. */
    private Contributor contributor = new Contributor();

    /** The sequence created from the input sequence. */
    private GlycanSequence glycanSequence = null;

    
    //~~~~~~~~~~~~~~~~~~~~~~~~  METHODS  ~~~~~~~~~~~~~~~~~~~~~~~~~~//
    
    public final List<Contributor> getAllContributors()
    {
        return Contributor.getAllContributors();   
    }
    
    /*  getContributor  *//******************************************
    *
    *   Returns the contributor of this sequence.
    */
    public Contributor getContributor()
    {
        return contributor; 
    }
    

    /*  setContributor  *//******************************************
    *
    *   Sets the contributor of this sequence.
    */
    public void setContributor( Contributor contributor )
    {
        this.contributor = contributor;
    }

    
    /*  getGlycanSequence  *//***************************************
    *
    *   Returns the value of sequence.
    */
    public GlycanSequence getGlycanSequence() 
    {
        return glycanSequence;
    }
    

    /*  setGlycanSequence  *//***************************************
    *
    *   Returns the value of sequence.
    */
    protected void setGlycanSequence( GlycanSequence seq ) 
    {
        this.glycanSequence = seq;
    }

    
    /*  getSequence  *//*********************************************
    *
    *   Returns the value of sequence.
    */
    public String getSequence()
    {
        return sequence;
    }

    
    /*  getSequence  *//*********************************************
    *
    *   Sets the value of sequence.
    */
    public void setSequence(String sequence)
    {
        this.sequence = sequence;
    }


    /*  execute  *//**************************************************
    *
    *   Creates a new GlycanSequence object comprising the input
    *   sequence from {@link #getSequence()} and the input {@link Contributor} 
    *   from {@link #getContributor()}. 
    *   
    *<ol>
    *<li> validates input sequence </li>
    *<li> validates input contributor</li>
    *<li> creates a new GlycanSequence </li>
    *<li> associates contributor with GlycanSequence </li>
    *<li> stores new GlycanSequence to data store </li>
    *</ol>
    *
    */
    public String execute() 
    {
        if ( params == null || params.isEmpty() ) 
            return INPUT; 
        
       //~~~  validate sequence  ~~~//
        
        if ( sequence == null || sequence.length() == 0 ) 
        {
            log.debug("No sequence set, returning INPUT view");
            addFieldError( "sequence", "No valid sequence given" );   
            return INPUT;
        }

        
        //~~~ create & save glycan sequence ~~~//
        
        GlycanSequence glyseq = new GlycanSequence( sequence );
        glyseq.setContributor( this.getCurrentContributor() );
        setGlycanSequence( glyseq );
        
        try 
        {  
            getEntityManager().store( glyseq );  
        }
        catch ( Exception e )
        {
            log.warn("Failed to save GlycanSequence " 
                    + glyseq 
                    + ": " 
                    + e.getMessage() 
                    );
            
            e.printStackTrace();
            
            return ERROR;
        }
        
        return SUCCESS;
    }


} // end of class














