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
*   Last commit: $Rev: 1342 $ by $Author: glycoslave $ on $Date:: 2009-06-29 #$  
*/

package org.eurocarbdb.action.core;

//  stdlib imports
import java.util.*;
import java.math.BigDecimal;

//  3rd party imports 
import org.apache.log4j.Logger;

import org.hibernate.Criteria;
import org.hibernate.criterion.DetachedCriteria;
import org.hibernate.criterion.CriteriaSpecification;
import org.hibernate.HibernateException;

import org.hibernate.criterion.Order;
import org.hibernate.criterion.MatchMode;
import org.hibernate.criterion.Projections;
import org.hibernate.criterion.Restrictions;
import org.hibernate.criterion.ProjectionList;
import org.hibernate.criterion.Subqueries;

//  eurocarb imports
import org.eurocarbdb.dataaccess.core.*;
import org.eurocarbdb.action.EurocarbAction;
import org.eurocarbdb.action.BrowseAction;
import org.eurocarbdb.dataaccess.EntityManager;
import org.eurocarbdb.dataaccess.HibernateEntityManager;

import org.eurocarbdb.dataaccess.SavedGlycanSequenceSearch;

//  static imports
import static org.eurocarbdb.util.StringUtils.join;
import static org.eurocarbdb.dataaccess.Eurocarb.getEntityManager;


/*  class SearchGlycanSequence  *//****************************************
*
*   Finds a Set of {@link GlycanSequence} objects satisfying a given 
*   set of query predicates. Matched sequences are wrapped together 
*   with their query predicates in a {@link SavedGlycanSequenceSearch} object.
*   
*   @see SavedGlycanSequenceSearch
*   @author mjh
*   @author hirenj
*   @version $Rev: 1342 $
*/
public class SearchGlycanSequence extends BrowseAction<GlycanSequence>
{

    //~~~~~~~~~~~~~~~~~~~~~~ STATIC FIELDS ~~~~~~~~~~~~~~~~~~~~~~~~//

    /** Logging handle. */
    static final Logger log = Logger.getLogger( SearchGlycanSequence.class );

    
    //~~~~~~~~~~~~~~~~~~~~~~~~~~ FIELDS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//

    private String taxonomyName = null;    
    private String tissueName = null;
    private String diseaseName = null;
    
    private double  lowMass = -1, 
                    highMass = -1, 
                    exactMass = -1, 
                    exactMassTolerance = -1;
    
    private boolean useAvgMass = false;
    private boolean useAvgMassGiven = false;

    private boolean validated = false;

    private boolean isNewQuery = false;

    private List<SavedGlycanSequenceSearch> queryHistory = new java.util.ArrayList<SavedGlycanSequenceSearch>();
    
    private List<SavedGlycanSequenceSearch> additionalQueries = new java.util.ArrayList<SavedGlycanSequenceSearch>();

    private SavedGlycanSequenceSearch currentSearch;

    private int[] historicalQueriesToRun = {};
    
    private int[] historicalQueriesToRefine = {};

    //~~~~~~~~~~~~~~~~~~~~~~~~~ METHODS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//
   
    //~~~  criteria creation & access methods  ~~~//

    public Criteria createCriteria(String index)
    {      
      DetachedCriteria crit = createSerializableCriteria(index);
      Criteria criteria = crit.getExecutableCriteria(((HibernateEntityManager) getEntityManager()).getHibernateSession()).setCacheable(true).setResultTransformer(CriteriaSpecification.DISTINCT_ROOT_ENTITY);
      return criteria;
    }

