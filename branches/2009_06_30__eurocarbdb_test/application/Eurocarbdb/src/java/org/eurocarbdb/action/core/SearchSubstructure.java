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
*   Last commit: $Rev: 1147 $ by $Author: glycoslave $ on $Date:: 2009-06-04 #$  
*/

package org.eurocarbdb.action.core;

//  stdlib imports
import java.util.List;
import java.util.Collections;
import java.math.BigDecimal;

//  3rd party imports 
import org.apache.log4j.Logger;



//  eurocarb imports
import org.eurocarbdb.sugar.Sugar;
import org.eurocarbdb.sugar.SugarSequence;
import org.eurocarbdb.dataaccess.core.*;
import org.eurocarbdb.dataaccess.core.seq.*;
import org.eurocarbdb.action.EurocarbAction;
import org.eurocarbdb.action.BrowseAction;
import org.eurocarbdb.dataaccess.EntityManager;

import org.eurocarbdb.application.glycanbuilder.Glycan;

//  static imports
//import static org.eurocarbdb.util.StringUtils.join;
//import static org.eurocarbdb.dataaccess.Eurocarb.getEntityManager;


/*  class SearchSubstructure  *//****************************************
*
*
*   @author ac
*   @version $Rev: 1147 $
*/
public class SearchSubstructure extends BrowseAction<SubstructureQueryResult>
{

    //~~~~~~~~~~~~~~~~~~~~~~ STATIC FIELDS ~~~~~~~~~~~~~~~~~~~~~~~~//

    /** Logging handle. */
    static final Logger log = Logger.getLogger( SearchSubstructure.class );
        
    //~~~~~~~~~~~~~~~~~~~~~~~~~~ FIELDS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//

    private String sequenceGWS = null;
    
    private String strMessage = "";
  
    private SubstructureQuery query = null;



    //~~~~~~~~~~~~~~~~~~~~~~~~~ METHODS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//
    
    public String getMessage()
    {
        return strMessage;
    }
    
    
    public void setMessage(String strMessage)
    {
        this.strMessage = strMessage;
    }

    
    public String getSequenceGWS() 
    {
        return sequenceGWS;
    }

    
    public void setSequenceGWS(String str) 
    {
        sequenceGWS = str;
    }      

    
    public SubstructureQuery getQuery() 
    {
        return query;
    }
   

    public boolean isSearchCore() 
    {
        return submitAction.equals("Search core");
    }

    
    public boolean isSearchTerminal() 
    {
        return submitAction.equals("Search terminal");
    }
   
    
    /*  execute  *///************************************************
    @SuppressWarnings("unchecked")
    public String execute()
    {
        if( sequenceGWS==null )
            return "input";
    
        // create glycan from string
        Glycan g = Glycan.fromString(sequenceGWS);
        g.removeReducingEndModification();
        
        if( g.isEmpty() ) {
            setMessage("You must specify a structure first");
            return "input";
        }
        
        // search structure in DB
        String gct = g.toGlycoCTCondensed();
        SugarSequence seq = new SugarSequence( gct );
        query = new SubstructureQuery(seq.getSugar());
    
        if( submitAction.equals("Search core") )
            query.setOption(SubstructureQuery.Option.Must_Include_Reducing_Terminus);
        if( submitAction.equals("Search terminal") )
            query.setOption(SubstructureQuery.Option.Must_Include_All_Non_Reducing_Terminii);
    
        query.execute();
        setAllResults(query.getResults());
        return "success";
    }
    
    
    public final Class<SubstructureQueryResult> getIndexableType() 
    {
        return SubstructureQueryResult.class;
    }
  
    
} // end class
