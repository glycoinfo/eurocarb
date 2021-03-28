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
*   Last commit: $Rev: 1304 $ by $Author: hirenj $ on $Date:: 2009-06-28 #$  
*/
// Generated Apr 3, 2007 6:49:20 PM by Hibernate Tools 3.1.0.beta4

package org.eurocarbdb.dataaccess.ms;

//  stdlib imports
import java.util.HashSet;
import java.util.Set;

import java.io.Serializable;

//  eurocarb imports
import org.eurocarbdb.dataaccess.BasicEurocarbObject;
import static org.eurocarbdb.dataaccess.Eurocarb.getEntityManager;

/*  class PeakLabeled  *//**********************************************
*
*
*/ 
public class PeakLabeled extends BasicEurocarbObject implements Serializable 
{


    //~~~~~~~~~~~~~~~~~~~~~~~~~~ FIELDS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//
      
    private int peakLabeledId;
      
    private Scan scan;
      
    private double mzValue;
      
    private double intensityValue;
      
    private boolean monoisotopic;
      
    private int chargeCount;
      
    private double fwhm;
      
    private Double signalToNoise;
      
    private double contributorQuality;
      
    private Set<PeakAnnotation> peakAnnotations = new HashSet<PeakAnnotation>(0);


    //~~~~~~~~~~~~~~~~~~~~~~~ CONSTRUCTORS ~~~~~~~~~~~~~~~~~~~~~~~~//

    /** Default constructor. */
    public PeakLabeled() {}

    /** Minimal constructor */
    public PeakLabeled( Scan scan, double mzValue, double intensityValue, boolean monoisotopic, int chargeCount, double fwhm, double contributorQuality ) 
    {
        this.scan = scan;
        this.mzValue = mzValue;
        this.intensityValue = intensityValue;
        this.monoisotopic = monoisotopic;
        this.chargeCount = chargeCount;
        this.fwhm = fwhm;
        this.contributorQuality = contributorQuality;
    }
    
    /** full constructor */
    public PeakLabeled( Scan scan, double mzValue, double intensityValue, boolean monoisotopic, int chargeCount, double fwhm, Double signalToNoise, double contributorQuality, Set<PeakAnnotation> peakAnnotations ) 
    {
        this.scan = scan;
        this.mzValue = mzValue;
        this.intensityValue = intensityValue;
        this.monoisotopic = monoisotopic;
        this.chargeCount = chargeCount;
        this.fwhm = fwhm;
        this.signalToNoise = signalToNoise;
        this.contributorQuality = contributorQuality;
        this.peakAnnotations = peakAnnotations;
    }
    

   
    //~~~~~~~~~~~~~~~~~~~~~~~~~ METHODS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//

    public int hashCode()
    {
        return scan.hashCode() *
               new Double(mzValue).hashCode() *
               new Double(intensityValue).hashCode();
    }

    public boolean equals(Object o)
    {
        if((o == null) || (o.getClass() != this.getClass())) return false;

        if (this == o) {
            return true;
        }

        PeakLabeled other = (PeakLabeled) o;
        return  this.mzValue == other.getMzValue() &&
                this.intensityValue == other.getIntensityValue();
    }

    /*  getPeakLabeledId  *//******************************** 
    *
    */ 
    public int getPeakLabeledId() 
    {
        return this.peakLabeledId;
    }
    
    
    /*  setPeakLabeledId  *//******************************** 
    *
    */
    public void setPeakLabeledId( int peakLabeledId ) 
    {
        this.peakLabeledId = peakLabeledId;
    }
    

    /*  getScan  *//******************************** 
    *
    */ 
    public Scan getScan() 
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
    

    /*  getMzValue  *//******************************** 
    *
    */ 
    public double getMzValue() 
    {
        return this.mzValue;
    }
    
    
    /*  setMzValue  *//******************************** 
    *
    */
    public void setMzValue( double mzValue ) 
    {
        this.mzValue = mzValue;
    }
    

    /*  getIntensityValue  *//******************************** 
    *
    */ 
    public double getIntensityValue() 
    {
        return this.intensityValue;
    }
    
    
    /*  setIntensityValue  *//******************************** 
    *
    */
    public void setIntensityValue( double intensityValue ) 
    {
        this.intensityValue = intensityValue;
    }
    

    /*  isMonoisotopic  *//******************************** 
    *
    */ 
    public boolean isMonoisotopic() 
    {
        return this.monoisotopic;
    }
    
    
    /*  setMonoisotopic  *//******************************** 
    *
    */
    public void setMonoisotopic( boolean monoisotopic ) 
    {
        this.monoisotopic = monoisotopic;
    }
    

    /*  getChargeCount  *//******************************** 
    *
    */ 
    public int getChargeCount() 
    {
        return this.chargeCount;
    }
    
    
    /*  setChargeCount  *//******************************** 
    *
    */
    public void setChargeCount( int chargeCount ) 
    {
        this.chargeCount = chargeCount;
    }
    

    /*  getFwhm  *//******************************** 
    *
    */ 
    public double getFwhm() 
    {
        return this.fwhm;
    }
    
    
    /*  setFwhm  *//******************************** 
    *
    */
    public void setFwhm( double fwhm ) 
    {
        this.fwhm = fwhm;
    }
    

    /*  getSignalToNoise  *//******************************** 
    *
    */ 
    public Double getSignalToNoise() 
    {
        return this.signalToNoise;
    }
    
    
    /*  setSignalToNoise  *//******************************** 
    *
    */
    public void setSignalToNoise( Double signalToNoise ) 
    {
        this.signalToNoise = signalToNoise;
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
    

    /*  getPeakAnnotations  *//******************************** 
    *
    */ 
    public Set<PeakAnnotation> getPeakAnnotations() 
    {
        return this.peakAnnotations;
    }
    
    
    /*  setPeakAnnotations  *//******************************** 
    *
    */
    public void setPeakAnnotations( Set<PeakAnnotation> peakAnnotations ) 
    {
        this.peakAnnotations = peakAnnotations;
    }
    
} // end class