    private DetachedCriteria createSerializableCriteria(String index)
    {        
        // create base criteria    
        log.debug("creating GlycanSequence criteria");
        
      DetachedCriteria criteria;

      criteria = DetachedCriteria.forClass( GlycanSequence.class );        
            
        // create biological contexts criteria
        DetachedCriteria bc_criteria = null;
        DetachedCriteria tax_criteria = null;
        DetachedCriteria tissue_criteria = null;
        DetachedCriteria disease_criteria = null;
        if( taxonomyName!=null || tissueName!=null || diseaseName!=null ) {
          log.debug("creating Biological context criteria");
            bc_criteria = criteria.createCriteria("glycanContexts")
                          .createCriteria("biologicalContext", "bc");    

            // add taxonomy criteria        
            if( taxonomyName!=null ) {
                log.debug("adding taxonomy query predicates for input string '" + taxonomyName + "'");
            tax_criteria = bc_criteria.createCriteria("taxonomy", "taxa")
                                .createCriteria("taxonomySupertypes", "supertax")
                                .add( Restrictions.ilike( "taxon", taxonomyName, MatchMode.EXACT ) );            
            }
        
            // add tissue criteria
            if( tissueName!=null ) {
                log.debug("adding tissue query predicates for input string '" + tissueName + "'");
        
            tissue_criteria = bc_criteria.createCriteria("tissueTaxonomy", "ttax")
                                    .add( Restrictions.ilike("tissueTaxon", tissueName, MatchMode.EXACT ) );       
            }

            // add disease criteria
            if( diseaseName!=null ) {
                log.debug("adding disease query criteria for input string '" + diseaseName + "'");
              
                  disease_criteria = bc_criteria.createCriteria("diseaseContexts")
                                    .createCriteria("disease", "dis")
                                    .add( Restrictions.ilike("diseaseName", diseaseName, MatchMode.EXACT ) );
            }
        }

        // add mass criteria
      boolean mass_query_is_given = false;
      boolean params_are_ok = false;
  
      if ( exactMass > 0 && exactMassTolerance > 0 )
      {
          mass_query_is_given = true;
          lowMass = exactMass - exactMassTolerance;
          highMass = exactMass + exactMassTolerance;
          log.debug( "adding predicates for exactMass=" + exactMass + " Da +/- " + exactMassTolerance + " Da (ie: " + lowMass + "-" + highMass + " Da)" );
          params_are_ok = true;
      }
      else if ( lowMass > 0 && highMass > 0 )
      {
          mass_query_is_given = true;
          exactMass = -1;
          exactMassTolerance = -1;
          log.debug( "adding predicates for mass range=(" + lowMass + ".." + highMass + " Da)" );
          params_are_ok = true;
      }
  
      if ( mass_query_is_given )
      {
          if (  params_are_ok )
          {
              String property = useAvgMass ? "massAverage" : "massMonoisotopic";                
              criteria.add( Restrictions.between(property, new BigDecimal(lowMass), new BigDecimal(highMass) ) );
          }
          else
          {
              String msg = "Insufficient mass parameters given, either "
                  + "provide an exactMass + exactMassTolerence + useAvgMass preference, "
                  + "or provide a lowMass + highMass + useAvgMass preference";

              addActionError( msg );
              log.info( msg );
          }
      }


      for (SavedGlycanSequenceSearch old_query : this.additionalQueries) {

        DetachedCriteria old_criteria = old_query.queryCriteria;
        
        criteria.add(Subqueries.propertyIn("glycanSequenceId",old_criteria));

        old_criteria.setProjection(
            Projections.distinct(
                Projections.property("glycanSequenceId")));

        this.currentSearch = old_query;

      }
            
        // add index
        if( index!=null ) {
            if ( index.equals("mass") )
            criteria.addOrder( Order.asc("massMonoisotopic") );
            else if ( index.equals("residue_count") )
            criteria.addOrder( Order.asc("residueCount") );
            else {
            if( tax_criteria!=null )
                tax_criteria.addOrder( Order.asc("taxon") );
            if( tissue_criteria!=null )
                tissue_criteria.addOrder( Order.asc("tissueTaxon") );                
            if( disease_criteria!=null )
                disease_criteria.addOrder( Order.asc("diseaseName") );                
            }
        }

        return criteria;
    }       
    //~~~~~~~~~~~~  Query history methods ~~~~~~~~~~~~~~~~~~~~~~~~~~~
    
    public List<SavedGlycanSequenceSearch> getQueryHistory() {
      return queryHistory;
    }
    
    public void setQueryHistory(List<SavedGlycanSequenceSearch> history) {
      this.queryHistory = history;
    }
    
    public int[] getHistoricalQueriesToRefine() {
      return this.historicalQueriesToRefine;
    }

    public void setHistoricalQueriesToRefine(int[] ids) {
      this.historicalQueriesToRefine = ids;      

      for(int index : ids) {
        if (this.getQueryHistory().size() > index) {
          this.additionalQueries.add(this.getQueryHistory().get(index));
        }
      }
      
    }
    
