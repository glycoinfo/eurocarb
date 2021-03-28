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
*   Last commit: $Rev: 1239 $ by $Author: hirenj $ on $Date:: 2009-06-23 #$  
*/
// Generated Apr 3, 2007 6:49:17 PM by Hibernate Tools 3.1.0.beta4

package org.eurocarbdb.dataaccess.ms;

//  stdlib imports
import java.util.*;

import org.eurocarbdb.dataaccess.core.GlycanSequence;
import org.eurocarbdb.application.glycanbuilder.TextUtils;

import java.io.Serializable;

//  eurocarb imports
import org.eurocarbdb.dataaccess.BasicEurocarbObject;
import static org.eurocarbdb.dataaccess.Eurocarb.getEntityManager;

/*  class Scan  *//**********************************************
*
*
*/ 
public class Scan extends BasicEurocarbObject implements Serializable 
{


    //~~~~~~~~~~~~~~~~~~~~~~~~~~ FIELDS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//
      
    private int scanId;
      
    private Acquisition acquisition;
      
    private PeakProcessing peakProcessing;  
    
    private ScanImage scanImage;
      
    private int msExponent;
      
    private boolean polarity;
      
    private boolean deisotoped;
      
    private boolean chargeDeconvoluted;
      
    private double basePeakMz;
      
    private double basePeakIntensity;
        
    private double startMz;
      
    private double endMz;
      
    private double lowMz;
      
    private double highMz;
      
    private double contributorQuality;
   
    private Set<SumAverageRelationship> sumAverageRelationshipsForScanId = new HashSet<SumAverageRelationship>(0);
      
    private Set<PeakLabeled> peakLabeleds = new HashSet<PeakLabeled>(0);      
      
    private Set<MsMsRelationship> msMsRelationshipsWithChildren = new HashSet<MsMsRelationship>(0);
      
    private Set<DataProcessing> dataProcessings = new HashSet<DataProcessing>(0);
      
    private Set<SumAverageRelationship> sumAverageRelationshipsForSubsetScanId = new HashSet<SumAverageRelationship>(0);
      
    private Set<MsMsRelationship> msMsRelationshipsWithParents = new HashSet<MsMsRelationship>(0);

    private Set<Annotation> annotations = new HashSet<Annotation>(0);      

    //~~~~~~~~~~~~~~~~~~~~~~~ CONSTRUCTORS ~~~~~~~~~~~~~~~~~~~~~~~~//

    /** Default constructor. */
    public Scan() {}

    /** Minimal constructor */
    public Scan( Acquisition acquisition, PeakProcessing peakProcessing, int msExponent, boolean polarity, boolean deisotoped, boolean chargeDeconvoluted, double basePeakMz, double basePeakIntensity, double startMz, double endMz, double lowMz, double highMz, double contributorQuality ) 
    {
        this.acquisition = acquisition;
        this.peakProcessing = peakProcessing;
        this.msExponent = msExponent;
        this.polarity = polarity;
        this.deisotoped = deisotoped;
        this.chargeDeconvoluted = chargeDeconvoluted;
        this.basePeakMz = basePeakMz;
        this.basePeakIntensity = basePeakIntensity;
        this.startMz = startMz;
        this.endMz = endMz;
        this.lowMz = lowMz;
        this.highMz = highMz;
        this.contributorQuality = contributorQuality;
    }
    
    /** full constructor */
    public Scan( Acquisition acquisition, PeakProcessing peakProcessing, ScanImage scanImage, int msExponent, boolean polarity, boolean deisotoped, boolean chargeDeconvoluted, double basePeakMz, double basePeakIntensity, double startMz, double endMz, double lowMz, double highMz, double contributorQuality, Set<SumAverageRelationship> sumAverageRelationshipsForScanId, Set<PeakLabeled> peakLabeleds, Set<MsMsRelationship> msMsRelationshipsWithChildren, Set<DataProcessing> dataProcessings, Set<SumAverageRelationship> sumAverageRelationshipsForSubsetScanId, Set<MsMsRelationship> msMsRelationshipsWithParents ) 
    {
        this.acquisition = acquisition;
        this.peakProcessing = peakProcessing;
    this.scanImage = scanImage;
    this.msExponent = msExponent;
        this.polarity = polarity;
        this.deisotoped = deisotoped;
        this.chargeDeconvoluted = chargeDeconvoluted;
        this.basePeakMz = basePeakMz;
        this.basePeakIntensity = basePeakIntensity;
        this.startMz = startMz;
        this.endMz = endMz;
        this.lowMz = lowMz;
        this.highMz = highMz;
        this.contributorQuality = contributorQuality;
        this.sumAverageRelationshipsForScanId = sumAverageRelationshipsForScanId;
        this.peakLabeleds = peakLabeleds;
        this.msMsRelationshipsWithChildren = msMsRelationshipsWithChildren;
        this.dataProcessings = dataProcessings;
        this.sumAverageRelationshipsForSubsetScanId = sumAverageRelationshipsForSubsetScanId;
        this.msMsRelationshipsWithParents = msMsRelationshipsWithParents;
    }
    

   
    //~~~~~~~~~~~~~~~~~~~~~~~~~ METHODS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//


