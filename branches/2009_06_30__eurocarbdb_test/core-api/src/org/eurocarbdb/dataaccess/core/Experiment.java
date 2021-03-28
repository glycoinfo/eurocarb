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
// Generated 3/08/2006 16:48:24 by Hibernate Tools 3.1.0.beta4

import java.util.Set;
import java.util.List;
import java.util.Date;
import java.util.HashSet;
import java.util.List;
import java.util.ArrayList;
import java.util.Collections;
import java.io.Serializable;

import org.apache.log4j.Logger;

import org.eurocarbdb.util.graph.Graph;
import org.eurocarbdb.dataaccess.Contributed;
import org.eurocarbdb.dataaccess.BasicEurocarbObject;


import static java.util.Collections.emptySet;
import static java.util.Collections.emptyList;
import static java.util.Collections.unmodifiableSet;
import static java.util.Collections.unmodifiableList;

import static org.eurocarbdb.util.JavaUtils.checkNotNull;
import static org.eurocarbdb.dataaccess.Eurocarb.getEntityManager;

/**
* Experiment generated by hbm2java
*/

public class Experiment 
extends BasicEurocarbObject 
implements Serializable, Comparable<Experiment>, Contributed 
{
    //~~~~~~~~~~~~~~~~~~~~~~ STATIC FIELDS ~~~~~~~~~~~~~~~~~~~~~~~~//

    /** Logging handle. */
    private static final Logger log 
        = Logger.getLogger( Experiment.class.getName() );

    /** Named query for getting all biological contexts associated 
    *   with this Experiment. @see Experiment.hbm.xml  */
    private static final String QUERY_BIOLOGICAL_CONTEXTS
        = "org.eurocarbdb.dataaccess.core.Experiment.GET_BIOLOGICAL_CONTEXTS_BY_EXPERIMENT";

    //~~~~~~~~~~~~~~~~~~~~~~~~~~ FIELDS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//

     private int experimentId;
     
     private String experimentName;
     
     private String experimentComments;
     
     private Date dateEntered;

     private Contributor contributor;
     
     private Set<ExperimentStep> experimentSteps = new HashSet<ExperimentStep>(0);
     
     private Set<Evidence> evidence = new HashSet<Evidence>(0);
     
     private Set<ExperimentContext> experimentContexts = new HashSet<ExperimentContext>(0);


    //~~~~~~~~~~~~~~~~~~~~~~~ CONSTRUCTORS ~~~~~~~~~~~~~~~~~~~~~~~~//

    /** default constructor */
    public Experiment() {}

    
    /** full constructor */
    public Experiment( String name,
                       String comments, 
                       Date   date_entered,
                       Set<ExperimentStep> steps, 
                       Set<Evidence> evidence, 
                       Set<ExperimentContext> contexts ) 
    {
        this.experimentName     = name;
        this.experimentComments = comments;
        this.dateEntered        = date_entered;
        
        this.experimentSteps    = steps;
        this.evidence           = evidence;
        this.experimentContexts = contexts;
    }
    
    
    //~~~~~~~~~~~~~~~~~~~~~~ STATIC METHODS ~~~~~~~~~~~~~~~~~~~~~~~//    
    
    /*  getAllExperiments  *//***************************************
    *
    *   Returns the list of all experiments in the database (!!!).
    */
    @SuppressWarnings("unchecked")
    public static List<Experiment> getAllExperiments()
    {
        if ( log.isDebugEnabled() )
            log.debug( "retrieving all experiments" );
        
        
        List result = getEntityManager()
                     .getQuery( "org.eurocarbdb.dataaccess.core.Experiment.ALL_EXPERIMENTS" )
                     .list();
                     
        return (List<Experiment>) result;
    }
    
   
    //~~~~~~~~~~~~~~~~~~~~~~~~~ METHODS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//    

    /*  getBiologicalContexts  *//***********************************
    *
    *   Returns the list of all {@link BiologicalContext biological contexts} 
    *   associated with this {@link Experiment}.
    */
    @SuppressWarnings("unchecked")
    public List<BiologicalContext> getBiologicalContexts()
    {
        int id = this.getExperimentId();
        assert id > 0;
        
        List result = getEntityManager()
                     .getQuery( QUERY_BIOLOGICAL_CONTEXTS )
                     .setParameter( "experiment_id", id )
                     .list();
                                            
        if ( result == null )
            return Collections.emptyList();
        else 
            return (List<BiologicalContext>) result;
    }
    

    /*  getUniqueBiologicalContexts  *//***********************************
    *
    *   Returns an unmodifiable list of all biological contexts
    * associated to the experiment.
    *   @see #addBiologicalContext
    */
    @SuppressWarnings("unchecked")
    public List<BiologicalContext> getUniqueBiologicalContexts()
    {
        Set<ExperimentContext> ebc_list = this.getExperimentContexts();   
        if ( ebc_list == null || ebc_list.size() == 0 )
            return emptyList();
        
        List<BiologicalContext> bc_list = new ArrayList<BiologicalContext>( ebc_list.size() );
        for ( ExperimentContext c : ebc_list ) {
        boolean found = false;
        for( BiologicalContext bc : bc_list ) {
        if( BiologicalContext.haveSameContent(bc,c.getBiologicalContext()) ) {
            found = true;
            break;
        }
        }
        if( !found )
        bc_list.add(c.getBiologicalContext());
    }
        return unmodifiableList( bc_list );
    }


    /** Returns the contributor of this evidence. */
    public Contributor getContributor() 
    {
        if ( this.contributor == null )
            this.contributor = Contributor.getCurrentContributor();
        
        return this.contributor;
    }
    
    
    /** Sets the contributor of this evidence. */
    public void setContributor( Contributor c ) 
    {
        checkNotNull( c );
        this.contributor = c;
    }
    
    
    public Date getDateEntered() 
    {
        return this.dateEntered;
    }
    

    public int getExperimentId() 
    {
        return this.experimentId;
    }
    
    public String getExperimentComments() 
    {
        return this.experimentComments;
    }
    
    public void setExperimentComments( String comments ) 
    {
        this.experimentComments = comments;
    }

    public String getExperimentName() 
    {
        return this.experimentName;
    }
    
    public void setExperimentName( String name ) 
    {
        this.experimentName = name;
    }
    
    public Set<ExperimentStep> getExperimentSteps() 
    {
        return this.experimentSteps;
    }

    public List<ExperimentStep> getExperimentStepsList() 
    {
        return new ArrayList<ExperimentStep>(this.experimentSteps);
    }
    
    /** 
    *   Returns the {@link ExperimentStep experiment steps} of this 
    *   experiment as a {@link Graph} of experiment step objects. 
    */
    public Graph<Experiment,ExperimentStep> getExperimentStepGraph()
    {
        Set<ExperimentStep> steps = this.getExperimentSteps();
        
        Graph<Experiment,ExperimentStep> g 
            = new Graph<Experiment,ExperimentStep>( steps.size() );
        
        if ( steps.size() == 0 ) 
            return g;
        
        g.addAllValues( steps );
        
        for ( ExperimentStep step : steps )
        {
            ExperimentStep parent = step.getParentExperimentStep();
            assert steps.contains( parent );
            g.addEdge( parent, step, this );
        }
        
        return g;
    }

    
    public void setExperimentSteps(Set<ExperimentStep> experimentSteps) 
    {
        this.experimentSteps = experimentSteps;
    }

    
    public Set<Evidence> getEvidence() 
    {
        return this.evidence;
    }
    
    
    public void setEvidence(Set<Evidence> evidence) 
    {
        this.evidence = evidence;
    }

    
    public int compareTo( Experiment other )
    {
        //  sorting by name, but will be sorting by date, soon.
        if ( this.experimentName == null ) return -1;
        if ( other.experimentName == null ) return 1;
        return this.experimentName.compareTo( other.experimentName );    
    }
    
    
    //~~~~~~~~~~~~~~~~~~~~~~ PRIVATE METHODS ~~~~~~~~~~~~~~~~~~~~~~~~
    
    void setExperimentId( int experimentId ) 
    {
        this.experimentId = experimentId;
    }
    
    Set<ExperimentContext> getExperimentContexts() 
    {
        return this.experimentContexts;
    }
    
    
    void setExperimentContexts(Set<ExperimentContext> experimentContexts) 
    {
        this.experimentContexts = experimentContexts;
    }
    
} // end class


