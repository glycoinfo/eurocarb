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
*   Last commit: $Rev: 1225 $ by $Author: hirenj $ on $Date:: 2009-06-16 #$  
*/
// Generated Apr 3, 2007 6:49:20 PM by Hibernate Tools 3.1.0.beta4

package org.eurocarbdb.dataaccess.ms;

//  stdlib imports
import java.util.Date;
import java.util.HashSet;
import java.util.Set;
import java.io.Serializable;

//  3rd party imports
import org.apache.log4j.Logger;

//  eurocarb imports
import org.eurocarbdb.dataaccess.BasicEurocarbObject;
import org.eurocarbdb.dataaccess.core.Evidence;
import org.eurocarbdb.dataaccess.core.Contributor;
import static org.eurocarbdb.dataaccess.Eurocarb.getEntityManager;

/*  class Acquisition  *//**********************************************
*
*   Implements a mass-spectrometry spectral acquisition, and is also 
*   the top-level class in the mass-spec experiment hierachy.
*/ 
public class Acquisition extends Evidence implements Serializable 
{
    /** Logging handle. */
    static final Logger log = Logger.getLogger( Acquisition.class );


    //~~~~~~~~~~~~~~~~~~~~~~~~~~ FIELDS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//
      
    private int acquisitionId;

    private Device device;
    
    private String filename;
      
    private String filetype;
      
    private Date dateObtained;
      
    private double contributorQuality;
      
    private Set<Scan> scans = new HashSet<Scan>(0);

    private Set<DeviceSettings> deviceSettingses = new HashSet<DeviceSettings>(0);

    //~~~~~~~~~~~~~~~~~~~~~~~ CONSTRUCTORS ~~~~~~~~~~~~~~~~~~~~~~~~//

    /** Default constructor. */
    public Acquisition() 
    {
        setEvidenceType( Evidence.Type.MS );
    }

    /** Minimal constructor */
    public Acquisition( Device device, String filename, String filetype, double contributorQuality ) 
    {
        this();
        this.device = device;
        // this.contributor = contributor;   
        this.filename = filename;
        this.filetype = filetype;
        this.contributorQuality = contributorQuality;
    }
    
    /** full constructor */
    public Acquisition( Device device, String filename, String filetype, Date dateObtained, double contributorQuality, Set<Scan> scans, Set<DeviceSettings> deviceSettingses  ) 
    {
        this();
        this.device = device; 
        // this.contributor = contributor;     
        this.filename = filename;
        this.filetype = filetype;
        this.dateObtained = dateObtained;
        this.contributorQuality = contributorQuality;
        this.scans = scans;
        this.deviceSettingses = deviceSettingses;    
    }
    

   
    //~~~~~~~~~~~~~~~~~~~~~~~~~ METHODS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//


    /*  getAcquisitionId  *//******************************** 
    *
    */ 
    public int getAcquisitionId() 
    {
        return this.acquisitionId;
    }
    

    /*  getDevice  *//******************************** 
    *
    */ 
    public Device getDevice() 
    {
        return this.device;
    }
    
    
    /*  setDevice  *//******************************** 
    *
    */
    public void setDevice( Device device ) 
    {
        this.device = device;
    }
       

    /** 
    *   Always returns {@link Evidence.Type.MS}. 
    *   @see Evidence.Type
    */
    public Type getEvidenceType()
    {
        return Evidence.Type.MS;   
    }

    
    /*  getFilename  *//******************************** 
    *
    */ 
    public String getFilename() 
    {
        return this.filename;
    }
    
    
    /*  setFilename  *//******************************** 
    *
    */
    public void setFilename( String filename ) 
    {
        this.filename = filename;
    }
    

    /*  getFiletype  *//******************************** 
    *
    */ 
    public String getFiletype() 
    {
        return this.filetype;
    }
    
    
    /*  setFiletype  *//******************************** 
    *
    */
    public void setFiletype( String filetype ) 
    {
        this.filetype = filetype;
    }
    

    /*  getDateObtained  *//******************************** 
    *
    */ 
    public Date getDateObtained() 
    {
        return this.dateObtained;
    }
    
    
    /*  setDateObtained  *//******************************** 
    *
    */
    public void setDateObtained( Date dateObtained ) 
    {
        this.dateObtained = dateObtained;
    }
    

    /*  getContributorQuality  *//******************************** 
    *
    */ 
    public double getContributorQuality() 
    {
        return this.contributorQuality;
    }
    
    
    /*  setContributorQuality  *//******************************** 
    *
    */
    public void setContributorQuality( double contributorQuality ) 
    {
        this.contributorQuality = contributorQuality;
    }
    

    /*  getScans  *//******************************** 
    *
    */ 
    public Set<Scan> getScans() 
    {
        return this.scans;
    }
    
    
    /*  setScans  *//******************************** 
    *
    */
    public void setScans( Set<Scan> scans ) 
    {
        this.scans = scans;
    }
    
    
    /**
       Get top level scans
    */
    public Set<Scan> getRootScans() 
    {
        HashSet<Scan> ret = new HashSet<Scan>();
        for( Scan s : getScans() ) 
        {
            if( s.getParentScan() == null )
                ret.add(s);
        }
        return ret;
    }

       
    /*  getDeviceSettingses  *//******************************** 
    *
    */ 
    public Set<DeviceSettings> getDeviceSettingses() 
    {
        return this.deviceSettingses;
    }
    
    
    /*  setDeviceSettingses  *//******************************** 
    *
    */
    public void setDeviceSettingses( Set<DeviceSettings> deviceSettingses ) 
    {
        this.deviceSettingses = deviceSettingses;
    }
    

    //~~~~~~~~~~~~~~~~~~~~~ PRIVATE METHODS ~~~~~~~~~~~~~~~~~~~~~~~~~
    
    /*  setAcquisitionId  *//******************************** 
    *
    */
    void setAcquisitionId( int acquisitionId ) 
    {
        this.acquisitionId = acquisitionId;
    }

    public static Acquisition lookupById( int id )
    {
        log.debug("looking up acquisition by acquisitionId");
        Object i = getEntityManager()
                  .getQuery( "org.eurocarbdb.dataaccess.ms.Acquisition.BY_ID" )
                  .setParameter("acquisitionId", id )
                  .uniqueResult();

        assert i instanceof Acquisition;
        
        return (Acquisition) i;
    }

} // end class
