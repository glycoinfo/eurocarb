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

/*  class SoftwareType  *//**********************************************
*
*
*/ 
public class SoftwareType extends BasicEurocarbObject implements Serializable 
{


    //~~~~~~~~~~~~~~~~~~~~~~~~~~ FIELDS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//
      
    private int softwareTypeId;
      
    private String softwareType;
      
    private Set<DataProcessing> dataProcessings = new HashSet<DataProcessing>(0);


    //~~~~~~~~~~~~~~~~~~~~~~~ CONSTRUCTORS ~~~~~~~~~~~~~~~~~~~~~~~~//

    /** Default constructor. */
    public SoftwareType() {}

    /** Minimal constructor */
    public SoftwareType( String softwareType ) 
    {
        this.softwareType = softwareType;
    }
    
    /** full constructor */
    public SoftwareType( String softwareType, Set<DataProcessing> dataProcessings ) 
    {
        this.softwareType = softwareType;
        this.dataProcessings = dataProcessings;
    }
    

   
    //~~~~~~~~~~~~~~~~~~~~~~~~~ METHODS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//


    /*  getSoftwareTypeId  *//******************************** 
    *
    */ 
    public int getSoftwareTypeId() 
    {
        return this.softwareTypeId;
    }
    
    
    /*  setSoftwareTypeId  *//******************************** 
    *
    */
    public void setSoftwareTypeId( int softwareTypeId ) 
    {
        this.softwareTypeId = softwareTypeId;
    }
    

    /*  getSoftwareType  *//******************************** 
    *
    */ 
    public String getSoftwareType() 
    {
        return this.softwareType;
    }
    
    
    /*  setSoftwareType  *//******************************** 
    *
    */
    public void setSoftwareType( String softwareType ) 
    {
        this.softwareType = softwareType;
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
