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
// Generated Apr 3, 2007 6:49:18 PM by Hibernate Tools 3.1.0.beta4

package org.eurocarbdb.dataaccess.ms;

//  stdlib imports

import java.io.Serializable;

//  eurocarb imports
import org.eurocarbdb.dataaccess.BasicEurocarbObject;
import static org.eurocarbdb.dataaccess.Eurocarb.getEntityManager;

/*  class PeakAnnotatedToIon  *//**********************************************
*
*
*/ 
public class PeakAnnotatedToIon extends BasicEurocarbObject implements Serializable 
{


    //~~~~~~~~~~~~~~~~~~~~~~~~~~ FIELDS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//
      
    private int peakAnnotatedToIonId;
      
    private Ion ion;
      
    private PeakAnnotated peakAnnotated;
      
    private int charge;
      
    private boolean gain;


    //~~~~~~~~~~~~~~~~~~~~~~~ CONSTRUCTORS ~~~~~~~~~~~~~~~~~~~~~~~~//

    /** Default constructor. */
    public PeakAnnotatedToIon() {}

    
    /** full constructor */
    public PeakAnnotatedToIon( Ion ion, PeakAnnotated peakAnnotated, int charge, boolean gain ) 
    {
        this.ion = ion;
        this.peakAnnotated = peakAnnotated;
        this.charge = charge;
        this.gain = gain;
    }
    

   
    //~~~~~~~~~~~~~~~~~~~~~~~~~ METHODS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//


    /*  getPeakAnnotatedToIonId  *//******************************** 
    *
    */ 
    public int getPeakAnnotatedToIonId() 
    {
        return this.peakAnnotatedToIonId;
    }
    
    
    /*  setPeakAnnotatedToIonId  *//******************************** 
    *
    */
    public void setPeakAnnotatedToIonId( int peakAnnotatedToIonId ) 
    {
        this.peakAnnotatedToIonId = peakAnnotatedToIonId;
    }
    

    /*  getIon  *//******************************** 
    *
    */ 
    public Ion getIon() 
    {
        return this.ion;
    }
    
    
    /*  setIon  *//******************************** 
    *
    */
    public void setIon( Ion ion ) 
    {
        this.ion = ion;
    }
    

    /*  getPeakAnnotated  *//******************************** 
    *
    */ 
    public PeakAnnotated getPeakAnnotated() 
    {
        return this.peakAnnotated;
    }
    
    
    /*  setPeakAnnotated  *//******************************** 
    *
    */
    public void setPeakAnnotated( PeakAnnotated peakAnnotated ) 
    {
        this.peakAnnotated = peakAnnotated;
    }
    

    /*  getCharge  *//******************************** 
    *
    */ 
    public int getCharge() 
    {
        return this.charge;
    }
    
    
    /*  setCharge  *//******************************** 
    *
    */
    public void setCharge( int charge ) 
    {
        this.charge = charge;
    }
    

    /*  isGain  *//******************************** 
    *
    */ 
    public boolean isGain() 
    {
        return this.gain;
    }
    
    
    /*  setGain  *//******************************** 
    *
    */
    public void setGain( boolean gain ) 
    {
        this.gain = gain;
    }
    
       

    







} // end class