    public int[] getHistoricalQueriesToRun() {
      return this.historicalQueriesToRun;
    }
    
    public void setHistoricalQueriesToRun(int[] ids) {
      this.historicalQueriesToRun = ids;
      
      for(int index : ids) {
        if (this.getQueryHistory().size() > index) {
          this.additionalQueries.add(this.getQueryHistory().get(index));
        }
      }

    }
    
    public List<SavedGlycanSequenceSearch> getAdditionalQueries() {
      return this.additionalQueries;
    }
    
    public SavedGlycanSequenceSearch getCurrentSearch() {
      return this.currentSearch;
    }
    
    //~~~~~~~~~~~~  query predicate creation methods  ~~~~~~~~~~~~~~~
      
    
    //   taxonomy query predicates  //
    
    public void setTaxonomyName( String namestring )
    {
      if( namestring!=null && namestring.trim().length()>0 )
          taxonomyName = namestring.trim();
        else
          taxonomyName = null;
    }

    public String getTaxonomyName() 
    {
        return taxonomyName;
    }  
      
    public void setTissueName( String namestring )
    {
        if( namestring!=null && namestring.trim().length()>0 )
          tissueName = namestring.trim();
        else
          tissueName = null;
    }
           
    public String getTissueName() 
    {
        return tissueName;
    }    

    public void setDiseaseName( String namestring )
    {
        if( namestring!=null && namestring.trim().length()>0 )
            diseaseName = namestring.trim();
        else
            diseaseName = null;
    }        
    
    public String getDiseaseName() 
    {
        return diseaseName;
    }  

    
    //  mass query predicates  //
    
    public void setAvgMass( boolean b )
    {
        useAvgMass = b;   
        useAvgMassGiven = true;
    }

    public boolean getAvgMass() 
    {
        return useAvgMass;
    }
    
    
    public void setMonoisoMass( boolean b )
    {
        useAvgMass = ! b;   
        useAvgMassGiven = true;
    }
    
    
    public void setDiscreteMass( double mass ) 
    {
        exactMass = mass;
    }
    
    
    public double getDiscreteMass() 
    {
        return exactMass;
    }
    
    
    public void setDiscreteMassTolerance( double tolerance ) 
    {
        exactMassTolerance = Math.abs( tolerance );
    }
    
    
    public double getDiscreteMassTolerance() 
    {
        return exactMassTolerance;
    }
    
    
    public void setLowMass( double mass ) 
    {
        lowMass = mass;
    }
    
    
    public double getLowMass() 
    {
        return lowMass;
    }
    
    
    public void setHighMass( double mass ) 
    {
        highMass = mass;
    }

    
    public double getHighMass() 
    {
        return highMass;
    }
    
    public String[] getQueryDescription()
    {
      ArrayList<String> descriptions = new ArrayList<String>();
      if (getTaxonomyName() != null)
      {
        descriptions.add( "taxonomy equals to " + getTaxonomyName() );
      }
      if (getTissueName() != null)
      {
        descriptions.add( "tissue equals to " + getTissueName() );
      }
      if (getDiseaseName() != null)
      {
        descriptions.add( "diseases equals to " + getDiseaseName() );
      }
      if ( exactMass > 0 || lowMass > 0 ) {
        String massType = useAvgMass ? "average" : "monoisotopic";
        if ( exactMass > 0 ) {
          descriptions.add(massType + " mass equal to " + exactMass + " +- " + exactMassTolerance + " Da");
        } else {
          descriptions.add(massType + " between " + lowMass +  " and " + highMass +  " Da");
        }
      }
      
      for ( SavedGlycanSequenceSearch query : this.additionalQueries ) {
        if (query.description != null) {
          descriptions.add( query.description );
        }
      }
      return descriptions.toArray(new String[0]);
    }
    
    
    //~~~~~~~~~~~~~~~~~ composition query options ~~~~~~~~~~~~~~~~~~~
    
    public void setExactComp( String s ) { /* TODO */ }
    public void setMinComp( String s )   { /* TODO */ }
    public void setMaxComp( String s )   { /* TODO */ }
    
