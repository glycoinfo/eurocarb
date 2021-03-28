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

/*  class Fragmentation  *//**********************************************
*
*
*/ 
public class Fragmentation extends BasicEurocarbObject implements Serializable 
{


    //~~~~~~~~~~~~~~~~~~~~~~~~~~ FIELDS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//
      
    private int fragmentationId;
      
    private PeakAnnotated peakAnnotated;
      
    private String fragmentType;
      
    private String fragmentDc;
      
    private String fragmentAlt;
      
    private Integer fragmentPosition;
      
    private Integer cleavageOne;
      
    private Integer cleavageTwo;


    //~~~~~~~~~~~~~~~~~~~~~~~ CONSTRUCTORS ~~~~~~~~~~~~~~~~~~~~~~~~//

    /** Default constructor. */
    public Fragmentation() {}

    /** Minimal constructor */
    public Fragmentation( PeakAnnotated peakAnnotated, String fragmentDc ) 
    {
        this.peakAnnotated = peakAnnotated;
        this.fragmentDc = fragmentDc;
    }
    
    /** full constructor */
    public Fragmentation( PeakAnnotated peakAnnotated, String fragmentType, String fragmentDc, String fragmentAlt, Integer fragmentPosition, Integer cleavageOne, Integer cleavageTwo ) 
    {
        this.peakAnnotated = peakAnnotated;
        this.fragmentType = fragmentType;
        this.fragmentDc = fragmentDc;
        this.fragmentAlt = fragmentAlt;
        this.fragmentPosition = fragmentPosition;
        this.cleavageOne = cleavageOne;
        this.cleavageTwo = cleavageTwo;
    }
    

   
    //~~~~~~~~~~~~~~~~~~~~~~~~~ METHODS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//


    /*  getFragmentationId  *//******************************** 
    *
    */ 
    public int getFragmentationId() 
    {
        return this.fragmentationId;
    }
    
    
    /*  setFragmentationId  *//******************************** 
    *
    */
    public void setFragmentationId( int fragmentationId ) 
    {
        this.fragmentationId = fragmentationId;
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
    

    /*  getFragmentType  *//******************************** 
    *
    */ 
    public String getFragmentType() 
    {
        return this.fragmentType;
    }
    
    
    /*  setFragmentType  *//******************************** 
    *
    */
    public void setFragmentType( String fragmentType ) 
    {
        this.fragmentType = fragmentType;
    }
    

    /*  getFragmentDc  *//******************************** 
    *
    */ 
    public String getFragmentDc() 
    {
        return this.fragmentDc;
    }
    
    
    /*  setFragmentDc  *//******************************** 
    *
    */
    public void setFragmentDc( String fragmentDc ) 
    {
        this.fragmentDc = fragmentDc;
    }
    

    /*  getFragmentAlt  *//******************************** 
    *
    */ 
    public String getFragmentAlt() 
    {
        return this.fragmentAlt;
    }
    
    
    /*  setFragmentAlt  *//******************************** 
    *
    */
    public void setFragmentAlt( String fragmentAlt ) 
    {
        this.fragmentAlt = fragmentAlt;
    }
    

    /*  getFragmentPosition  *//******************************** 
    *
    */ 
    public Integer getFragmentPosition() 
    {
        return this.fragmentPosition;
    }
    
    
    /*  setFragmentPosition  *//******************************** 
    *
    */
    public void setFragmentPosition( Integer fragmentPosition ) 
    {
        this.fragmentPosition = fragmentPosition;
    }
    

    /*  getCleavageOne  *//******************************** 
    *
    */ 
    public Integer getCleavageOne() 
    {
        return this.cleavageOne;
    }
    
    
    /*  setCleavageOne  *//******************************** 
    *
    */
    public void setCleavageOne( Integer cleavageOne ) 
    {
        this.cleavageOne = cleavageOne;
    }
    

    /*  getCleavageTwo  *//******************************** 
    *
    */ 
    public Integer getCleavageTwo() 
    {
        return this.cleavageTwo;
    }
    
    
    /*  setCleavageTwo  *//******************************** 
    *
    */
    public void setCleavageTwo( Integer cleavageTwo ) 
    {
        this.cleavageTwo = cleavageTwo;
    }
    
       

    







} // end class
