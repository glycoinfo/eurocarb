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
*   Last commit: $Rev: 1549 $ by $Author: glycoslave $ on $Date:: 2009-07-19 #$  
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
import org.eurocarbdb.sugar.SugarSequence;
import org.eurocarbdb.sugar.SequenceFormat;

import org.eurocarbdb.application.glycoworkbench.GlycanWorkspace;
import org.eurocarbdb.application.glycanbuilder.GlycanDocument;
import org.eurocarbdb.application.glycanbuilder.Glycan;
import org.eurocarbdb.application.glycanbuilder.FileUtils;
import org.eurocarbdb.application.glycanbuilder.LogUtils;
import org.eurocarbdb.application.glycanbuilder.TextUtils;

//  static imports
import static org.eurocarbdb.dataaccess.Eurocarb.getEntityManager;
import org.eurocarbdb.dataaccess.hibernate.*;

/*  class ContributeStructure  *//***********************************
*
*   Action for entering/creating a glycan structure with biological
*   context
*
*   @author          hirenj
*   @version         $Rev: 1549 $
*/
@org.eurocarbdb.action.ParameterChecking( 
    whitelist = { "glycanSequence"
                , "biologicalContext"
                , "references"
                , "glycanSequence.glycanSequenceId"
                , "biologicalContext.biologicalContextId" 
                }
)
public class ContributeStructure extends EurocarbAction implements RequiresLogin
{
    //~~~~~~~~~~~~~~~~~~~~~~ STATIC FIELDS ~~~~~~~~~~~~~~~~~~~~~~~~//

    /** Logging handle. */
    protected static final Logger log  = Logger.getLogger( ContributeStructure.class );
    
    private GlycanSequence glycanSequence = null;   
    private BiologicalContext biologicalContext = null;           
    private List<Reference> references = new java.util.ArrayList<Reference>();
    
    //~~~~~~~~~~~~~~~~~~~~~~~~~ METHODS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//

    public void setGlycanSequence(GlycanSequence s) 
    {
        glycanSequence = s;
    }
    

    public GlycanSequence getGlycanSequence() 
    {
        return glycanSequence;
    }
   
    
    public void setBiologicalContext(BiologicalContext bc) 
    {
        biologicalContext = bc;
    }

    
    public BiologicalContext getBiologicalContext() 
    {
        return biologicalContext;
    }

    
    public List<Reference> getReferences() 
    {
        return references;
    }

    
    public void setReferences(List<Reference> refs) 
    {
        references = refs;
    }
    

    public void setParameters(Map params)
    {
        
        glycanSequence = getObjectFromParams(GlycanSequence.class, params);

        biologicalContext = getObjectFromParams(BiologicalContext.class, params);

        super.setParameters(params);
    }

  
    public String execute() throws Exception 
    {

        //*************************    
        // finalize the GlycanSequence creation and store it in the database
    
        if( glycanSequence!=null ) 
        {        
            // store sequence
            if( glycanSequence.getGlycanSequenceId() <= 0  ) 
            {
                //glycanSequence = GlycanSequence.create( getCurrentContributor(),glycanSequence.getSequenceCt());
                log.debug("saving new glycan_sequence");
                SugarSequence sseq = glycanSequence.getSugarSequence(); 
                glycanSequence = GlycanSequence.lookupOrCreateNew( sseq );
                getEntityManager().refresh( glycanSequence.getContributor() );
                try 
                {
                    getEntityManager().store( glycanSequence );
                } 
                catch (Exception e) 
                {
                    glycanSequence = null;
                    throw e;
                }
            }
                
            // add BC to sequence
            if( biologicalContext!=null ) 
            {
                biologicalContext.setContributor(this.getCurrentContributor());
                try 
                {
                    getEntityManager().store(biologicalContext);
                } 
                catch (Exception e) 
                {
                    biologicalContext = null;
                    throw e;
                }
                glycanSequence.addBiologicalContext(biologicalContext);
            }
            
            references = glycanSequence.getReferences( getCurrentContributor() );
            
            getEntityManager().update(glycanSequence);                  
        
            
            return SUCCESS;
        }    
                    
        return "input";
    }    

} // end class
