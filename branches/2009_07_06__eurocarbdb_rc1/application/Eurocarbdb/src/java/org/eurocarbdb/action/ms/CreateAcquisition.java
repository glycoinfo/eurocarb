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
*   Last commit: $Rev: 1503 $ by $Author: glycoslave $ on $Date:: 2009-07-13 #$  
*/

package org.eurocarbdb.action.ms;

import org.eurocarbdb.tranche.*;
import org.eurocarbdb.action.*;
import org.eurocarbdb.action.exception.*;

import org.eurocarbdb.dataaccess.*;
import org.eurocarbdb.dataaccess.ms.*;
import org.eurocarbdb.dataaccess.core.*;
import org.eurocarbdb.dataaccess.hibernate.*;
import com.opensymphony.xwork.Action;
import com.opensymphony.xwork.Preparable;

import org.hibernate.*; 
import org.hibernate.criterion.*; 
import org.eurocarbdb.dataaccess.hibernate.*;

import java.util.*;
import java.io.*;
import org.apache.commons.io.*;
import org.apache.log4j.Logger;

/**
*   @author             aceroni
*   @version            $Rev: 1503 $
*/
public class CreateAcquisition extends AbstractMsAction implements RequiresLogin, EditingAction
{

    protected static final Logger log = Logger.getLogger( CreateAcquisition.class.getName() );

    private File acquisitionFile = null;
    private String acquisitionFileContentType = null;
    private String acquisitionFileFileName = null;  

    private Acquisition acquisition = null;       
    private ExperimentStep experiment_step = null;
    private GlycanSequenceContext glycanSequenceContext = null;

    // output message
    private String strMessage = "";

    public String getMessage()
    {
        return strMessage;
    }

    public void setMessage(String strMessage)
    {
        this.strMessage = strMessage;
    }

    public void setExperimentStep(ExperimentStep exp_step) {
    experiment_step = exp_step;
    }

    public ExperimentStep getExperimentStep() {
    return experiment_step;
    }   

    /**
     *  Get accessor for glycanSequenceContext
     *  Description
     */
    public GlycanSequenceContext getGlycanSequenceContext()
    {
        return this.glycanSequenceContext;
    }


    /**
     * Check permissions for the parent biological context
     */
    public void checkPermissions() throws InsufficientPermissions {
        if (! getGlycanSequenceContext().getBiologicalContext().getContributor().equals(getContributor())) {
            throw new InsufficientPermissions(this,"Biological context does not belong to logged in user");
        }
    }

    public void setParameters(Map params)
    {
        glycanSequenceContext = getObjectFromParams(GlycanSequenceContext.class, params);

        super.setParameters(params);
    }

    /**
     *  Set accessor for glycanSequenceContext
     *  @param glycanSequenceContext Data to set
     *  Description
     */
    public void setGlycanSequenceContext(GlycanSequenceContext glycanSequenceContext)
    {
        this.glycanSequenceContext = glycanSequenceContext;
    }

    public Acquisition getAcquisition() 
    {
        return acquisition;
    }

    public void setAcquisition( Acquisition acquisition ) 
    {
        this.acquisition = acquisition;
    }

    public File getAcquisitionFile() 
    {
        return this.acquisitionFile;
    }

    public void setAcquisitionFile(File file) 
    {
        this.acquisitionFile = file;
    }

    public String getAcquisitionFileContentType() 
    {
        return this.acquisitionFileContentType;
    }

    public void setAcquisitionFileContentType(String contentType) 
    {
        this.acquisitionFileContentType = contentType;
    }

    public String getAcquisitionFileFileName() 
    {
        return this.acquisitionFileFileName;
    }

    public void setAcquisitionFileFileName(String filename) 
    {
        this.acquisitionFileFileName = filename;
    }        

