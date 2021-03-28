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

import java.util.List;

import org.eurocarbdb.action.BrowseAction;
import org.eurocarbdb.dataaccess.core.Evidence;
import org.eurocarbdb.dataaccess.core.Contributor;

import static org.eurocarbdb.dataaccess.Eurocarb.getEntityManager;

/*  class BrowseContributorEvidence
*
*   descr here
*
*/
public class BrowseContributorEvidence extends BrowseAction<Evidence>
{   
    private Contributor contributor = Contributor.getCurrentContributor();
    
    public void setContributorId(int id) 
    {
        contributor = getEntityManager().lookup( Contributor.class, id );
        if( contributor == null ) 
            contributor = Contributor.getGuestContributor();
    }

    public int getContributorId() 
    {
        return contributor.getContributorId();
    }


    public void setContributor(Contributor c) 
    { 
        contributor = c; 
        if( contributor == null ) 
            contributor = Contributor.getGuestContributor();
    }

    public Contributor getContributor() 
    {
        return contributor;
    } 
    
    
    public String execute()
    {
        setAllResults( contributor.getMyEvidence() );
        return SUCCESS;
    }
    
    
    public final Class<Evidence> getIndexableType() 
    {
        return Evidence.class;
    }
    
    
} // end class

