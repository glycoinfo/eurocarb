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
// Generated Apr 3, 2007 6:49:17 PM by Hibernate Tools 3.1.0.beta4

package org.eurocarbdb.dataaccess.ms;

//  stdlib imports

import java.io.Serializable;

//  eurocarb imports
import org.eurocarbdb.dataaccess.BasicEurocarbObject;
import static org.eurocarbdb.dataaccess.Eurocarb.getEntityManager;

/*  class SmallMoleculeComposition  *//**********************************************
*
*
*/ 
public class SmallMoleculeComposition extends BasicEurocarbObject implements Serializable 
{


    //~~~~~~~~~~~~~~~~~~~~~~~~~~ FIELDS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//
      
    private int smallMoleculeCompositionId;
      
    private SmallMolecule smallMolecule;
      
    private int atomType;
      
    private int number;


    //~~~~~~~~~~~~~~~~~~~~~~~ CONSTRUCTORS ~~~~~~~~~~~~~~~~~~~~~~~~//

    /** Default constructor. */
    public SmallMoleculeComposition() {}

    
    /** full constructor */
    public SmallMoleculeComposition( SmallMolecule smallMolecule, int atomType, int number ) 
    {
        this.smallMolecule = smallMolecule;
        this.atomType = atomType;
        this.number = number;
    }
    

   
    //~~~~~~~~~~~~~~~~~~~~~~~~~ METHODS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//


    /*  getSmallMoleculeCompositionId  *//******************************** 
    *
    */ 
    public int getSmallMoleculeCompositionId() 
    {
        return this.smallMoleculeCompositionId;
    }
    
    
    /*  setSmallMoleculeCompositionId  *//******************************** 
    *
    */
    public void setSmallMoleculeCompositionId( int smallMoleculeCompositionId ) 
    {
        this.smallMoleculeCompositionId = smallMoleculeCompositionId;
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
    

    /*  getAtomType  *//******************************** 
    *
    */ 
    public int getAtomType() 
    {
        return this.atomType;
    }
    
    
    /*  setAtomType  *//******************************** 
    *
    */
    public void setAtomType( int atomType ) 
    {
        this.atomType = atomType;
    }
    

    /*  getNumber  *//******************************** 
    *
    */ 
    public int getNumber() 
    {
        return this.number;
    }
    
    
    /*  setNumber  *//******************************** 
    *
    */
    public void setNumber( int number ) 
    {
        this.number = number;
    }
    
       

    







} // end class
