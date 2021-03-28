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

import java.util.*;

import org.eurocarbdb.action.*;
import org.eurocarbdb.dataaccess.*;
import org.eurocarbdb.dataaccess.core.*;

import com.opensymphony.xwork.Action;
import com.opensymphony.xwork.Preparable;

import java.util.TreeSet;

/**
*   @author             aceroni
*   @version            $Rev: 1210 $
*/
public class SelectBiologicalContext extends EurocarbAction 
{
    
    private List<BiologicalContext> biological_contexts = null;
    
    private int biological_context_id = -1;
    private int experiment_step_id = -1;
    private int glycan_sequence_id = -1;
    
    private BiologicalContext biological_context = null;
    private ExperimentStep experiment_step = null;
    private GlycanSequence glycan_sequence = null;
    
    private String message = "";
    
    public void setExperimentStepId(int id) 
    {    
        experiment_step_id = id;
    } 
    
    public int getExperimentStepId() 
    {    
        return experiment_step_id;
    } 
    
    public void setExperimentStep(ExperimentStep exp_step) 
    {
        experiment_step = exp_step;
    }
    
    public ExperimentStep getExperimentStep() 
    {
        return experiment_step;
    }   
    
    public void setGlycanSequenceId(int id) 
    {
        glycan_sequence_id = id;
    }
    
    public int getGlycanSequenceId() 
    {
        return glycan_sequence_id;
    }
    
    public void setGlycanSequence(GlycanSequence seq) 
    {
        glycan_sequence = seq;
    }
    
    public GlycanSequence getGlycanSequence() 
    {
        return glycan_sequence;
    }
    
    public void setBiologicalContextId(int id) 
    {
        biological_context_id = id;
    }
    
    public void setBiologicalContext(BiologicalContext bc) 
    {
        biological_context = bc;
    }
    
    public BiologicalContext getBiologicalContext() 
    {
        return biological_context;
    }    
    
    public List<BiologicalContext> getBiologicalContexts() 
    {
        return biological_contexts;
    }
    
    public void setMessage(String m) 
    {
        message = m;
    }
    
    public String getMessage() 
    {
        return message;
    }
    
    public String execute() throws Exception 
    {
        // actions
        if( submitAction!=null && submitAction.equals("Cancel") )
            return "cancel";
        
        if( submitAction!=null && submitAction.equals("Create new") )
            return "create_new";
        
        if( submitAction!=null && submitAction.equals("Select") ) {
            
            if( biological_context_id>0 ) {
                biological_context = Eurocarb.getEntityManager().lookup( BiologicalContext.class, biological_context_id);
                if( biological_context==null ) {
                    this.addFieldError( "biologicalContextId", "Invalid biological context id " + biological_context_id );
                    return "error";
                }
                biological_context = (BiologicalContext)biological_context.clone();
                return "success";
            }
            else 
                this.setMessage("You must select a biological context from the list.");
        }
        
        // get biological contexts from experiment step
        if( experiment_step_id>0 ) {
            experiment_step = Eurocarb.getEntityManager().lookup( ExperimentStep.class, experiment_step_id);
            if( experiment_step==null ) {
                this.addFieldError( "experimentStepId", "Invalid experiment step id " + experiment_step_id );
                return "error";
            }
        }
        if( experiment_step!=null ) {
            Eurocarb.getEntityManager().refresh(experiment_step);
            biological_contexts = experiment_step.getExperiment().getUniqueBiologicalContexts();
            experiment_step_id = experiment_step.getExperimentStepId();
            if( biological_contexts.size()>0 )
                return "input";
            return "empty";
        }
        
        // get biological contexts from glycan sequence
        if( glycan_sequence_id>0 ) {
            glycan_sequence = Eurocarb.getEntityManager().lookup( GlycanSequence.class, glycan_sequence_id);
            if( glycan_sequence==null ) {
                this.addFieldError( "glycanSequenceId", "Invalid glycan sequence id " + glycan_sequence_id );
                return "error";
            }
        }
        if( glycan_sequence!=null ) {        
            Eurocarb.getEntityManager().refresh(glycan_sequence);
            biological_contexts = glycan_sequence.getUniqueBiologicalContexts();
            glycan_sequence_id = glycan_sequence.getGlycanSequenceId();
            if( biological_contexts.size()>0 )
                return "input";
            return "empty";
        }
        
        return "empty";
    }      
    
}
