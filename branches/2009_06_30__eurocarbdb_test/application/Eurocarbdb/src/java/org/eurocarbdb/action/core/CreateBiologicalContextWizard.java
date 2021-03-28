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
/**
* $Id: CreateBiologicalContextWizard.java 1210 2009-06-11 18:13:15Z glycoslave $
* Last changed $Author: glycoslave $
* EUROCarbDB Project
*/
package org.eurocarbdb.action.core;

//  stdlib imports
import java.util.Set;
import java.util.List;
import java.util.HashSet;
import java.util.Collections;

//  3rd party imports 
import org.apache.log4j.Logger;
import org.hibernate.*; 
import org.hibernate.criterion.*; 

//  eurocarb imports
import org.eurocarbdb.action.EurocarbAction;
import org.eurocarbdb.dataaccess.EntityManager;
import org.eurocarbdb.dataaccess.EntityDoesntExistException;

import org.eurocarbdb.dataaccess.core.Disease;
import org.eurocarbdb.dataaccess.core.DiseaseContext;
import org.eurocarbdb.dataaccess.core.Taxonomy;
import org.eurocarbdb.dataaccess.core.Perturbation;
import org.eurocarbdb.dataaccess.core.PerturbationContext;
import org.eurocarbdb.dataaccess.core.TissueTaxonomy;
import org.eurocarbdb.dataaccess.core.BiologicalContext;

import org.eurocarbdb.action.AbstractExperimentAwareAction;

//  static imports
import static org.eurocarbdb.dataaccess.Eurocarb.getEntityManager;
import org.eurocarbdb.dataaccess.hibernate.*;


/*  class CreateBiologicalContext  *//*******************************
*
*
*
*   @author          mjh [matt@ebi.ac.uk]
*   @version         $Rev: 1210 $
*/
public class CreateBiologicalContextWizard extends AbstractExperimentAwareAction 
{
    //~~~~~~~~~~~~~~~~~~~~~~ STATIC FIELDS ~~~~~~~~~~~~~~~~~~~~~~~~//
    
    /** Logging handle. */
    protected static final Logger log 
        = Logger.getLogger( CreateBiologicalContext.class.getName() );

        
    //~~~~~~~~~~~~~~~~~~~~~~~~~~ FIELDS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//
    
    private BiologicalContext biologicalContext;
    
    private int taxonomyId;
    private int ttaxonomyId;
    private int diseaseId;
    private int perturbId;
       
    private boolean confirmed = false;

    private Taxonomy taxonomy = null;

    private TissueTaxonomy tissueTaxonomy = null;
    
    private Set<Disease> diseases = null;

    private Set<Perturbation> perturbations = null;
  
  
    //~~~~~~~~~~~~~~~~~~~~~~~~~ METHODS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//      
  

    /** Returns all biological contexts for the current user. */
    public List<BiologicalContext> getAllBiologicalContexts() 
    {
        if ( log.isDebugEnabled() )
            log.debug( "retrieving all biological contexts" );
        
        List result = getEntityManager()
                     .getQuery( "org.eurocarbdb.dataaccess.core.BiologicalContext.ALL_CONTEXTS" )
                     .list();
                     
        return (List<BiologicalContext>) result;
    }
    

    /** The BC being created. */
    public BiologicalContext getBiologicalContext() 
    {
        return biologicalContext;
    }

    public void setBiologicalContext(BiologicalContext bc) 
    {
        biologicalContext = bc;
    }        

    /** Sets the taxonomy for the current BC. */
    public void setTaxonomyId( int id ) 
    {  
        taxonomyId = id;  
    }
    
    /** Sets the tissue taxonomy for the current BC. */
    public void setTissueTaxonomyId( int id ) 
    {  
        ttaxonomyId = id;  
    }
    
    /** Sets a disease to be added to the current BC. @see #addDisease */
    public void setDiseaseId( int id ) 
    {  
        log.debug("setting diseaseId=" + id); 
        diseaseId = id;  
    }

