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
/*
*   $Id: ShowGlycanSequenceStatistics.java 1147 2009-06-04 12:02:50Z glycoslave $
*   Last changed $Author: glycoslave $
*   EUROCarbDB Project
*/
package org.eurocarbdb.action.core;

import java.math.BigDecimal;
import java.util.Map;
import java.util.Set;

import org.apache.log4j.Logger;
import org.eurocarbdb.action.EurocarbAction;
import org.eurocarbdb.dataaccess.core.GlycanSequence;

//import com.opensymphony.webwork.ServletActionContext;

/** 
*   General utility action class used to perform the business logic on 
*   sets of sequences.
*  
*   @author     hirenj
*   @version    $Rev: 1147 $
*/
public class ShowGlycanSequenceStatistics extends EurocarbAction 
{

    private static final Logger log = Logger.getLogger( ShowGlycanSequenceStatistics.class );
    
    private Set<GlycanSequence> sequences;

    public String execute() 
    {
        return SUCCESS;
    }
    
    /**
     * @return the sequences
     */
    public Set<GlycanSequence> getSequences() 
    {
        return sequences;
    }

    /**
     * @param sequences the sequences to set
     */
    public void setSequences(Set<GlycanSequence> sequences) 
    {
        this.sequences = sequences;
    }
    
    public int getStructureCount() 
    {
        return this.getSequences().size();
    }
    
    public double getAverageMass() 
    {
        BigDecimal mass = new BigDecimal(0);
        for (GlycanSequence seq : this.getSequences() ) 
        {
            mass.add(new BigDecimal(10.0f));
        }
//        return mass.divide(new BigDecimal(this.getSequences().size())).doubleValue();
        return 10.0d;
    }
    
    public int getStrucutreCountByClass(String structureClass) 
    {
        if (structureClass.equals("n-glycan")) 
        {
            return 2;
        }
        if (structureClass.equals("o-glycan")) 
        {
            return 2;
        }
        if (structureClass.equals("high-mannose")) 
        {
            return 1;
        }
        return 0;
    }
    
}
