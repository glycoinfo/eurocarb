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
* @author             aceroni
* @version            $Rev
*/

public class SelectReferences extends EurocarbAction {
     
    private List<Reference> references = null;
    
    private int[] reference_ids = new int[0];
    private int experiment_step_id = -1;
    private int glycan_sequence_id = -1;

    private GlycanSequence glycan_sequence = null;
    
    public void setGlycanSequenceId(int id) 
    {
    glycan_sequence_id = id;
    }

    public void setGlycanSequence(GlycanSequence seq) {
    glycan_sequence = seq;
    }

    public GlycanSequence getGlycanSequence() {
    return glycan_sequence;
    }

    public void setReferenceIds(int[] ids) {
    reference_ids = ids;
    }

    public List<Reference> getReferences() {
    return references;
    }

    public void setReferences(List<Reference> refs) {
    references = refs;
    }

    public String execute() throws Exception {
    // actions
    if( submitAction!=null && submitAction.equals("Cancel") )
        return "cancel";
    
    if( submitAction!=null && submitAction.equals("Select") ) {
        references = new ArrayList<Reference>();
        if( reference_ids!=null ) {
        for( int i=0; i<reference_ids.length; i++ ) {
            Reference reference = Eurocarb.getEntityManager().lookup( Reference.class, reference_ids[i]);
            if( reference==null ) {
            this.addFieldError( "referenceId", "Invalid reference id " + reference_ids[i] );
            return "error";
            }
            references.add(reference);
        }
        }
        return "success";
    }
    
    // init
    if( glycan_sequence_id>0 ) {
        glycan_sequence = Eurocarb.getEntityManager().lookup( GlycanSequence.class, glycan_sequence_id);
        if( glycan_sequence==null ) {
        this.addFieldError( "glycanSequenceId", "Invalid glycan sequence id " + glycan_sequence_id );
        return "error";
        }
    }
    if( glycan_sequence!=null ) {
        references = glycan_sequence.getReferences();
        if( references.size()>0 )
        return "input";
        return "empty";
    }
                
    return "empty";
    }      
  
}
