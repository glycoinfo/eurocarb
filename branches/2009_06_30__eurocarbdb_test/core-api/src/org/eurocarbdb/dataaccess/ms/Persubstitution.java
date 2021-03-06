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

//  3rd party imports
import org.apache.log4j.Logger;

//  stdlib imports
import java.util.HashSet;
import java.util.List;
import java.util.Set;

import java.io.Serializable;

//  eurocarb imports
import org.eurocarbdb.dataaccess.BasicEurocarbObject;
import static org.eurocarbdb.dataaccess.Eurocarb.getEntityManager;

/*  class Persubstitution  *//**********************************************
*
*
*/ 
public class Persubstitution extends BasicEurocarbObject implements Serializable 
{
    /** Logging handle. */
    private static final Logger log = Logger.getLogger( Persubstitution.class );

    //~~~~~~~~~~~~~~~~~~~~~~~~~~ FIELDS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//
      
    private int persubstitutionId;

    private String name;
      
    private String abbreviation;      
      
    private Set<Annotation> annotations = new HashSet<Annotation>(0);


    //~~~~~~~~~~~~~~~~~~~~~~~ CONSTRUCTORS ~~~~~~~~~~~~~~~~~~~~~~~~//

    /** Default constructor. */
    public Persubstitution() {}

    /** Minimal constructor */
    public Persubstitution( String abbreviation, String name ) 
    {
    this.abbreviation = abbreviation;
        this.name = name;
    }
    
    /** full constructor */
    public Persubstitution( String abbreviation, String name, Set<Annotation> annotations ) 
    {
    this.abbreviation = abbreviation;
        this.name = name;
        this.annotations = annotations;
    }
    

    //~~~~~~~~~~~~~~~~~~~~~~ STATIC METHODS ~~~~~~~~~~~~~~~~~~~~~~~//
   
    /** Returns the {@link List} of all {@link Persubstitution}s. */
    @SuppressWarnings("unchecked")
    public static List<Persubstitution> getAllPersubstitutions()
    {
        return (List<Persubstitution>) getEntityManager()
            .getQuery("org.eurocarbdb.dataaccess.ms.Persubstitution.GET_ALL")
            .list();
    }
    
    //~~~~~~~~~~~~~~~~~~~~~~~~~ METHODS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//


    /*  getPersubstitutionId  *//******************************** 
    *
    */ 
    public int getPersubstitutionId() 
    {
        return this.persubstitutionId;
    }
    
    
    /*  setPersubstitutionId  *//******************************** 
    *
    */
    void setPersubstitutionId( int persubstitutionId ) 
    {
        this.persubstitutionId = persubstitutionId;
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
    

    /*  getAbbreviation  *//******************************** 
    *
    */ 
    public String getAbbreviation() 
    {
        return this.abbreviation;
    }
    
    
    /*  setAbbreviation  *//******************************** 
    *
    */
    public void setAbbreviation( String abbreviation ) 
    {
        this.abbreviation = abbreviation;
    }
    

    /*  getAnnotations  *//******************************** 
    *
    */ 
    public Set<Annotation> getAnnotations() 
    {
        return this.annotations;
    }
    
    
    /*  setAnnotations  *//******************************** 
    *
    */
    public void setAnnotations( Set<Annotation> annotations ) 
    {
        this.annotations = annotations;
    }    
 
    public static Persubstitution lookup( String abbreviation )
    {
        log.debug("looking up persubstitution by abbreviation");
        Object i = getEntityManager()
                  .getQuery( "org.eurocarbdb.dataaccess.ms.Persubstitution.BY_ABBREVIATION" )
                  .setParameter("abbreviation", abbreviation )
                  .uniqueResult();

        assert i instanceof Persubstitution;
        
        return (Persubstitution) i;
    }

} // end class
