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
package org.eurocarbdb.dataaccess.core;
// Generated 3/08/2006 16:48:26 by Hibernate Tools 3.1.0.beta4



/**
* TissueTaxonomySynonym generated by hbm2java
*/

public class TissueTaxonomySynonym extends org.eurocarbdb.dataaccess.BasicEurocarbObject implements java.io.Serializable {


    // Fields    

     private int tissueTaxonomySynonymId;
     private TissueTaxonomy tissueTaxonomy;
     private String synonym;


    // Constructors

    /** default constructor */
    public TissueTaxonomySynonym() {
    }

    
    /** full constructor */
    public TissueTaxonomySynonym(TissueTaxonomy tissueTaxonomy, String synonym) {
        this.tissueTaxonomy = tissueTaxonomy;
        this.synonym = synonym;
    }
    

   
    // Property accessors

    public int getTissueTaxonomySynonymId() {
        return this.tissueTaxonomySynonymId;
    }
    
    public void setTissueTaxonomySynonymId(int tissueTaxonomySynonymId) {
        this.tissueTaxonomySynonymId = tissueTaxonomySynonymId;
    }

    public TissueTaxonomy getTissueTaxonomy() {
        return this.tissueTaxonomy;
    }
    
    public void setTissueTaxonomy(TissueTaxonomy tissueTaxonomy) {
        this.tissueTaxonomy = tissueTaxonomy;
    }

    public String getSynonym() {
        return this.synonym;
    }
    
    public void setSynonym(String synonym) {
        this.synonym = synonym;
    }
   








}
