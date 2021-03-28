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

package org.eurocarbdb.action.core;

//  stdlib imports
import java.util.*;
import java.io.*;
import java.net.*;

//  3rd party imports 
import org.apache.log4j.Logger;
import org.hibernate.*; 
import org.hibernate.criterion.*; 

//  eurocarb imports
import org.eurocarbdb.action.EurocarbAction;
import org.eurocarbdb.action.RequiresLogin;
import org.eurocarbdb.dataaccess.EntityManager;
import org.eurocarbdb.dataaccess.core.*;

import org.eurocarbdb.application.glycoworkbench.GlycanWorkspace;
import org.eurocarbdb.application.glycanbuilder.GlycanDocument;
import org.eurocarbdb.application.glycanbuilder.Glycan;
import org.eurocarbdb.application.glycanbuilder.FileUtils;
import org.eurocarbdb.application.glycanbuilder.LogUtils;
import org.eurocarbdb.application.glycanbuilder.TextUtils;

//  static imports
import static org.eurocarbdb.dataaccess.Eurocarb.getEntityManager;
import org.eurocarbdb.dataaccess.hibernate.*;

/*  class ContributeStructure ***********************************
*
*   Action for entering/creating a glycan structure with biological
*   context
*
*   @author          ac [a.ceroni@imperial.ac.uk]
*   @version         $Rev: 1210 $

*/
public class CreateBiologicalContext extends EurocarbAction implements RequiresLogin
{
    //~~~~~~~~~~~~~~~~~~~~~~ STATIC FIELDS ~~~~~~~~~~~~~~~~~~~~~~~~//
   
    /** Logging handle. */
    protected static final Logger log  = Logger.getLogger( ContributeStructure.class.getName() );
       
    private Taxonomy taxonomy = null;
    private TissueTaxonomy tissueTaxonomy = null;    
    private Set<Disease> diseases = null;
    private Set<Perturbation> perturbations = null;
    private BiologicalContext biologicalContext = null;           
            
    //~~~~~~~~~~~~~~~~~~~~~~~~~ METHODS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//
   
    public void setBiologicalContext(BiologicalContext bc) 
    {
        biologicalContext = bc;
    }

    public BiologicalContext getBiologicalContext() 
    {
        return biologicalContext;
    }

    public void setTaxonomySearch(String text) 
    {
        log.debug("Searching for taxonomy with name "+text);
        text = text.toLowerCase();
        // exact search by taxon
        if( text!=null && text.length()>0 ) 
        {
            Criteria crit = getEntityManager().createQuery(Taxonomy.class).add(Restrictions.eq("taxon",text));
            java.util.Collection<Taxonomy> list = crit.list();
            if( list!=null && list.size()>0 ) 
            {
                taxonomy =  list.iterator().next();
                log.debug("Found a taxonomy "+taxonomy.getTaxonomyId());
                return;
            }
        }
        taxonomy = null;    
    }
    

    public void setTissueTaxonomySearch(String text) 
    {
        log.debug("Searching for tissue with name "+text);
        // exact search by taxon
        if( text!=null && text.length()>0 ) 
        {
            Criteria crit = getEntityManager().createQuery(TissueTaxonomy.class).add(Restrictions.eq("tissueTaxon",text));    
            java.util.Collection<TissueTaxonomy> list = crit.list();
            if( list!=null && list.size()>0 ) 
            {
                tissueTaxonomy =  list.iterator().next();
                log.debug("Found a tissueTaxonomy "+tissueTaxonomy.getId());
                return;
            }
        }
        tissueTaxonomy = null;    
    }

    public void setDiseaseSearch(String[] values) 
    {
        log.debug("Searching for disease with names in array size of "+values.length);
        diseases = new HashSet<Disease>();
        if( values!=null ) 
        {
            for( int i=0; i<values.length; i++ ) 
            {
                String text = values[i];
                
                // exact search by disease name
                if( text!=null && text.length()>0 ) 
                {
                    Criteria crit = getEntityManager().createQuery(Disease.class).add(Restrictions.eq("diseaseName",text));    
                    java.util.Collection<Disease> list = crit.list();
                    if( list!=null && list.size()>0 ) 
                    {
                        log.debug("Found a disease");
                        diseases.add(list.iterator().next());
                    }
                }
            }
        }
    }
    
    public void setPerturbationSearch(String[] values) 
    {
        perturbations = new HashSet<Perturbation>();
        if( values!=null ) 
        {
            for( int i=0; i<values.length; i++ ) 
            {
                String text = values[i];
                
                // exact search by disease name
                if( text!=null && text.length()>0 ) 
                {
                    Criteria crit = getEntityManager().createQuery(Perturbation.class).add(Restrictions.eq("perturbationName",text));    
                    java.util.Collection<Perturbation> list = crit.list();
                    if( list!=null && list.size()>0 ) 
                    {
                        perturbations.add(list.iterator().next());
                    }
                }
            }
        }
    }
      

    protected BiologicalContext createBiologicalContext() throws Exception
    {
        BiologicalContext bc = new BiologicalContext();
        
        //  set taxonomy & tissue taxonomy
        bc.setTaxonomy( taxonomy );
        bc.setTissueTaxonomy( tissueTaxonomy );
        
        //  add disease associations, if any
        if( diseases!=null ) 
        {
            Set<DiseaseContext> dcSet = new HashSet<DiseaseContext>(); //bc.getDiseaseContexts();
            for ( Disease d : diseases ) {
                dcSet.add( new DiseaseContext( bc, d ) );               
            }
            bc.setDiseaseContexts( dcSet );
        }
            
            //  add perturbation associations, if any
        if( perturbations!=null ) 
        {
            Set<PerturbationContext> pcSet = new HashSet<PerturbationContext>(); //bc.getDiseaseContexts();
            for ( Perturbation p : perturbations )
        pcSet.add( new PerturbationContext( bc, p ) );    
            
            bc.setPerturbationContexts( pcSet );
        }                                  

        return bc;        
    }
   
    public String execute() throws Exception 
    {
        if ( taxonomy == null ) {
            return "input";
        }
        try { 
            biologicalContext = createBiologicalContext();
            getEntityManager().store( biologicalContext );
            return "success";
        }
        catch(Exception e) {
            return "input";
        }                                     
    }  

} // end class
