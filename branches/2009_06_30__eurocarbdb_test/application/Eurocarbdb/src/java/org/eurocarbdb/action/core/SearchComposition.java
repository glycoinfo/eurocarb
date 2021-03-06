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

package org.eurocarbdb.action.core;

//  stdlib imports
import java.util.Date;
import java.util.List;
import java.util.ArrayList;
import java.util.Vector;

//  3rd party imports
import org.apache.log4j.Logger;

//  eurocarb imports
import org.eurocarbdb.action.EurocarbAction;
import org.eurocarbdb.dataaccess.Eurocarb;
import org.eurocarbdb.dataaccess.EntityManager;
import org.eurocarbdb.dataaccess.EntityDoesntExistException;

import org.eurocarbdb.dataaccess.core.Composition;
import org.eurocarbdb.dataaccess.core.GlycanSequence;

//  static imports
import static org.eurocarbdb.dataaccess.Eurocarb.getEntityManager;


/*  class SearchComposition
*
*   searches for structures by composition
*
*/
public class SearchComposition extends EurocarbAction 
{
    // /// class variables

    /** Logging handle. */
    private static final Logger log 
        = Logger.getLogger( SearchComposition.class );

    // /// object variables
    
    /** String version of input sequence. */
    private String                 m_strSearchCriteria;

    // output message
    private String                 m_strMessage = "";
    
    private List<GlycanSequence>     m_arrSearchHits = new ArrayList();


    // /// object methods
    
    public List<GlycanSequence> getSearchHits()
    {
        return m_arrSearchHits;
    }
    
    public void setSearchHits(List<GlycanSequence> list)
    {
        m_arrSearchHits = list;
    }
    
    public String getMessage()
    {
        return m_strMessage;
    }
    
    public void setMessage(String strMessage)
    {
        m_strMessage = strMessage;
    }
    
    public List<String> getComponents()
    {
        return Composition.getComponents();
    }
    
    public String getSearchCriteria()
    {
        return m_strSearchCriteria;
    }
    
    public void setSearchCriteria(String strCriteria)
    {
        m_strSearchCriteria = strCriteria;
    }


    /*  execute  *//**************************************************
    *
    *   executes the search
    */
    public String execute() 
    {
        if ( params == null || params.isEmpty() ) 
            return INPUT; 

        String[] arrItems = m_strSearchCriteria.split(";");
        String strComponent, strMode;
        int nNumber1, nNumber2;
        
        if (arrItems.length <= 1)
        {
            setMessage("empty search criteria");
            return INPUT;
        }
        
        Vector vecTemp;
        Vector vecSearch = new Vector();

        int i = 0;
        while (i < arrItems.length)
        {
            strComponent = arrItems[i];
            strMode = arrItems[i+1];
            
            try { nNumber1 = Integer.parseInt(arrItems[i+2]); }
            catch (NumberFormatException nfe) { i+=4; continue; }
            
            if (strMode.equals("-"))
            {
                try { nNumber2 = Integer.parseInt(arrItems[i+3]); }
                catch (NumberFormatException nfe) { i+=4; continue; }
            
                vecTemp = new Vector();
                vecTemp.add(strComponent);
                vecTemp.add(">");
                vecTemp.add(nNumber1 - 1);
                vecSearch.add(vecTemp);
                
                vecTemp = new Vector();
                vecTemp.add(strComponent);
                vecTemp.add("<");
                vecTemp.add(nNumber2 + 1);
                vecSearch.add(vecTemp);

            }
            else
            {
                vecTemp = new Vector();
                vecTemp.add(strComponent);
                vecTemp.add(strMode);
                vecTemp.add(nNumber1);
                vecSearch.add(vecTemp);
            }

            i += 4;
        }
        
        List lResult = Composition.search(vecSearch);
        Integer seqid;
        
        if (lResult.size() == 0)
        {
            setMessage("No matching structures found.");
            return INPUT;
        }
        else
        {
            GlycanSequence gs;
            
            for (i = 0; i < lResult.size(); i++)
            {
                seqid = (Integer)lResult.get(i);
                gs = Eurocarb.lookup( GlycanSequence.class, seqid.intValue() );
                
                if (gs != null)
                {
                    m_arrSearchHits.add(gs);
                }
            }
            
            return "browse";
        }
    }
}

