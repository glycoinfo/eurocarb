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
// Generated 3/08/2006 16:48:25 by Hibernate Tools 3.1.0.beta4



/**
* TaxonomySynonym generated by hbm2java
*/

public class TaxonomySynonym extends org.eurocarbdb.dataaccess.BasicEurocarbObject implements java.io.Serializable {


    // Fields    

     private int taxonomySynonymId;
     private Taxonomy taxonomy;
     private String synonym;


    // Constructors

    /** default constructor */
    public TaxonomySynonym() {
    }

    
    /** full constructor */
    public TaxonomySynonym(Taxonomy taxonomy, String synonym) {
        this.taxonomy = taxonomy;
        this.synonym = synonym;
    }
    

   
    // Property accessors

    public int getTaxonomySynonymId() {
        return this.taxonomySynonymId;
    }
    
    public void setTaxonomySynonymId(int taxonomySynonymId) {
        this.taxonomySynonymId = taxonomySynonymId;
    }

    public Taxonomy getTaxonomy() {
        return this.taxonomy;
    }
    
    public void setTaxonomy(Taxonomy taxonomy) {
        this.taxonomy = taxonomy;
    }

    public String getSynonym() {
        return this.synonym;
    }
    
    public void setSynonym(String synonym) {
        this.synonym = synonym;
    }
   








}