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
*   Last commit: $Rev: 1169 $ by $Author: glycoslave $ on $Date:: 2009-06-05 #$  
*/

package org.eurocarbdb.action.core;

import java.util.List;
import java.util.SortedSet;
import java.util.TreeSet;

import org.eurocarbdb.action.EurocarbAction;
import org.eurocarbdb.dataaccess.core.*;

import org.hibernate.Criteria;
import org.hibernate.criterion.Order;
import org.hibernate.criterion.MatchMode;
import org.hibernate.criterion.Projections;
import org.hibernate.criterion.Restrictions;
import org.hibernate.criterion.ProjectionList;

import static org.eurocarbdb.dataaccess.Eurocarb.getEntityManager;
import static org.eurocarbdb.util.StringUtils.join;

/*  class Autocompleter
*
*   Class to produce lists of strings using like queries for various data sources
*
*/
public class Autocompleter extends EurocarbAction
{
    private String queryType;
    private String queryString;
    protected List<String> results = new java.util.ArrayList<String>();
    
    
    public String getQueryType() 
    {
        return this.queryType;
    }
    
    public void setQueryType(String queryType) 
    {
        this.queryType = queryType;
    }
    
    public String getQueryString() 
    {
        return this.queryString;
    }
    
    public void setQueryString(String queryString) 
    {
        this.queryString = queryString;
    }
    
    public List<String> getResults() 
    {
        return this.results;
    }
    
    public String execute() 
    {
        if (queryType == null || queryString == null) 
        {
            return SUCCESS;
        }
        
        if (queryType.equals("taxonomy_name")) 
        {
            findTaxonomiesMatchingString(queryString);
        }
        else if (queryType.equals("tissue_name")) 
        {
            findTissuesMatchingString(queryString);
        }
        else if (queryType.equals("disease_name")) 
        {
            findDiseasesMatchingString(queryString);
        }
        else if (queryType.equals("perturbation_name")) 
        {
            findPerturbationsMatchingString(queryString);
        }
        
        return SUCCESS;
    }
    
    protected void findTissuesMatchingString(String query) 
    {
        log.debug("Querying tissue for " + query);
        for ( TissueTaxonomy tissue : TissueTaxonomy.lookupNameOrSynonym( query )) 
        {
            results.add(tissue.getName()+"\t\t");
        }
    }
    
    protected void findDiseasesMatchingString(String query) 
    {
        log.debug("Querying disease for " + query);
        for ( Disease disease : Disease.lookupNameOrSynonym( query )) 
        {
            results.add(disease.getDiseaseName()+"\t\t");
        }
    }
    
    protected void findPerturbationsMatchingString(String query) 
    {
        log.debug("Querying perturbations for " + query);
        for ( Perturbation perturbation : Perturbation.lookupNameOrSynonym( query )) 
        {
            results.add(perturbation.getPerturbationName()+"\t\t");
        }
    }
    
    
    /*
    * Run the taxonomy query, searching within taxonomies and 
    * their synonyms for the query string
    */
    private List<Taxonomy> runTaxonomyQuery(String query) 
    {
    
        Criteria criteria = getEntityManager().createQuery(Taxonomy.class);
        criteria.createAlias("taxonomySynonyms","syn",Criteria.LEFT_JOIN);
        criteria.createAlias("relations","rel",Criteria.INNER_JOIN);
        
        criteria.add(
            Restrictions.or(
                Restrictions.like( "taxon", query, MatchMode.ANYWHERE ),
                Restrictions.like( "syn.synonym", query, MatchMode.ANYWHERE )
            )
        );
        criteria.addOrder(Order.asc("rel.relativeImportance"));
        criteria.setResultTransformer(Criteria.DISTINCT_ROOT_ENTITY);
        criteria.setMaxResults(10);
        
        return criteria.list();
    }  
    
    protected void findTaxonomiesMatchingString(String query) 
    {
        log.debug("Querying taxonomy for " + query);
        
        for (Taxonomy tax : runTaxonomyQuery(query)) 
        {
            String resultString = tax.getName()+"\t";
            List<String> synonyms = tax.getSynonyms();
            
            resultString += synonyms.size() > 0 
                ?   "(" 
                    + join(",",synonyms) 
                    + ")" 
                :   ""
                ;
            results.add(resultString+"\t\t");
        }
    }

}