    //public void setDiseaseId( int[] ids ) {  for ( int id : ids ) log.debug("multiple=" + id ); }
        
    /** Sets a disease to be added to the current BC. @see #addPerturbation */
    public void setPerturbationId( int id ) 
    {   
        perturbId = id;  
    }

    /** Returns the taxonomy that is set to this BC. */
    public Taxonomy getTaxonomy() 
    {  
        return taxonomy;  
    }
    
    /** Associates the passed taxonomy to the current BC. */
    public void setTaxonomy( Taxonomy t ) 
    {  
        taxonomy = t;  
    }   

    /** Returns the tissue taxonomy that is set to this BC. */
    public TissueTaxonomy getTissueTaxonomy() {  return tissueTaxonomy;  }

    /** Associates the passed tissue taxonomy to the current BC. */
    public void setTissueTaxonomy( TissueTaxonomy t ) {  tissueTaxonomy = t;  }
    
    /** Returns the set of diseases that are set on this BC. */
    public Set<Disease> getDiseases() {  return diseases;  }

    /** Associates the passed set of diseases to the current BC. */
    public void setDiseases( Set<Disease> d ) {  diseases = d;  }
    
    /** Returns the set of perturbations that are set on this BC. */
    public Set<Perturbation> getPerturbations() {  return perturbations;  }

    /** Associates the passed set of perturbations to the current BC. */
    public void setPerturbations( Set<Perturbation> p ) {  perturbations = p;  }
    
    
    /** 
    *   Indicates that this biological context does not have associated 
    *   diseases.
    */
    public void setHasNoDiseases( boolean b )
    {
        log.info("setting this context to have NO diseases");
        diseases = Collections.emptySet(); //BiologicalContext.HAS_NO_DISEASES;
    }
    
    /** 
    *   Indicates that this biological context does not have associated 
    *   diseases.
    */
    public void setHasNoPerturbations( boolean b )
    {
        log.info("setting this context to have NO perturbations");
        perturbations = Collections.emptySet(); //BiologicalContext.HAS_NO_PERTURBATIONS;
    }

    
    /** 
    *   Sets the commit flag on this BC; any subsequent call to 
    *   {@link #saveBiologicalContext} will save the current BC to
    *   the database.
    */
    public void setCommit( boolean b ) 
    {  
        log.debug("commit flag set");
        confirmed = true;  
    }
    
    
    //~~~  LOGIC  ~~~//

    /**
    *   Sets the taxonomy with taxonomyId given by {@link #getTaxonomyId} 
    *   as the taxonomy for this biological context.
    */
    public String addTaxonomy() throws Exception
    {
        log.info("attempting to add taxonomy id=" + taxonomyId + " to context");
        Taxonomy t = _lookup( Taxonomy.class, "taxonomyId", taxonomyId );  
        
        if ( t == null ) 
            return "input_taxonomy";

        taxonomy = t;
        
        return execute();
    }
    
    /**
    *   Sets the tissue taxonomy with tissueTaxonomyId given by
    *   {@link #getTissueTaxonomyId} as the tissue taxonomy for 
    *   this biological context.
    */
    public String addTissueTaxonomy() throws Exception
    {
        log.info("attempting to add tissue taxonomy id=" + ttaxonomyId + " to context");
        TissueTaxonomy ttax = _lookup( TissueTaxonomy.class, 
                                       "tissueTaxonomyId", 
                                       ttaxonomyId );
        
        if ( ttax == null ) 
            return "input_tissue_taxonomy";
        
        tissueTaxonomy = ttax;
        
        return execute();
    }

