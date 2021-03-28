
package org.eurocarbdb.action.nmr;

import org.eurocarbdb.action.*;
import org.eurocarbdb.dataaccess.*;
import org.eurocarbdb.dataaccess.core.*;

import com.opensymphony.xwork.Action;
import com.opensymphony.xwork.Preparable;

import java.util.TreeSet;
import java.util.List;
import java.util.ArrayList;

/**
 * @author 			ss
 * @version			$Rev
 */

public class CreateNmrStart extends EurocarbAction implements RequiresLogin 
{  
    private int experiment_step_id = -1;
    private int glycan_sequence_id = -1;
    private int allow_new_structures;

    private ExperimentStep experiment_step = null;
    private GlycanSequence glycan_sequence = null;       

    public void setExperimentStepId(int id)  { experiment_step_id = id; }  
    public void setExperimentStep(ExperimentStep exp_step) { experiment_step = exp_step; }
    public ExperimentStep getExperimentStep() { return experiment_step; }   

    public void setGlycanSequenceId(int id)  { glycan_sequence_id = id; } 
    public void setGlycanSequence(GlycanSequence seq) { glycan_sequence = seq; }
    public GlycanSequence getGlycanSequence() { return glycan_sequence; }

    public void setBiologicalContext(BiologicalContext bc) {}
    public BiologicalContext getBiologicalContext() { return null; };

    public void setReferences(List<Reference> r) {}
    public List<Reference> getReferences() { return new ArrayList<Reference>(); }

    public String execute() throws Exception 
    {
        allow_new_structures = 1;
        
    	if( experiment_step_id>0 ) 
        {
    	    log.debug("Retrieving experiment step" + experiment_step_id);
    	    experiment_step = Eurocarb.getEntityManager().lookup( ExperimentStep.class, experiment_step_id);
            
    	    if( experiment_step==null ) 
            {
        		this.addFieldError( "experimentStepId", "Invalid experiment step id " + experiment_step_id );
        		return "error";
    	    }
    	    return "success";
        }

        if( glycan_sequence_id>0 ) 
        {
    	    log.debug("Retrieving glycan sequence" + glycan_sequence_id);
    	    glycan_sequence = Eurocarb.getEntityManager().lookup( GlycanSequence.class, glycan_sequence_id);
            
    	    if( glycan_sequence==null ) 
            {
        		this.addFieldError( "glycanSequenceId", "Invalid glycan sequence id " + glycan_sequence_id );
        		return "error";
    	    }
    	    allow_new_structures = 0;
    	    return "success";
    	}

    	return "success";
    }
  
}
