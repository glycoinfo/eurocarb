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
// Generated Apr 3, 2007 6:49:20 PM by Hibernate Tools 3.1.0.beta4

package org.eurocarbdb.dataaccess.ms;

//  stdlib imports

import java.io.Serializable;

//  eurocarb imports
import org.eurocarbdb.dataaccess.BasicEurocarbObject;
import static org.eurocarbdb.dataaccess.Eurocarb.getEntityManager;

/*  class DataProcessing  *//**********************************************
*
*
*/ 
public class DataProcessing extends BasicEurocarbObject implements Serializable 
{


    //~~~~~~~~~~~~~~~~~~~~~~~~~~ FIELDS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//
      
    private int dataProcessingId;
      
    private Scan scan;
      
    private SoftwareType softwareType;
      
    private Software software;
      
    private boolean spotIntegration;
      
    private double intensityCutoff;
      
    private String format;
      
    private int softwareOrder;


    //~~~~~~~~~~~~~~~~~~~~~~~ CONSTRUCTORS ~~~~~~~~~~~~~~~~~~~~~~~~//

    /** Default constructor. */
    public DataProcessing() {}

    
    /** full constructor */
    public DataProcessing( Scan scan, SoftwareType softwareType, Software software, boolean spotIntegration, double intensityCutoff, String format, int softwareOrder ) 
    {
        this.scan = scan;
        this.softwareType = softwareType;
        this.software = software;
        this.spotIntegration = spotIntegration;
        this.intensityCutoff = intensityCutoff;
        this.format = format;
        this.softwareOrder = softwareOrder;
    }
    

   
    //~~~~~~~~~~~~~~~~~~~~~~~~~ METHODS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//


    /*  getDataProcessingId  *//******************************** 
    *
    */ 
    public int getDataProcessingId() 
    {
        return this.dataProcessingId;
    }
    
    
    /*  setDataProcessingId  *//******************************** 
    *
    */
    public void setDataProcessingId( int dataProcessingId ) 
    {
        this.dataProcessingId = dataProcessingId;
    }
    

    /*  getScan  *//******************************** 
    *
    */ 
    public Scan getScan() 
    {
        return this.scan;
    }
    
    
    /*  setScan  *//******************************** 
    *
    */
    public void setScan( Scan scan ) 
    {
        this.scan = scan;
    }
    

    /*  getSoftwareType  *//******************************** 
    *
    */ 
    public SoftwareType getSoftwareType() 
    {
        return this.softwareType;
    }
    
    
    /*  setSoftwareType  *//******************************** 
    *
    */
    public void setSoftwareType( SoftwareType softwareType ) 
    {
        this.softwareType = softwareType;
    }
    

    /*  getSoftware  *//******************************** 
    *
    */ 
    public Software getSoftware() 
    {
        return this.software;
    }
    
    
    /*  setSoftware  *//******************************** 
    *
    */
    public void setSoftware( Software software ) 
    {
        this.software = software;
    }
    

    /*  isSpotIntegration  *//******************************** 
    *
    */ 
    public boolean isSpotIntegration() 
    {
        return this.spotIntegration;
    }
    
    
    /*  setSpotIntegration  *//******************************** 
    *
    */
    public void setSpotIntegration( boolean spotIntegration ) 
    {
        this.spotIntegration = spotIntegration;
    }
    

    /*  getIntensityCutoff  *//******************************** 
    *
    */ 
    public double getIntensityCutoff() 
    {
        return this.intensityCutoff;
    }
    
    
    /*  setIntensityCutoff  *//******************************** 
    *
    */
    public void setIntensityCutoff( double intensityCutoff ) 
    {
        this.intensityCutoff = intensityCutoff;
    }
    

    /*  getFormat  *//******************************** 
    *
    */ 
    public String getFormat() 
    {
        return this.format;
    }
    
    
    /*  setFormat  *//******************************** 
    *
    */
    public void setFormat( String format ) 
    {
        this.format = format;
    }
    

    /*  getSoftwareOrder  *//******************************** 
    *
    */ 
    public int getSoftwareOrder() 
    {
        return this.softwareOrder;
    }
    
    
    /*  setSoftwareOrder  *//******************************** 
    *
    */
    public void setSoftwareOrder( int softwareOrder ) 
    {
        this.softwareOrder = softwareOrder;
    }
    
       

    







} // end class