    /**
    *   Adds the disease given by {@link #getDiseaseId} to
    *   the current set of diseases to be associated with this 
    *   biological context.
    */
    public String addDisease()
    {
        log.info("attempting to add disease id=" + diseaseId + " to context");
        Disease d = _lookup( Disease.class, "diseaseId", diseaseId );  
        
        if ( d == null ) 
        {
            log.info("disease id was not valid, returning 'input_disease' view");
            return "input_disease";
        }
        
        if ( diseases == null || diseases == Collections.EMPTY_SET)
            diseases = new HashSet<Disease>();

        diseases.add( d );
        
        if ( log.isDebugEnabled() )
            log.debug("added disease, now " 
                     + diseases.size() + " in context");
        
        return "input_disease";
    }
    
    /**
    *   Adds the perturbation given by {@link #getPerturbationId} to
    *   the current set of perturbations to be associated with this 
    *   biological context.
    */
    public String addPerturbation()
    {
        log.info("attempting to add perturbation id=" + perturbId + " to context");
        Perturbation p = _lookup( Perturbation.class, "perturbationId", perturbId );  
        
        if ( p == null ) 
        {
            log.info("perturbation id was not valid, returning 'input_perturbation' view");
            return "input_perturbation";
        }
            
        if ( perturbations == null )
            perturbations = new HashSet<Perturbation>();
        perturbations.add( p );
        
        if ( log.isDebugEnabled() )
            log.debug("added perturbation, now " 
                     + perturbations.size() + " in context");
        
        return "input_perturbation";
    }
    
    /**
    *   Resets taxonomy to starting state (null).
    */
    public String removeTaxonomy() 
    {  
        log.info("setting taxonomy to null");
        //getBiologicalContext().setTaxonomy( null );
        taxonomy = null;
        return "input_taxonomy";
    }
    
    /**
    *   Resets tissue taxonomy to starting state (null).
    */
    public String removeTissueTaxonomy() 
    {  
        log.info("setting tissue taxonomy to null");
        //getBiologicalContext().setTissueTaxonomy( null );
        tissueTaxonomy = null;
        return "input_tissue_taxonomy";
    }
    
    
    /** 
    *   Removes the disease with diseaseId given by 
    *   {@link #getDiseaseId} from the current set of diseases. 
    */
    public String removeDisease() throws Exception
    {  
        if ( diseaseId > 0 )
        {
            Set<Disease> dset = getDiseases();
            for ( Disease d : dset )
            {
                if ( d.getDiseaseId() == diseaseId )
                {
                    log.info("removing disease id=" + diseaseId + " from context");
                    dset.remove( d );
                    break;
                }
            }
        }
        else
        {
            log.info("removing all diseases from context");
            //getBiologicalContext().getDiseases().clear();  
            getDiseases().clear();  
        }
            
        return execute();
    }
    
    /** 
    *   Removes the perturbation with perturbationId given by 
    *   {@link #getPerturbationId} from the current set of perturbations. 
    */
    public String removePerturbation() throws Exception
    {  
        if ( perturbId > 0 )
        {
            Set<Perturbation> pset = getPerturbations();
            for ( Perturbation p : pset )
            {
                if ( p.getPerturbationId() == perturbId )
                {
                    log.info("removing perturbation id=" + perturbId + " from context");
                    pset.remove( p );
                    break;
                }
            }
        }
        else
        {
            log.info("removing all perturbations from context");
            getPerturbations().clear();  
        }
            
        return execute();
    }
    
