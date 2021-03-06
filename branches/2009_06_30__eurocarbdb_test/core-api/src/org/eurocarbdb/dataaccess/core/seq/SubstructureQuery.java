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

package org.eurocarbdb.dataaccess.core.seq;

import org.apache.log4j.Logger;

import java.util.Map;
import java.util.Set;
import java.util.List;
import java.util.HashMap;
import java.util.EnumSet;
import java.util.ArrayList;
import java.util.Collections;

import org.hibernate.Query;

import org.eurocarbdb.util.graph.Graph;
import org.eurocarbdb.util.graph.Edge;
import org.eurocarbdb.util.graph.Vertex;
import org.eurocarbdb.util.graph.DepthFirstGraphVisitor;

import org.eurocarbdb.sugar.Sugar;
import org.eurocarbdb.sugar.Anomer;
import org.eurocarbdb.sugar.Linkage;
import org.eurocarbdb.sugar.Residue;
import org.eurocarbdb.sugar.Monosaccharide;
import org.eurocarbdb.sugar.GlycosidicLinkage;

import org.eurocarbdb.dataaccess.Eurocarb;
import org.eurocarbdb.dataaccess.EntityManager;
import org.eurocarbdb.dataaccess.HibernateEntityManager;

import org.eurocarbdb.dataaccess.core.GlycanSequence;
import org.eurocarbdb.dataaccess.core.seq.GlycanResidue;


/**
*   Implements carbohydrate sub-structure searching; specifically, 
*   performs the translation of a given {@link Sugar} (or 
*   {@link Graph} of {@link Linkage}s and {@link Residue}s) to
*   a hibernate query language (HQL) string, and returns the
*   substructure search results as a {@link List} of 
*   {@link SubstructureQueryResult}s.
*
*<h2>Usage</h2>
*<pre>
*       //  construct a search Sugar structure (or equivalent search Graph).
*       Sugar search_structure = ...;
*
*       //  create a substruct query from the search structure 
*       SubstructureQuery query = new SubstructureQuery( search_structure );
*
*       //  get the HQL query string for the structure (not needed for search
*       //  -- only if you want it for some reason).
*       String query_string = query.getQueryString();
*
*       //  perform query
*       query.execute();
*
*       //  play with results...
*       List&lt;SubstructureQueryResult&gt; results = query.getResults();
*</pre>
*
*   @see SubstructureQueryGenerator
*   @see SubstructureQueryResult
*   @author mjh
*/
public class SubstructureQuery
{
    /** logging handle shared between all SubstructureQuery*.java classes. */
    static final Logger log = Logger.getLogger( SubstructureQuery.class );
    
    /** If true, shows the full string representation of structures that 
    *   match to the {@link #log debug logs} for this class. it's really
    *   slow, so best to set false unless bug hunting. */
    static final boolean VERBOSE_LOGGING = false;
    
    /** This is the maximum number of residues allowed in a search 
    *   structure for a substructure search. */
    static final int MAX_SUBSTRUCTURE_RESIDUES = 25;
    
    /** The search (sub-)structure as graph */
    private Graph<Linkage,Residue> graph;
    
    /** Set of essentially boolean options to modify characteristics of 
    *   this {@link SubstructureQuery}. Initially null; presence of an option
    *   in the {@link Set} means that option is TRUE. */
    EnumSet<Option> options = EnumSet.noneOf( Option.class );
    
    /** Query search string as SQL/HQL; null if query not yet performed. */
    private String hql = null;
    
    /** Query search results; null if query not yet performed. */
    private List<SubstructureQueryResult> results = null;
    
    //~~~~~~~~~~~~~~~~~~~~~~ CONSTRUCTORS ~~~~~~~~~~~~~~~~~~~~~~~~~//
    
    /** 
    *   Creates a new SubstructureQuery built from the passed 
    *   {@link Sugar} {@link Graph}. 
    */
    public SubstructureQuery( Graph<Linkage,Residue> g )
    {
        this.graph = g;
    }


    /** 
    *   Creates a new SubstructureQuery built from the {@link Graph} of 
    *   the passed {@link Sugar}. 
    */
    public SubstructureQuery( Sugar s )
    {
        assert s != null;
        this.graph = s.getGraph();
    }
    
    //~~~~~~~~~~~~~~~~~~~~~~~~~ METHODS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//
    
    /** 
    *   Returns the {@link Sugar} {@link Graph} used to construct
    *   this query. 
    */
    public Graph<Linkage,Residue> getGraph()
    {
        return graph;   
    }
    
    
    /**
    *   Returns an SQL (or HQL) query string for the search substructure
    *   {@link Sugar}/{@link Graph} given at construction.
    */
    public String getQueryString()
    {
        if ( log.isDebugEnabled() )
        {
            log.debug(
                "generating substructure query for graph:\n"
                + graph.toString()
            );
        }
        
        SubstructureQueryGenerator visitor 
            = new SubstructureQueryGenerator( this );
        
        visitor.visit();
            
        hql = visitor.getQueryString(); 
        
        // log.debug("Query string:\n " + query_string );
        
        return hql;
    }
    