    public String execute() throws Exception 
    {       
        if( submitAction.equals("Create") ) 
        {    
            // retrieve device
            Device device = Eurocarb.getEntityManager().lookup( Device.class, acquisition.getDevice().getDeviceId());
            if( device==null ) 
            {
                this.addFieldError( "deviceId", "Invalid device id " + acquisition.getDevice().getDeviceId());
                return "error";
            }

            Acquisition tosave = new Acquisition();
            tosave.setDateObtained(acquisition.getDateObtained());
            if( tosave.getDateObtained()==null ) 
            {
                setMessage("Please insert a valid date");
                return "input";
            }

            // parse scan if file is uploaded                        
            if( acquisitionFile!=null ) 
            {
                tosave.setFilename(acquisitionFileFileName);
                tosave.setFiletype("mzXML");
            
                parseScans(tosave,acquisitionFile);
            }
            else 
            {
                tosave.setFilename("");
                tosave.setFiletype("none");
            }
            
            // upload file to tranche if file is uploaded
            if( acquisitionFile!=null && "true".equals(Eurocarb.getProperty("ecdb.tranche.enabled")) ) {
                String hashcode = TrancheUtility.uploadFile(acquisitionFile,acquisitionFileFileName).toString();
                tosave.setFilename(hashcode);                  
            }

            // create acquisition
            tosave.setContributor( getContributor() );
            tosave.setDevice(device);
            
            if( experiment_step!=null ) {
                tosave.setExperiment(experiment_step.getExperiment());
                tosave.setTechnique(experiment_step.getTechnique());
            } else {
                tosave.setTechnique(Technique.lookupAbbrev("ms"));
            }

            // add biological context to acquisition
            if( glycanSequenceContext !=null ) {
                tosave.addBiologicalContext(glycanSequenceContext.getBiologicalContext());
                glycanSequenceContext.getGlycanSequence().addEvidence(tosave);
            }

            // store data
            // System.out.println("CreateAcquisition date " + tosave.getDateObtained());
            Eurocarb.getEntityManager().store(tosave);  
            
            // add evidence to experiment step
            if( experiment_step!=null ) {
                experiment_step.setEvidence( tosave );        
                Eurocarb.getEntityManager().update(experiment_step);
            }

            acquisition = tosave;
            return "success";
        } else if( submitAction.equals("Back") ) {
            return "back";
        } else if( submitAction.equals("Cancel") ){
            return "cancel";            
        }
            
           
        return "input";
    }      

    
    private void parseScans(Acquisition dest, File _file) throws Exception
    {
        
        // read file
        org.systemsbiology.jrap.MSXMLParser parser 
            = new org.systemsbiology.jrap.MSXMLParser(_file.getAbsolutePath());
        if( parser == null ) 
            throw new Exception("Spectra file format not recognized");
    
        // read a scan from the file
        if( parser.getScanCount()==0 ) 
            throw new Exception("Empty spectra file");

        for( int i=0; i<parser.getScanCount(); i++ ) 
        {
            // System.out.println("--- parseScans: parsing " + i);
            org.systemsbiology.jrap.Scan jrap_scan = parser.rap(i+1); // i+1?
            if( jrap_scan==null )
            throw new Exception("Empty scan " + i);
        
            // create a new scan
            Scan toadd = new Scan();
            toadd.setMsExponent(jrap_scan.getMsLevel());
            toadd.setPolarity(jrap_scan.getPolarity()==null || !jrap_scan.getPolarity().equals("+"));
            toadd.setDeisotoped(jrap_scan.getDeisotoped()==1);
            toadd.setChargeDeconvoluted(jrap_scan.getChargeDeconvoluted()==1);
            toadd.setBasePeakMz(jrap_scan.getBasePeakMz());
            toadd.setBasePeakIntensity(jrap_scan.getBasePeakIntensity());
            toadd.setStartMz(jrap_scan.getStartMz());
            toadd.setEndMz(jrap_scan.getEndMz());
            toadd.setLowMz(jrap_scan.getLowMz());
            toadd.setHighMz(jrap_scan.getHighMz());
            
            toadd.setAcquisition(dest);
            toadd.setPeakProcessing(PeakProcessing.createOrLookup("no processing"));
            dest.getScans().add(toadd);
        }
    }
    
    
} // end class