    //~~~~~~~~~~~~~~~~~~~~~~~~ indexing ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    protected String indexType = "bc";
/*    
    
    public void setIndex( String index_type )
    {
        indexType = index_type;
    }

    
    public String getIndex() 
    {
        return indexType;
    }
        
*/

    public final Class<GlycanSequence> getIndexableType() 
    {
        return GlycanSequence.class;
    }
    
    
    public boolean getIsNewQuery() {
      return this.isNewQuery;
    }
    
    public void setIsNewQuery(boolean isnew) {
      this.isNewQuery = isnew;
    }
    
    //~~~~~~~~~~~~~~~~~~~~~~~ validation ~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    
    public void validate()
    {
        //  return unless we're processing input params
        if ( getParameters() == null || getParameters().size() == 0 )
            return;
        
        //  only perform validation once, per request
        if ( validated ) return;               
        
        validated = true;
    }


    public int countQueryResults()
    {
        try 
        {
        Integer ret = (Integer)createCriteria(null).setProjection(Projections.countDistinct("glycanSequenceId")).uniqueResult();
        return (ret==null) ?0 :ret.intValue();
        }
        catch ( HibernateException e ) 
        {
            log.warn( "Caught " + e.getClass().getName() + " performing query:", e );                    
            return 0;            
        }
    }
    
    
    public List<GlycanSequence> getQueryResults()
    {
        Criteria query = createCriteria(indexType);

        log.info( "Performing query: " + query.toString() );
    setMessage(query.toString());
            
        try 
        {
            List<GlycanSequence> ret = (List<GlycanSequence>) query.list();  
            log.info( "query executed ok, results count=" + ret.size() );
            return ret;
        }
        catch ( HibernateException e ) 
        {
            log.warn( "Caught " 
                  + e.getClass().getName() 
                  + " performing query:", e 
                  );
                    
            return Collections.emptyList();            
        }
    }

    public List<GlycanSequence> getQueryResults(int first, int max)
    {
        Criteria query = createCriteria(indexType);

        log.info( "Performing query: " + query.toString() );
    setMessage(query.toString());
            
        try 
        {
            // two steps approach
            // http://floledermann.blogspot.com/2007/10/solving-hibernate-criterias-distinct.html
            List ids = createCriteria(null)
                        .setProjection(
                            Projections.distinct(
                                Projections.property("glycanSequenceId")))        
                        .setFirstResult(first)
                        .setMaxResults(max)
                        .list();  

            if( ids.size()==0 ) 
            {
                log.debug( "query executed ok, results count=0" );
                return Collections.emptyList(); //new java.util.ArrayList<GlycanSequence>();
            }
        
            List<GlycanSequence> ret = (List<GlycanSequence>) query
                                        .add( Restrictions.in("glycanSequenceId",ids) )
                                        .list();
            log.debug( "query executed ok, results count=" + ret.size() );
            return ret;     
        }
        catch ( HibernateException e ) 
        {
            log.warn( "Caught " 
                  + e.getClass().getName() 
                  + " performing query:", e 
                  );
                    
            return Collections.emptyList();            
        }
    }
   
   
    /*  execute  *///************************************************
    @SuppressWarnings("unchecked")
    public String execute()
    {
        if ( getParameters() == null || getParameters().size() == 0 ) 
        {
            log.debug("no input params given, returning 'input' view");
            return "input";
        }
    
          if ( getParameters().get("historicalQueriesToRefine") != null) {
            log.debug("refining an existing query, returning 'input' view");
            return "input";
          }
    
        validate();
        int count = 0;
        setTotalResults(count = countQueryResults());
        setResults( getQueryResults(getOffset(),getMaxResults()) );
        if ( getParameters().size() == 1 || isNewQuery || ( count > 0 && getHistoricalQueriesToRun().length > 1) ) {
          SavedGlycanSequenceSearch savedSearch = new SavedGlycanSequenceSearch();
          savedSearch.queryCriteria = createSerializableCriteria(null);
          savedSearch.description = join(" and ", getQueryDescription());
          savedSearch.resultCount = count;
          List<SavedGlycanSequenceSearch> history = this.getQueryHistory();
          history.add(savedSearch);
          this.setQueryHistory(history);              
          this.currentSearch = savedSearch;
        }
        return hasActionErrors() ? "input" : "success";
    }
    
    
    
    
    
} // end class
