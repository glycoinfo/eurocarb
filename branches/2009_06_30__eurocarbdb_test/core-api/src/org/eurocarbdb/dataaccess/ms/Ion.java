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
// Generated Apr 3, 2007 6:49:19 PM by Hibernate Tools 3.1.0.beta4

package org.eurocarbdb.dataaccess.ms;

//  stdlib imports
import java.util.HashSet;
import java.util.Set;

import java.io.Serializable;

//  3rd party imports
import org.apache.log4j.Logger;

//  eurocarb imports
import org.eurocarbdb.dataaccess.BasicEurocarbObject;
import static org.eurocarbdb.dataaccess.Eurocarb.getEntityManager;

/*  class Ion  *//**********************************************
*
*
*/ 
public class Ion extends BasicEurocarbObject implements Serializable 
{
    /** Logging handle. */
    static final Logger log = Logger.getLogger( Ion.class );

    //~~~~~~~~~~~~~~~~~~~~~~~~~~ FIELDS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//
      
    private int ionId;
      
    private String ionType;
      
    private Set<PeakAnnotatedToIon> peakAnnotatedToIons = new HashSet<PeakAnnotatedToIon>(0);


    //~~~~~~~~~~~~~~~~~~~~~~~ CONSTRUCTORS ~~~~~~~~~~~~~~~~~~~~~~~~//

    /** Default constructor. */
    public Ion() {}

    /** Minimal constructor */
    public Ion( String ionType ) 
    {
        this.ionType = ionType;
    }
    
    /** full constructor */
    public Ion( String ionType, Set<PeakAnnotatedToIon> peakAnnotatedToIons ) 
    {
        this.ionType = ionType;
        this.peakAnnotatedToIons = peakAnnotatedToIons;
    }
    

   
    //~~~~~~~~~~~~~~~~~~~~~~~~~ METHODS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//


    /*  getIonId  *//******************************** 
    *
    */ 
    public int getIonId() 
    {
        return this.ionId;
    }
    
    
    /*  setIonId  *//******************************** 
    *
    */
    public void setIonId( int ionId ) 
    {
        this.ionId = ionId;
    }
    

    /*  getIonType  *//******************************** 
    *
    */ 
    public String getIonType() 
    {
        return this.ionType;
    }
    
    
    /*  setIonType  *//******************************** 
    *
    */
    public void setIonType( String ionType ) 
    {
        this.ionType = ionType;
    }
    

    /*  getPeakAnnotatedToIons  *//******************************** 
    *
    */ 
    public Set<PeakAnnotatedToIon> getPeakAnnotatedToIons() 
    {
        return this.peakAnnotatedToIons;
    }
    
    
    /*  setPeakAnnotatedToIons  *//******************************** 
    *
    */
    public void setPeakAnnotatedToIons( Set<PeakAnnotatedToIon> peakAnnotatedToIons ) 
    {
        this.peakAnnotatedToIons = peakAnnotatedToIons;
    }
    
       
    
    public static Ion lookup( String type )
    {
        log.debug("looking up ion by exact type");
        Object i = getEntityManager()
                  .getQuery( "org.eurocarbdb.dataaccess.ms.Ion.BY_ION_TYPE" )
                  .setParameter("type", type )
                  .uniqueResult();

        assert i instanceof Ion;
        
        return (Ion) i;
    }


} // end class
