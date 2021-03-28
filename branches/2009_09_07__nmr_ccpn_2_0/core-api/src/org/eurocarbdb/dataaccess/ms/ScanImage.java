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
// Generated Apr 3, 2007 6:49:19 PM by Hibernate Tools 3.1.0.beta4

package org.eurocarbdb.dataaccess.ms;

//  stdlib imports

import java.io.Serializable;

//  3rd party imports
import org.apache.log4j.Logger;

//  eurocarb imports
import org.eurocarbdb.dataaccess.BasicEurocarbObject;
import static org.eurocarbdb.dataaccess.Eurocarb.getEntityManager;

/*  class ScanImage  *//**********************************************
*
*
*/ 
public class ScanImage extends BasicEurocarbObject implements Serializable 
{
    /** Logging handle. */
    static final Logger log = Logger.getLogger( ScanImage.class );

    //~~~~~~~~~~~~~~~~~~~~~~~~~~ FIELDS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//
      
    private int scanImageId;
      
    private Scan scan;

    private byte[] fullSize;

    private byte[] mediumSize;

    private byte[] thumbnail;

    private byte[] annotationReport;
      

    //~~~~~~~~~~~~~~~~~~~~~~~ CONSTRUCTORS ~~~~~~~~~~~~~~~~~~~~~~~~//

    /** Default constructor. */
    public ScanImage() {}
   
    //~~~~~~~~~~~~~~~~~~~~~~~~~ METHODS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//


    /*  getScanImageId  *//******************************** 
    *
    */ 
    public int getScanImageId() 
    {
        return this.scanImageId;
    }
    
    
    /*  setScanImageId  *//******************************** 
    *
    */
    public void setScanImageId( int scanImageId ) 
    {
        this.scanImageId = scanImageId;
    }
    
    /*  getScan  *//******************************** 
    *
    */ 
    public Scan  getScan() 
    {
        return this.scan;
    }
    
    
    /*  setScan  *//******************************** 
    *
    */
    public void setScan( Scan scan ) 
    {
        this.scan = scan;
    }

    /*  getFullSize  *//******************************** 
    *
    */ 
    public byte[]  getFullSize() 
    {
        return this.fullSize;
    }
    
    
    /*  setFullSize  *//******************************** 
    *
    */
    public void setFullSize( byte[] fullSize ) 
    {
        this.fullSize = fullSize;
    }

    /*  getMediumSize  *//******************************** 
    *
    */ 
    public byte[]  getMediumSize() 
    {
        return this.mediumSize;
    }
    
    
    /*  setMediumSize  *//******************************** 
    *
    */
    public void setMediumSize( byte[] mediumSize ) 
    {
        this.mediumSize = mediumSize;
    }

    /*  getThumbnail  *//******************************** 
    *
    */ 
    public byte[]  getThumbnail() 
    {
        return this.thumbnail;
    }
    
    
    /*  setThumbnail  *//******************************** 
    *
    */
    public void setThumbnail( byte[] thumbnail ) 
    {
        this.thumbnail = thumbnail;
    }
    

    /*  getAnnotationReport  *//******************************** 
    *
    */ 
    public byte[]  getAnnotationReport() 
    {
        return this.annotationReport;
    }
    
    
    /*  setAnnotationReport  *//******************************** 
    *
    */
    public void setAnnotationReport( byte[] annotationReport ) 
    {
        this.annotationReport = annotationReport;
    }
    


} // end class
