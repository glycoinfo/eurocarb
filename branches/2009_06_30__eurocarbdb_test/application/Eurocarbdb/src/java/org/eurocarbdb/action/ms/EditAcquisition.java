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
*   Last commit: $Rev: 1310 $ by $Author: hirenj $ on $Date:: 2009-06-28 #$  
*/

package org.eurocarbdb.action.ms;

import org.eurocarbdb.action.*;
import org.eurocarbdb.action.exception.*;


import org.eurocarbdb.dataaccess.*;
import org.eurocarbdb.dataaccess.ms.*;
import org.eurocarbdb.dataaccess.core.*;
import org.eurocarbdb.dataaccess.hibernate.*;

import org.eurocarbdb.action.exception.*;

import com.opensymphony.xwork.Action;
import com.opensymphony.xwork.Preparable;

import org.hibernate.*; 
import org.hibernate.criterion.*; 

import java.util.*;
import java.io.*;
import org.apache.commons.io.*;
import org.apache.log4j.Logger;


import static org.eurocarbdb.dataaccess.Eurocarb.getEntityManager;

/**
* @author             aceroni
* @version            $Rev: 1310 $
*/
public class EditAcquisition extends AbstractMsAction implements EditingAction, RequiresLogin
{

    protected static final Logger log = Logger.getLogger( EditAcquisition.class.getName() );

    private Acquisition acquisition = null;     

    public Acquisition getAcquisition() {
        return acquisition;
    }

    public void setAcquisition(Acquisition acquisition) {
        this.acquisition = acquisition;
    } 

    /**
     * Check that the acquisition we are editing is owned by the current
     * contributor
     */
    public void checkPermissions() throws InsufficientPermissions
    {
        if (! getAcquisition().getContributor().equals(getContributor())) {
            throw new InsufficientPermissions(this,"Acquisition does not belong to logged in user");
        }
    }


    public void setParameters(Map params)
    {
        acquisition = getObjectFromParams(Acquisition.class, params, "acquisition.acquisitionId");
        if (acquisition == null)
        {
            this.addActionError("Must supply a valid Acquisition ID if you wish to edit");
            if (params.get("acquisition.acquisitionId") == null) {
                this.addFieldError("acquisition.acquisitionId", "No acquisition identifier provided");
            } else {
                this.addFieldError("acquisition.acquisitionId", "Bad acquisition identifier provided");
            }
        } else {
            log.debug("Retrieved an acquisition with id of "+acquisition.getAcquisitionId());            
        }
        
        Device device = getObjectFromParams(Device.class, params, "acquisition.device.deviceId");
        if (device != null) {
            acquisition.setDevice(device);
        }
        
        super.setParameters(params);
    }

    public String execute() throws Exception 
    {
        // store changes
        Eurocarb.getEntityManager().store( acquisition );      

        return "success";
    }

} // end class
