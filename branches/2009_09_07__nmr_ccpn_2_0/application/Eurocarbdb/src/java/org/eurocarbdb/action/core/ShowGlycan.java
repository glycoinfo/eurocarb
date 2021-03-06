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
*   Last commit: $Rev: 1549 $ by $Author: glycoslave $ on $Date:: 2009-07-19 #$  
*/

package org.eurocarbdb.action.core;

//  stdlib imports
import java.util.Set;
import java.util.List;
import java.util.Arrays;
import java.util.Iterator;

//  3rd party imports 
import org.apache.log4j.Logger;

//  eurocarb imports
import org.eurocarbdb.action.EurocarbAction;
import org.eurocarbdb.dataaccess.EntityManager;
import org.eurocarbdb.dataaccess.core.GlycanSequence;

//  static imports
import static org.eurocarbdb.dataaccess.Eurocarb.getEntityManager;


/*  class ShowGlycan  *//****************************************
*
*   Shows a detail page for an glycan given an glycan id.
*
*
*   @author   mjh [matt@ebi.ac.uk]
*   @version  $Rev: 1549 $
*/
public class ShowGlycan extends EurocarbAction
{
    //~~~~~~~~~~~~~~~~~~~~~~~~~~ FIELDS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//

    protected static final Logger log 
        = Logger.getLogger( ShowGlycan.class.getName() );

    /** The glycan we will detail, created using given glycan id */
    private GlycanSequence glycan = null;

    /** GlycanSequence ID for the glycan to detail, populated from input parameters */
    private int searchGlycanId = -1;
    
    
    //~~~~~~~~~~~~~~~~~~~~~~~~~ METHODS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//
    
    /** Returns the Glycan that was looked up. This will most likely be 
    *   null if the execute() method has not yet been called. 
    */
    public GlycanSequence getGlycan() {  return glycan;  }

    public GlycanSequence getGlycanSequence() {  return glycan;  }
    
    //public void setGlycanSequence( GlycanSequence t ) {  glycan = t;  }

    /** Returns the glycan id that is being looked up. */
    public int getGlycanSequenceId() {  return searchGlycanId;  }
    
    /** Sets the glycan id to lookup. */
    public void setGlycanSequenceId( int search_id ) {  searchGlycanId = search_id;  }


    public String execute()
    {
    if( submitAction!=null && submitAction.equals("Add MS data") ) 
        {
            return "add_ms_data";
        }

    if( submitAction!=null && submitAction.equals("Add HPLC data"))
    {
        return "add_hplc_data";
    }

        if ( params.isEmpty() ) 
            return INPUT;
        
        if ( searchGlycanId <= 0 )
        {
            this.addFieldError( "glycanId", "Invalid glycan id '" 
                                          + searchGlycanId 
                                          + "'" );
            return INPUT;
        }
    
        glycan = getEntityManager().lookup( GlycanSequence.class, searchGlycanId );
    
        if ( glycan == null )
        {
            log.info( "No glycan associated with glycan sequence id " + searchGlycanId );
            this.addActionError( "No glycan exists for glycan id '" 
                               + searchGlycanId 
                               + "'" 
                               );
            return ERROR;
        }

        return ! this.hasActionErrors() ? SUCCESS : ERROR;
    }

} // end class