    /*  getScanId  *//******************************** 
    *
    */ 
    public int getScanId() 
    {
        return this.scanId;
    }
    
    
    /*  setScanId  *//******************************** 
    *
    */
    public void setScanId( int scanId ) 
    {
        this.scanId = scanId;
    }
    

    /*  getAcquisition  *//******************************** 
    *
    */ 
    public Acquisition getAcquisition() 
    {
        return this.acquisition;
    }
    
    
    /*  setAcquisition  *//******************************** 
    *
    */
    public void setAcquisition( Acquisition acquisition ) 
    {
        this.acquisition = acquisition;
    }
    

    /*  getPeakProcessing  *//******************************** 
    *
    */ 
    public PeakProcessing getPeakProcessing() 
    {
        return this.peakProcessing;
    }
    
    
    /*  setPeakProcessing  *//******************************** 
    *
    */
    public void setPeakProcessing( PeakProcessing peakProcessing ) 
    {
        this.peakProcessing = peakProcessing;
    }
        

    /*  getScanImage  *//******************************** 
    *
    */ 
    public ScanImage getScanImage() 
    {
        return this.scanImage;
    }
    
    
    /*  setScanImage  *//******************************** 
    *
    */
    public void setScanImage( ScanImage scanImage ) 
    {
        this.scanImage = scanImage;
    }

    /*  getMsExponent  *//******************************** 
    *
    */ 
    public int getMsExponent() 
    {
        return this.msExponent;
    }
    
    
    /*  setMsExponent  *//******************************** 
    *
    */
    public void setMsExponent( int msExponent ) 
    {
        this.msExponent = msExponent;
    }
   

    /*  isPolarity  *//******************************** 
    *
    */ 
    public boolean isPolarity() 
    {
        return this.polarity;
    }
       
    
    /*  setPolarity  *//******************************** 
    *
    */
    public void setPolarity( boolean polarity ) 
    {
        this.polarity = polarity;
    }
    

    /*  isDeisotoped  *//******************************** 
    *
    */ 
    public boolean isDeisotoped() 
    {
        return this.deisotoped;
    }
    
    
    /*  setDeisotoped  *//******************************** 
    *
    */
    public void setDeisotoped( boolean deisotoped ) 
    {
        this.deisotoped = deisotoped;
    }
    

    /*  isChargeDeconvoluted  *//******************************** 
    *
    */ 
    public boolean isChargeDeconvoluted() 
    {
        return this.chargeDeconvoluted;
    }
    
    
    /*  setChargeDeconvoluted  *//******************************** 
    *
    */
    public void setChargeDeconvoluted( boolean chargeDeconvoluted ) 
    {
        this.chargeDeconvoluted = chargeDeconvoluted;
    }
    

    /*  getBasePeakMz  *//******************************** 
    *
    */ 
    public double getBasePeakMz() 
    {
        return this.basePeakMz;
    }
    
    
    /*  setBasePeakMz  *//******************************** 
    *
    */
    public void setBasePeakMz( double basePeakMz ) 
    {
        this.basePeakMz = basePeakMz;
    }
    

    /*  getBasePeakIntensity  *//******************************** 
    *
    */ 
    public double getBasePeakIntensity() 
    {
        return this.basePeakIntensity;
    }
    
    
    /*  setBasePeakIntensity  *//******************************** 
    *
    */
    public void setBasePeakIntensity( double basePeakIntensity ) 
    {
        this.basePeakIntensity = basePeakIntensity;
    }
        

    /*  getStartMz  *//******************************** 
    *
    */ 
    public double getStartMz() 
    {
        return this.startMz;
    }
    
    
    /*  setStartMz  *//******************************** 
    *
    */
    public void setStartMz( double startMz ) 
    {
        this.startMz = startMz;
    }
    

    /*  getEndMz  *//******************************** 
    *
    */ 
    public double getEndMz() 
    {
        return this.endMz;
    }
    
    
    /*  setEndMz  *//******************************** 
    *
    */
    public void setEndMz( double endMz ) 
    {
        this.endMz = endMz;
    }
    

    /*  getLowMz  *//******************************** 
    *
    */ 
    public double getLowMz() 
    {
        return this.lowMz;
    }
    
    
    /*  setLowMz  *//******************************** 
    *
    */
    public void setLowMz( double lowMz ) 
    {
        this.lowMz = lowMz;
    }
    