    /** 
    *   Creates & saves a new biological context from the current
    *   taxonomy, tissue taxonomy, disease set, and perturbation set.
    */
    protected String saveBiologicalContext() throws Exception
    {
        log.debug("attempting to save biological context");
        BiologicalContext bc = new BiologicalContext();
        
        //  set taxonomy & tissue taxonomy
        bc.setTaxonomy( taxonomy );
        bc.setTissueTaxonomy( tissueTaxonomy );
        
        //  add disease associations, if any
    if( diseases!=null ) {
        Set<DiseaseContext> dcSet = new HashSet<DiseaseContext>(); //bc.getDiseaseContexts();
        for ( Disease d : diseases )
        dcSet.add( new DiseaseContext( bc, d ) );               
        
        bc.setDiseaseContexts( dcSet );
    }
        
        //  add perturbation associations, if any
    if( perturbations!=null ) {
        Set<PerturbationContext> pcSet = new HashSet<PerturbationContext>(); //bc.getDiseaseContexts();
        for ( Perturbation p : perturbations )
        pcSet.add( new PerturbationContext( bc, p ) );    
        
        bc.setPerturbationContexts( pcSet );
    }
                
        //  save to data store
        getEntityManager().store( bc );
        biologicalContext = bc;
        
        return SUCCESS;        
    }
    
    
    /** 
    *   Marshalls input parameters, sets up a new biological context 
    *   corresponding to input params, verifies BC, and saves it to 
    *   the DB using {@link #saveBiologicalContext}
    */
    public String execute() throws Exception 
    {
    if( submitAction!=null && submitAction.equals("Submit") ) {
        return saveBiologicalContext();
    }

        if (   taxonomy == null 
            && tissueTaxonomy == null 
            && diseases == null
            && perturbations == null )
        {
            log.debug("returning first input view");
            return INPUT;
        }


        //  does BC have a taxonomy defined? 
        if ( getTaxonomy() == null )
        {
            log.debug("taxonomy == null, returning input_taxonomy view");
            return "input_taxonomy";
        }
        
        //  does BC have a tissue taxonomy defined?
        if ( getTissueTaxonomy() == null )
        {
            log.debug("tissue taxonomy == null, returning input_tissue_taxonomy view");
            return "input_tissue_taxonomy";
        }
        
        //  have diseases been set? if diseases has been set
        //  to the empty set singleton in Collections then it means
        //  we've explicitly set that there are no diseases in this BC.
        if ( getDiseases() == Collections.EMPTY_SET )  //BiologicalContext.HAS_NO_DISEASES )
        {
            log.debug("biological context set to have no diseases, no probs");
        }
        else
        {
            if ( getDiseases() == null ) 
            {
                log.debug("disease == null, returning input_disease view");
                return "input_disease";
            }
            else if ( getDiseases().size() == 0 )
            {
                log.debug("no diseases entered yet, returning input_disease view");
                return "input_disease";
            }
        }
        
        //  have perturbations been set? if perturbations has been set
        //  to the empty set singleton in Collections then it means
        //  we've explicitly set that there are no perturbations in this BC.
        if ( getPerturbations() == Collections.EMPTY_SET ) //BiologicalContext.HAS_NO_PERTURBATIONS )
        {
            log.debug("biological context set to have no perturbations, no probs");
        }
        else
        {
            if ( getPerturbations() == null ) 
            {
                log.debug("perturbs == null, returning input_perturbation view");
                return "input_perturbation";
            }
            else if ( getPerturbations().size() == 0 )
            {
                log.debug("no perturbations entered yet, returning input_perturbation view");
                return "input_perturbation";
            }
        }
        
        if ( ! confirmed )
        {
            log.debug("commit flag not set, returning 'confirm' view");
            return "confirm";
        }
            
        return saveBiologicalContext();
    }

    
    
    /** return object if it's ok, return null if id is invalid. */
    private final <T> T _lookup( Class<T> c, String param, int id )
    {
        if ( id <= 0 )
        {
            addFieldError( param, "parameter '" + param + "' must be > 0");
            return null;
        }

        T obj = null;
        try
        {
            obj = getEntityManager().lookup( c, id );
        }
        catch ( EntityDoesntExistException e )
        {
            String msg = c.getSimpleName() 
                       + " with id=" 
                       + id 
                       + " doesn't exist"
                       ;
                                  
            log.info( msg + ":" + e ); 
            addFieldError( param, msg );
            return null;
        }
        
        return obj;
    }
    
} // end class