    /**
    *   Returns a {@link List} of results for the given substructure
    *   search, or an empty list if there were no results.
    *   @throws RuntimeException if query has not yet been {@link #execute()}d.
    */
    public List<SubstructureQueryResult> getResults()
    {
        if ( results == null )
            throw new RuntimeException(
                "Query not yet performed; you need to call execute() first");
            
        return results;
    }
    
    
    /** Executes query; results available from {@link #getResults()}. */
    public void execute()
    {
        //  generate HQL if not already done
        final String hql = getQueryString();
        
        EntityManager em = Eurocarb.getEntityManager();        
        if ( ! (em instanceof HibernateEntityManager) )
            throw new UnsupportedOperationException(
                "Need a HibernateEntityManager to perform substructure query");
            
        //  this is for Hibernate specifically, so cast
        HibernateEntityManager hem = (HibernateEntityManager) em;
        
        //  mjh: turn postgres genetic query optimiser to 1 more than
        //  max substruct residues. this is *critical* for good performance
        //  of larger (> 6-10 residue) substruct queries. This psql option can 
        //  also be set via psql's own configuration file but we force it here
        //  to make sure.
        //
        if ( MAX_SUBSTRUCTURE_RESIDUES > 10 )
        {
            int i = MAX_SUBSTRUCTURE_RESIDUES + 1;
            log.debug("setting genetic query optimiser threshold to " + i + " (force geqo OFF)" );
            String force_geqo_off = "set geqo_threshold = " + i;
            hem.getHibernateSession()
               .createSQLQuery( force_geqo_off )
               .executeUpdate();
        }
        
        //  create & perform main substructure query
        Query q = hem.getHibernateSession().createQuery( hql );
        
        List<GlycanSequence> sequences = (List<GlycanSequence>) q.list();
        
        //  if there are results, add them to a results list,
        //  else return an empty list.
        if ( sequences != null )
        {
            int count_results = sequences.size();
            
            log.info( "substructure search returned " 
                    + count_results 
                    + " result(s)" );
            
            this.results = new ArrayList<SubstructureQueryResult>( count_results );
            
            for ( int i = 0; i < count_results; i++ )
            {
                GlycanSequence gs = sequences.get(i);
                
                this.results.add( 
                    new SubstructureQueryResult( gs ) );                
            }
        }
        else
        {
            log.info( "substructure search returned no results" );
            this.results = Collections.emptyList();
        }
    }
    
    
    /*  query options  */
    
    /** Returns true if the given search {@link Option} is set. */
    public boolean getOption( Option opt )
    {
        return options.contains( opt );   
    }
    

    /** 
    *   Returns true if the given search {@link Option} name is set. 
    *   @throws IllegalArgumentException if option_name is not 
    *   a valid {@link Option} name.
    */
    public boolean getOption( String option_name )
    {
        return options.contains( 
            Enum.valueOf( Option.class, option_name ) );   
    }

    
    /** Sets various search options to modify the characteristics of the search. */
    public SubstructureQuery setOption( Option opt )
    {
        options.add( opt );
        
        return this;
    }
    

    /*  enum Option  *//********************************************* 
    *
    *   Specifies various options and meta-data to modify the performance
    *   and results of a {@link SubstructureQuery}. These are currently
    *   all boolean options, with default value == false.
    *
    *   @author mjh
    */    
    public enum Option
    {
        /** 
        *   Specifies that the reducing terminus (root) {@link Residue} of the 
        *   given search sub-structure must also be the reducing terminus (root)
        *   terminus of all matching structures. 
        */
        Must_Include_Reducing_Terminus 
        {
            /** add a predicate that the root residue of the search substruct 
            *   must also be the root of all matching structures. */
            void modifyQuery( SubstructureQueryGenerator q, Set<Option> options )   
            {
                Residue root = q.getSearchGraph().getRootValue();
                String alias = q.getTableAliasFor( root ); 
                
                q.addPredicate( alias + ".parent is null" );
            }
        }
        ,
        
        /** 
        *   Specifies that all of the non-reducing terminal (leaf) {@link Residue}s 
        *   of the given search sub-structure must also be non-reducing 
        *   terminii in all matching structures. 
        */
        Must_Include_All_Non_Reducing_Terminii
        {
            /** add a predicate that each leaf in the search substruct must also 
            *   be a leaf in matching structures. */
            void modifyQuery( SubstructureQueryGenerator q, Set<Option> options )   
            {
                Set<Residue> leaves = q.getSearchGraph().getLeafValues();
                if ( leaves.size() == 0 )
                    throw new RuntimeException("Leaves shouldn't ever be empty...");
                
                for ( Residue r : leaves )
                {
                    String alias = q.getTableAliasFor( r ); 
                    log.debug("adding leaf residue predicate for " + r );
                    
                    q.addPredicate( 
                        alias 
                        + ".rightIndex - "
                        + alias
                        + ".leftIndex = 1"
                    );
                }
            }
        }
        ,
        
        /**
        *   Causes the query engine not to include constraints for 
        *   linkage elements (anomer, reducing and non-reducing terminal
        *   positions).
        */
        Ignore_Linkages
        {
            /** Empties the linkage predicate list. */
            void modifyQuery( SubstructureQueryGenerator q, Set<Option> options )
            {
                log.debug("clearing linkage predicates");
                q.linkagePredicates.clear();   
            }
        }
        ; //--- end of enum constants ^^^
        
        
        /** 
        *   Callback for {@link Option} enum values to modify the 
        *   {@link SubstructureQuery} on which they have been set. 
        */
        void modifyQuery( SubstructureQueryGenerator q, Set<Option> options ) 
        {   
            /* do nothing by default */ 
        }
        
    } // end enum Option
    
} // end class SubstructureQuery