    /*  getHighMz  *//******************************** 
    *
    */ 
    public double getHighMz() 
    {
        return this.highMz;
    }
    
    
    /*  setHighMz  *//******************************** 
    *
    */
    public void setHighMz( double highMz ) 
    {
        this.highMz = highMz;
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
    
 
    /*  getSumAverageRelationshipsForScanId  *//******************************** 
    *
    */ 
    public Set<SumAverageRelationship> getSumAverageRelationshipsForScanId() 
    {
        return this.sumAverageRelationshipsForScanId;
    }
    
    
    /*  setSumAverageRelationshipsForScanId  *//******************************** 
    *
    */
    public void setSumAverageRelationshipsForScanId( Set<SumAverageRelationship> sumAverageRelationshipsForScanId ) 
    {
        this.sumAverageRelationshipsForScanId = sumAverageRelationshipsForScanId;
    }
    

    /*  getPeakLabeleds  *//******************************** 
    *
    */ 
    public Set<PeakLabeled> getPeakLabeleds() 
    {
        return this.peakLabeleds;
    }
    
    public List<PeakLabeled> getPeakLabeledsOrdered() {
    
    List<PeakLabeled> ret = new ArrayList<PeakLabeled>(this.getPeakLabeleds());
    Collections.sort(ret,new PeakLabeledComparator());
    return ret;
    }
    
    /*  setPeakLabeleds  *//******************************** 
    *
    */
    public void setPeakLabeleds( Set<PeakLabeled> peakLabeleds ) 
    {
        this.peakLabeleds = peakLabeleds;
    }           
    

    /*  getDataProcessings  *//******************************** 
    *
    */ 
    public Set<DataProcessing> getDataProcessings() 
    {
        return this.dataProcessings;
    }
    
    
    /*  setDataProcessings  *//******************************** 
    *
    */
    public void setDataProcessings( Set<DataProcessing> dataProcessings ) 
    {
        this.dataProcessings = dataProcessings;
    }
    

    /*  getSumAverageRelationshipsForSubsetScanId  *//******************************** 
    *
    */ 
    public Set<SumAverageRelationship> getSumAverageRelationshipsForSubsetScanId() 
    {
        return this.sumAverageRelationshipsForSubsetScanId;
    }
    
    
    /*  setSumAverageRelationshipsForSubsetScanId  *//******************************** 
    *
    */
    public void setSumAverageRelationshipsForSubsetScanId( Set<SumAverageRelationship> sumAverageRelationshipsForSubsetScanId ) 
    {
        this.sumAverageRelationshipsForSubsetScanId = sumAverageRelationshipsForSubsetScanId;
    }
    

    /*  getMsMsRelationshipsWithParents  *//******************************** 
    *
    */ 
    public Set<MsMsRelationship> getMsMsRelationshipsWithParents() 
    {
        return this.msMsRelationshipsWithParents;
    }
    
    
    /*  setMsMsRelationshipsWithParents  *//******************************** 
    *
    */
    public void setMsMsRelationshipsWithParents( Set<MsMsRelationship> msMsRelationshipsWithParents ) 
    {
        this.msMsRelationshipsWithParents = msMsRelationshipsWithParents;
    }

    /**
     * Return the set of parent scans
     */
    
    public Scan getParentScan() {
    /*HashSet<Scan> ret = new HashSet<Scan>();
    for( MsMsRelationship mmr : getMsMsRelationshipsWithParents() )
    ret.add(mmr.getParentScan());
    return ret;*/
    for( MsMsRelationship mmr : getMsMsRelationshipsWithParents() )
        return mmr.getParentScan(); // return first match
    return null;
    }


    /*  getMsMsRelationshipsWithChildren  *//******************************** 
    *
    */ 
    public Set<MsMsRelationship> getMsMsRelationshipsWithChildren() 
    {
        return this.msMsRelationshipsWithChildren;
    }
    
    
    /*  setMsMsRelationshipsWithChildren  *//******************************** 
    *
    */
    public void setMsMsRelationshipsWithChildren( Set<MsMsRelationship> msMsRelationshipsWithChildren ) 
    {
        this.msMsRelationshipsWithChildren = msMsRelationshipsWithChildren;
    }

    /**
     * Return the set of child scans
     */
    
    public Set<Scan> getChildScans() {
    HashSet<Scan> ret = new HashSet<Scan>();
    for( MsMsRelationship mmr : getMsMsRelationshipsWithChildren() )
        ret.add(mmr.getChildScan());
    return ret;
    }

    public void addMsMsRelationship(Double precursor_mz, Integer precursor_charge, Scan parent) {
    if( parent!=null ) {
        MsMsRelationship mmr = new MsMsRelationship();
        mmr.setChildScan(this);
        mmr.setParentScan(parent);
        if (precursor_mz != null) {
            mmr.setPrecursorMz(precursor_mz);
            mmr.setPrecursorMassWindowLow(precursor_mz);
            mmr.setPrecursorMassWindowHigh(precursor_mz);
        }
        if (precursor_charge != null) {
            mmr.setPrecursorCharge(precursor_charge);
        }
        mmr.setMsMsMethod("");

        this.getMsMsRelationshipsWithParents().add(mmr);
        parent.getMsMsRelationshipsWithChildren().add(mmr);
    }    
    }

       
    /*  getPeakLabeleds  *//******************************** 
    *
    */ 
    public Set<Annotation> getAnnotations() 
    {
        return this.annotations;
    }

    public Annotation getFirstAnnotation() {
    return this.annotations.iterator().next();
    }
    
   
    /*  setAnnotations  *//******************************** 
    *
    */
    public void setAnnotations( Set<Annotation> annotations ) 
    {
        this.annotations = annotations;
    }

} // end class
