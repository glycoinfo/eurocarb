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

/*  class Software  *//**********************************************
*
*
*/ 
public class Software extends BasicEurocarbObject implements Serializable 
{


    //~~~~~~~~~~~~~~~~~~~~~~~~~~ FIELDS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//
      
    private int softwareId;
      
    private String name;
      
    private String softwareVersion;
      
    private Set<DataProcessing> dataProcessings = new HashSet<DataProcessing>(0);


    //~~~~~~~~~~~~~~~~~~~~~~~ CONSTRUCTORS ~~~~~~~~~~~~~~~~~~~~~~~~//

    /** Default constructor. */
    public Software() {}

    /** Minimal constructor */
    public Software( String name, String softwareVersion ) 
    {
        this.name = name;
        this.softwareVersion = softwareVersion;
    }
    
    /** full constructor */
    public Software( String name, String softwareVersion, Set<DataProcessing> dataProcessings ) 
    {
        this.name = name;
        this.softwareVersion = softwareVersion;
        this.dataProcessings = dataProcessings;
    }
    

   
    //~~~~~~~~~~~~~~~~~~~~~~~~~ METHODS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//


    /*  getSoftwareId  *//******************************** 
    *
    */ 
    public int getSoftwareId() 
    {
        return this.softwareId;
    }
    
    
    /*  setSoftwareId  *//******************************** 
    *
    */
    public void setSoftwareId( int softwareId ) 
    {
        this.softwareId = softwareId;
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
    

    /*  getSoftwareVersion  *//******************************** 
    *
    */ 
    public String getSoftwareVersion() 
    {
        return this.softwareVersion;
    }
    
    
    /*  setSoftwareVersion  *//******************************** 
    *
    */
    public void setSoftwareVersion( String softwareVersion ) 
    {
        this.softwareVersion = softwareVersion;
    }
    

    /*  getDataProcessings  *//******************************** 
    *
    */ 
    public Set<DataProcessing> getDataProcessings() 
    {
        return this.dataProcessings;
    }
    
    
    /*  setDataProcessings  *//******************************** 
    *
    */
    public void setDataProcessings( Set<DataProcessing> dataProcessings ) 
    {
        this.dataProcessings = dataProcessings;
    }
    
       

    







} // end class
