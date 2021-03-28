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

/*  class PeakAnnotatedToSmallMolecule  *//**********************************************
*
*
*/ 
public class PeakAnnotatedToSmallMolecule extends BasicEurocarbObject implements Serializable 
{


    //~~~~~~~~~~~~~~~~~~~~~~~~~~ FIELDS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//
      
    private int peakAnnotatedToSmallMoleculeId;
      
    private SmallMolecule smallMolecule;
      
    private PeakAnnotated peakAnnotated;
      
    private String operation;


    //~~~~~~~~~~~~~~~~~~~~~~~ CONSTRUCTORS ~~~~~~~~~~~~~~~~~~~~~~~~//

    /** Default constructor. */
    public PeakAnnotatedToSmallMolecule() {}

    
    /** full constructor */
    public PeakAnnotatedToSmallMolecule( SmallMolecule smallMolecule, PeakAnnotated peakAnnotated, String operation ) 
    {
        this.smallMolecule = smallMolecule;
        this.peakAnnotated = peakAnnotated;
        this.operation = operation;
    }
    

   
    //~~~~~~~~~~~~~~~~~~~~~~~~~ METHODS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//


    /*  getPeakAnnotatedToSmallMoleculeId  *//******************************** 
    *
    */ 
    public int getPeakAnnotatedToSmallMoleculeId() 
    {
        return this.peakAnnotatedToSmallMoleculeId;
    }
    
    
    /*  setPeakAnnotatedToSmallMoleculeId  *//******************************** 
    *
    */
    public void setPeakAnnotatedToSmallMoleculeId( int peakAnnotatedToSmallMoleculeId ) 
    {
        this.peakAnnotatedToSmallMoleculeId = peakAnnotatedToSmallMoleculeId;
    }
    

    /*  getSmallMolecule  *//******************************** 
    *
    */ 
    public SmallMolecule getSmallMolecule() 
    {
        return this.smallMolecule;
    }
    
    
    /*  setSmallMolecule  *//******************************** 
    *
    */
    public void setSmallMolecule( SmallMolecule smallMolecule ) 
    {
        this.smallMolecule = smallMolecule;
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
    

    /*  getOperation  *//******************************** 
    *
    */ 
    public String getOperation() 
    {
        return this.operation;
    }
    
    
    /*  setOperation  *//******************************** 
    *
    */
    public void setOperation( String operation ) 
    {
        this.operation = operation;
    }
    
       

    







} // end class
