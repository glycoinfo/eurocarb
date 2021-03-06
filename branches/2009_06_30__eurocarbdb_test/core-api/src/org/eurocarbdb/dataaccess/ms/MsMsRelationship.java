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
// Generated Apr 3, 2007 6:49:20 PM by Hibernate Tools 3.1.0.beta4

package org.eurocarbdb.dataaccess.ms;

//  stdlib imports

import java.io.Serializable;

//  eurocarb imports
import org.eurocarbdb.dataaccess.BasicEurocarbObject;
import static org.eurocarbdb.dataaccess.Eurocarb.getEntityManager;

/*  class MsMsRelationship  *//**********************************************
*
*
*/ 
public class MsMsRelationship extends BasicEurocarbObject implements Serializable 
{


    //~~~~~~~~~~~~~~~~~~~~~~~~~~ FIELDS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//
      
    private int msMsRelationshipId;
      
    private Scan childScan;
      
    private Scan parentScan;
      
    private double precursorMz;
      
    private double precursorIntensity;
      
    private Double precursorMassWindowLow;
      
    private double precursorMassWindowHigh;
      
    private int precursorCharge;
      
    private String msMsMethod;


    //~~~~~~~~~~~~~~~~~~~~~~~ CONSTRUCTORS ~~~~~~~~~~~~~~~~~~~~~~~~//

    /** Default constructor. */
    public MsMsRelationship() {}

    /** Minimal constructor */
    public MsMsRelationship( Scan childScan, Scan parentScan, double precursorMz, double precursorIntensity, double precursorMassWindowHigh, int precursorCharge, String msMsMethod ) 
    {
        this.childScan = childScan;
        this.parentScan = parentScan;
        this.precursorMz = precursorMz;
        this.precursorIntensity = precursorIntensity;
        this.precursorMassWindowHigh = precursorMassWindowHigh;
        this.precursorCharge = precursorCharge;
        this.msMsMethod = msMsMethod;
    }
    
    /** full constructor */
    public MsMsRelationship( Scan childScan, Scan parentScan, double precursorMz, double precursorIntensity, Double precursorMassWindowLow, double precursorMassWindowHigh, int precursorCharge, String msMsMethod ) 
    {
        this.childScan = childScan;
        this.parentScan = parentScan;
        this.precursorMz = precursorMz;
        this.precursorIntensity = precursorIntensity;
        this.precursorMassWindowLow = precursorMassWindowLow;
        this.precursorMassWindowHigh = precursorMassWindowHigh;
        this.precursorCharge = precursorCharge;
        this.msMsMethod = msMsMethod;
    }
    

   
    //~~~~~~~~~~~~~~~~~~~~~~~~~ METHODS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//


    /*  getMsMsRelationshipId  *//******************************** 
    *
    */ 
    public int getMsMsRelationshipId() 
    {
        return this.msMsRelationshipId;
    }
    
    
    /*  setMsMsRelationshipId  *//******************************** 
    *
    */
    public void setMsMsRelationshipId( int msMsRelationshipId ) 
    {
        this.msMsRelationshipId = msMsRelationshipId;
    }
    

    /*  getChildScan  *//******************************** 
    *
    */ 
    public Scan getChildScan() 
    {
        return this.childScan;
    }
    
    
    /*  setChildScan  *//******************************** 
    *
    */
    public void setChildScan( Scan childScan ) 
    {
        this.childScan = childScan;
    }
    

    /*  getParentScan  *//******************************** 
    *
    */ 
    public Scan getParentScan() 
    {
        return this.parentScan;
    }
    
    
    /*  setParentScan  *//******************************** 
    *
    */
    public void setParentScan( Scan parentScan ) 
    {
        this.parentScan = parentScan;
    }
    

    /*  getPrecursorMz  *//******************************** 
    *
    */ 
    public double getPrecursorMz() 
    {
        return this.precursorMz;
    }
    
    
    /*  setPrecursorMz  *//******************************** 
    *
    */
    public void setPrecursorMz( double precursorMz ) 
    {
        this.precursorMz = precursorMz;
    }
    

    /*  getPrecursorIntensity  *//******************************** 
    *
    */ 
    public double getPrecursorIntensity() 
    {
        return this.precursorIntensity;
    }
    
    
    /*  setPrecursorIntensity  *//******************************** 
    *
    */
    public void setPrecursorIntensity( double precursorIntensity ) 
    {
        this.precursorIntensity = precursorIntensity;
    }
    

    /*  getPrecursorMassWindowLow  *//******************************** 
    *
    */ 
    public Double getPrecursorMassWindowLow() 
    {
        return this.precursorMassWindowLow;
    }
    
    
    /*  setPrecursorMassWindowLow  *//******************************** 
    *
    */
    public void setPrecursorMassWindowLow( Double precursorMassWindowLow ) 
    {
        this.precursorMassWindowLow = precursorMassWindowLow;
    }
    

    /*  getPrecursorMassWindowHigh  *//******************************** 
    *
    */ 
    public double getPrecursorMassWindowHigh() 
    {
        return this.precursorMassWindowHigh;
    }
    
    
    /*  setPrecursorMassWindowHigh  *//******************************** 
    *
    */
    public void setPrecursorMassWindowHigh( double precursorMassWindowHigh ) 
    {
        this.precursorMassWindowHigh = precursorMassWindowHigh;
    }
    

    /*  getPrecursorCharge  *//******************************** 
    *
    */ 
    public int getPrecursorCharge() 
    {
        return this.precursorCharge;
    }
    
    
    /*  setPrecursorCharge  *//******************************** 
    *
    */
    public void setPrecursorCharge( int precursorCharge ) 
    {
        this.precursorCharge = precursorCharge;
    }
    

    /*  getMsMsMethod  *//******************************** 
    *
    */ 
    public String getMsMsMethod() 
    {
        return this.msMsMethod;
    }
    
    
    /*  setMsMsMethod  *//******************************** 
    *
    */
    public void setMsMsMethod( String msMsMethod ) 
    {
        this.msMsMethod = msMsMethod;
    }
    
     

} // end class
