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
// Generated Apr 3, 2007 6:49:19 PM by Hibernate Tools 3.1.0.beta4

package org.eurocarbdb.dataaccess.ms;

//  stdlib imports

import java.io.Serializable;

//  eurocarb imports
import org.eurocarbdb.dataaccess.BasicEurocarbObject;
import static org.eurocarbdb.dataaccess.Eurocarb.getEntityManager;

/*  class SumAverageRelationship  *//**********************************************
*
*
*/ 
public class SumAverageRelationship extends BasicEurocarbObject implements Serializable 
{


    //~~~~~~~~~~~~~~~~~~~~~~~~~~ FIELDS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//
      
    private int sumAverageRelationshipId;
      
    private Scan scanByScanId;
      
    private MethodOfCombination methodOfCombination;
      
    private Scan scanBySubsetScanId;


    //~~~~~~~~~~~~~~~~~~~~~~~ CONSTRUCTORS ~~~~~~~~~~~~~~~~~~~~~~~~//

    /** Default constructor. */
    public SumAverageRelationship() {}

    
    /** full constructor */
    public SumAverageRelationship( Scan scanByScanId, MethodOfCombination methodOfCombination, Scan scanBySubsetScanId ) 
    {
        this.scanByScanId = scanByScanId;
        this.methodOfCombination = methodOfCombination;
        this.scanBySubsetScanId = scanBySubsetScanId;
    }
    

   
    //~~~~~~~~~~~~~~~~~~~~~~~~~ METHODS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//


    /*  getSumAverageRelationshipId  *//******************************** 
    *
    */ 
    public int getSumAverageRelationshipId() 
    {
        return this.sumAverageRelationshipId;
    }
    
    
    /*  setSumAverageRelationshipId  *//******************************** 
    *
    */
    public void setSumAverageRelationshipId( int sumAverageRelationshipId ) 
    {
        this.sumAverageRelationshipId = sumAverageRelationshipId;
    }
    

    /*  getScanByScanId  *//******************************** 
    *
    */ 
    public Scan getScanByScanId() 
    {
        return this.scanByScanId;
    }
    
    
    /*  setScanByScanId  *//******************************** 
    *
    */
    public void setScanByScanId( Scan scanByScanId ) 
    {
        this.scanByScanId = scanByScanId;
    }
    

    /*  getMethodOfCombination  *//******************************** 
    *
    */ 
    public MethodOfCombination getMethodOfCombination() 
    {
        return this.methodOfCombination;
    }
    
    
    /*  setMethodOfCombination  *//******************************** 
    *
    */
    public void setMethodOfCombination( MethodOfCombination methodOfCombination ) 
    {
        this.methodOfCombination = methodOfCombination;
    }
    

    /*  getScanBySubsetScanId  *//******************************** 
    *
    */ 
    public Scan getScanBySubsetScanId() 
    {
        return this.scanBySubsetScanId;
    }
    
    
    /*  setScanBySubsetScanId  *//******************************** 
    *
    */
    public void setScanBySubsetScanId( Scan scanBySubsetScanId ) 
    {
        this.scanBySubsetScanId = scanBySubsetScanId;
    }
    
       

    







} // end class
