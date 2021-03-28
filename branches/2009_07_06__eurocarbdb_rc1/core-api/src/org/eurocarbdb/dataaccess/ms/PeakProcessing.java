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

/*  class PeakProcessing  *//**********************************************
*
*
*/ 
public class PeakProcessing extends BasicEurocarbObject implements Serializable 
{
    /** Logging handle. */
    static final Logger log = Logger.getLogger( PeakProcessing.class );


    //~~~~~~~~~~~~~~~~~~~~~~~~~~ FIELDS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//
      
    private int peakProcessingId;
      
    private String peakProcessingType;
      
    private Set<Scan> scans = new HashSet<Scan>(0);


    //~~~~~~~~~~~~~~~~~~~~~~~ CONSTRUCTORS ~~~~~~~~~~~~~~~~~~~~~~~~//

    /** Default constructor. */
    public PeakProcessing() {}

    
    /** full constructor */
    public PeakProcessing( String peakProcessingType, Set<Scan> scans ) 
    {
        this.peakProcessingType = peakProcessingType;
        this.scans = scans;
    }
    

    static public PeakProcessing createOrLookup(String type) {
    PeakProcessing ret = lookup(type);
    if( ret==null ) {
        // create new
        ret = new PeakProcessing();
        ret.setPeakProcessingType(type);    
    }

    return ret;
    }

    public static PeakProcessing lookup( String type )
    {
        log.debug("looking up PeakProcessing by exact type");
        Object ret = getEntityManager()
        .getQuery( "org.eurocarbdb.dataaccess.ms.PeakProcessing.BY_TYPE" )
        .setParameter("type", type )
        .uniqueResult();
    
        assert ret instanceof PeakProcessing;
        
        return (PeakProcessing) ret;
    }

    
    //~~~~~~~~~~~~~~~~~~~~~~~~~ METHODS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//


    /*  getPeakProcessingId  *//******************************** 
    *
    */ 
    public int getPeakProcessingId() 
    {
        return this.peakProcessingId;
    }
    
    
    /*  setPeakProcessingId  *//******************************** 
    *
    */
    public void setPeakProcessingId( int peakProcessingId ) 
    {
        this.peakProcessingId = peakProcessingId;
    }
    

    /*  getPeakProcessingType  *//******************************** 
    *
    */ 
    public String getPeakProcessingType() 
    {
        return this.peakProcessingType;
    }
    
    
    /*  setPeakProcessingType  *//******************************** 
    *
    */
    public void setPeakProcessingType( String peakProcessingType ) 
    {
        this.peakProcessingType = peakProcessingType;
    }
    

    /*  getScans  *//******************************** 
    *
    */ 
    public Set<Scan> getScans() 
    {
        return this.scans;
    }
    
    
    /*  setScans  *//******************************** 
    *
    */
    public void setScans( Set<Scan> scans ) 
    {
        this.scans = scans;
    }
           
    public int hashCode()
    {
        return ( peakProcessingId + ':' + peakProcessingType ).hashCode();  
    }
    
    public boolean equals( Object x )
    {
        if ( this == x )
            return true;
        
        if ( (x == null) || (x.getClass() != this.getClass()) )
            return false;
        
        // objects are the same class
        PeakProcessing pp = (PeakProcessing)x;

        return this.peakProcessingId == pp.peakProcessingId 
            && this.peakProcessingType == pp.peakProcessingType;
    }






} // end class
