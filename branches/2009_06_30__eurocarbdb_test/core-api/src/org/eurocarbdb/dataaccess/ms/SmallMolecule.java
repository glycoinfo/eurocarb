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

//  eurocarb imports
import org.eurocarbdb.dataaccess.BasicEurocarbObject;
import static org.eurocarbdb.dataaccess.Eurocarb.getEntityManager;

/*  class SmallMolecule  *//**********************************************
*
*
*/ 
public class SmallMolecule extends BasicEurocarbObject implements Serializable 
{


    //~~~~~~~~~~~~~~~~~~~~~~~~~~ FIELDS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//
      
    private int smallMoleculeId;
      
    private String name;
      
    private Set<PeakAnnotatedToSmallMolecule> peakAnnotatedToSmallMolecules = new HashSet<PeakAnnotatedToSmallMolecule>(0);
      
    private Set<SmallMoleculeComposition> smallMoleculeCompositions = new HashSet<SmallMoleculeComposition>(0);


    //~~~~~~~~~~~~~~~~~~~~~~~ CONSTRUCTORS ~~~~~~~~~~~~~~~~~~~~~~~~//

    /** Default constructor. */
    public SmallMolecule() {}

    /** Minimal constructor */
    public SmallMolecule( String name ) 
    {
        this.name = name;
    }
    
    /** full constructor */
    public SmallMolecule( String name, Set<PeakAnnotatedToSmallMolecule> peakAnnotatedToSmallMolecules, Set<SmallMoleculeComposition> smallMoleculeCompositions ) 
    {
        this.name = name;
        this.peakAnnotatedToSmallMolecules = peakAnnotatedToSmallMolecules;
        this.smallMoleculeCompositions = smallMoleculeCompositions;
    }
    

   
    //~~~~~~~~~~~~~~~~~~~~~~~~~ METHODS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//


    /*  getSmallMoleculeId  *//******************************** 
    *
    */ 
    public int getSmallMoleculeId() 
    {
        return this.smallMoleculeId;
    }
    
    
    /*  setSmallMoleculeId  *//******************************** 
    *
    */
    public void setSmallMoleculeId( int smallMoleculeId ) 
    {
        this.smallMoleculeId = smallMoleculeId;
    }
    

    /*  getName  *//******************************** 
    *
    */ 
    public String getName() 
    {
        return this.name;
    }
    
    
    /*  setName  *//******************************** 
    *
    */
    public void setName( String name ) 
    {
        this.name = name;
    }
    

    /*  getPeakAnnotatedToSmallMolecules  *//******************************** 
    *
    */ 
    public Set<PeakAnnotatedToSmallMolecule> getPeakAnnotatedToSmallMolecules() 
    {
        return this.peakAnnotatedToSmallMolecules;
    }
    
    
    /*  setPeakAnnotatedToSmallMolecules  *//******************************** 
    *
    */
    public void setPeakAnnotatedToSmallMolecules( Set<PeakAnnotatedToSmallMolecule> peakAnnotatedToSmallMolecules ) 
    {
        this.peakAnnotatedToSmallMolecules = peakAnnotatedToSmallMolecules;
    }
    

    /*  getSmallMoleculeCompositions  *//******************************** 
    *
    */ 
    public Set<SmallMoleculeComposition> getSmallMoleculeCompositions() 
    {
        return this.smallMoleculeCompositions;
    }
    
    
    /*  setSmallMoleculeCompositions  *//******************************** 
    *
    */
    public void setSmallMoleculeCompositions( Set<SmallMoleculeComposition> smallMoleculeCompositions ) 
    {
        this.smallMoleculeCompositions = smallMoleculeCompositions;
    }
    
       

    







} // end class
