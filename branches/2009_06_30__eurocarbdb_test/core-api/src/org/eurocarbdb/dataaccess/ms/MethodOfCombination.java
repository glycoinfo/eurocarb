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
import java.util.HashSet;
import java.util.Set;

import java.io.Serializable;

//  eurocarb imports
import org.eurocarbdb.dataaccess.BasicEurocarbObject;
import static org.eurocarbdb.dataaccess.Eurocarb.getEntityManager;

/*  class MethodOfCombination  *//**********************************************
*
*
*/ 
public class MethodOfCombination extends BasicEurocarbObject implements Serializable 
{


    //~~~~~~~~~~~~~~~~~~~~~~~~~~ FIELDS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//
      
    private int methodOfCombinationId;
      
    private String methodOfCombination;
      
    private Set<SumAverageRelationship> sumAverageRelationships = new HashSet<SumAverageRelationship>(0);


    //~~~~~~~~~~~~~~~~~~~~~~~ CONSTRUCTORS ~~~~~~~~~~~~~~~~~~~~~~~~//

    /** Default constructor. */
    public MethodOfCombination() {}

    /** Minimal constructor */
    public MethodOfCombination( String methodOfCombination ) 
    {
        this.methodOfCombination = methodOfCombination;
    }
    
    /** full constructor */
    public MethodOfCombination( String methodOfCombination, Set<SumAverageRelationship> sumAverageRelationships ) 
    {
        this.methodOfCombination = methodOfCombination;
        this.sumAverageRelationships = sumAverageRelationships;
    }
    

   
    //~~~~~~~~~~~~~~~~~~~~~~~~~ METHODS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//


    /*  getMethodOfCombinationId  *//******************************** 
    *
    */ 
    public int getMethodOfCombinationId() 
    {
        return this.methodOfCombinationId;
    }
    
    
    /*  setMethodOfCombinationId  *//******************************** 
    *
    */
    public void setMethodOfCombinationId( int methodOfCombinationId ) 
    {
        this.methodOfCombinationId = methodOfCombinationId;
    }
    

    /*  getMethodOfCombination  *//******************************** 
    *
    */ 
    public String getMethodOfCombination() 
    {
        return this.methodOfCombination;
    }
    
    
    /*  setMethodOfCombination  *//******************************** 
    *
    */
    public void setMethodOfCombination( String methodOfCombination ) 
    {
        this.methodOfCombination = methodOfCombination;
    }
    

    /*  getSumAverageRelationships  *//******************************** 
    *
    */ 
    public Set<SumAverageRelationship> getSumAverageRelationships() 
    {
        return this.sumAverageRelationships;
    }
    
    
    /*  setSumAverageRelationships  *//******************************** 
    *
    */
    public void setSumAverageRelationships( Set<SumAverageRelationship> sumAverageRelationships ) 
    {
        this.sumAverageRelationships = sumAverageRelationships;
    }
    
       

    







} // end class
