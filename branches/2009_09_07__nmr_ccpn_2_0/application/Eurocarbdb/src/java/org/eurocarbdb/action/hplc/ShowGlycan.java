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
*   Last commit: $Rev: 1549 $ by $Author: glycoslave $ on $Date:: 2009-07-19 #$  
*/
/**
* $Id: ShowGlycan.java 1549 2009-07-19 02:40:46Z glycoslave $
* Last changed $Author: glycoslave $
* EUROCarbDB Project
*/

package org.eurocarbdb.action.hplc;

import java.lang.*;
import java.util.*;


import org.eurocarbdb.action.*;
import org.eurocarbdb.dataaccess.*;
import org.eurocarbdb.dataaccess.hplc.*;

import static org.eurocarbdb.dataaccess.Eurocarb.getEntityManager;
import org.eurocarbdb.dataaccess.EntityManager;

import org.apache.log4j.Logger;

//  eurocarb party imports
import org.eurocarbdb.action.BrowseAction;
import org.eurocarbdb.dataaccess.indexes.Index;
import org.eurocarbdb.dataaccess.indexes.Indexable;
import org.eurocarbdb.dataaccess.indexes.IndexByMostEvidence;
import org.eurocarbdb.dataaccess.indexes.IndexByContributedDate;
import org.eurocarbdb.dataaccess.indexes.IndexByContributorName;
import org.eurocarbdb.dataaccess.core.Contributor;

/**
* @author              matthew    
* @version                $Rev: 1549 $
*/
public class ShowGlycan extends BrowseAction<Glycan> {

    protected static final Logger logger = Logger.getLogger( ShowGlycan.class.getName() );

    private Glycan glycan= null;
    private int searchGlycanId = 0;
    private String imageStyle;
    private int reportId;
    //private List<Report> reportGu;
    //private List<Report> displayReportGu;
    private double reportValue;
    private List<RefLink> stats;
    private List<RefLink> displayStats;
    private List<RefLink> refs;
    private List<RefLink> displayRefs;
    private List<DigestSingle> displayDigestSingle;
    private List<DigestSingle> digestSingleMulti;
    private List<DigestSingle> displayDigestSingleMulti;
    private List<MultistructuresGlycoct> displayMultipleCt;
    private List<MultistructuresGlycoct> multiDigests;
    private List<MultistructuresGlycoct> displayMultiDigests;
    private List<Multipleglycoct> multiDigestsProduct;
    private List<Multipleglycoct> displayMultiDigestsProduct;
    
    
     public Glycan getGlycan() {
        return glycan;
    }
    
    @Override
      public int getTotalResults()
      {
      if ( totalResults <= 0 )
      {
            totalResults = getEntityManager().countAll( Glycan.class );
            logger.debug("calculated totalResults = " + totalResults );
        }

      return totalResults;
        }
 
    public int getGlycanId() { return this.searchGlycanId; }
    public void setGlycanId( int search_glycan_id) {this.searchGlycanId = search_glycan_id; }
 
    public String getImageStyle() { return this.imageStyle;}
    public void setImageStyle( String pic_image_style) {this.imageStyle = pic_image_style;}

    //public Double getReportValue() { return this.reportValue;}
    //public void setReportValue ( Double report_value) { this.reportValue = report_value;}

    //public int getReportId() { return this.reportId;}
    //public void setReportId ( int report_id) { this.reportId = report_id;}

    //public List getDisplayReportGu() { return displayReportGu;}
        
    public List getDisplayStats(){return displayStats;}
    
    public List<RefLink> getQuery() {
        return refs;
    }
    
    public List getDisplayRefs()
    {
        return displayRefs;
    }
    
    public List getDisplayDigestSingle()
    {
            return displayDigestSingle;
    }
    
    public List getDigestSingleMulti()
    {
            return digestSingleMulti;
    }

    public List getMultiDigests()
    {
            return multiDigests;
    }

    public List getDisplayMultiDigests()
    {
            return displayMultiDigests;
    }


     public List getMultiDigestsProduct()
    {
            return multiDigestsProduct;
    }

    public List getDisplayMultiDigestsProduct()
    {
            return displayMultiDigestsProduct;
    }

    public List getDisplayMultipleCt()
    {
        return displayMultipleCt;
    }
    
    public final Class<Glycan> getIndexableType() 
    {
        return Glycan.class;
    }
    
    public String execute() {
                
     EntityManager em = getEntityManager();
     Contributor currentContributor = Eurocarb.getCurrentContributor();


    if( searchGlycanId == 0 ) {
        this.addActionError( "Invalid");
        return INPUT;
    }
/*
        if (reportValue >0 ) {
    reportGu =  Eurocarb.getEntityManager().getQuery("org.eurocarbdb.dataaccess.hplc.Report.ALL_DATA")
            .setParameter("reportId", reportId)
            .setParameter("glycanId", searchGlycanId)
            .list();

    displayReportGu = reportGu;
    
    }
*/    
    logger.info("show stats");
    //get average and td values for glycanId
    stats = Eurocarb.getEntityManager().getQuery("org.eurocarbdb.dataaccess.hplc.RefLink.STATS")
        .setParameter("glycanId", searchGlycanId)
        .list();
 
    displayStats = stats;
    
     glycan = Eurocarb.getEntityManager().lookup( Glycan.class, searchGlycanId );
     
     refs = Eurocarb.getEntityManager().getQuery("org.eurocarbdb.dataaccess.hplc.RefLink.PUBS")
     .setParameter("glycan_id", searchGlycanId)
     .list();
     
     displayRefs = refs;
     
     List<DigestSingle> digestSingle = (List<DigestSingle>)
         Eurocarb.getEntityManager().getQuery("org.eurocarbdb.dataaccess.hplc.DigestSingle.GLYCAN_ENTRY_DIGESTS")
         .setParameter("glycan_id", searchGlycanId)
         .setParameter("glycan_id", searchGlycanId)
         .list();

         displayDigestSingle = digestSingle; 

         List digestSingleMulti =Eurocarb.getEntityManager().getQuery("org.eurocarbdb.dataaccess.hplc.DigestSingle.GLYCAN_ENTRY_DIGESTS_MULTIPLE")
     //  .setParameter("glycan_id", searchGlycanId)
     .setParameter("glycan_id", searchGlycanId)
         .setParameter("glycan_id", searchGlycanId)
         .list();

    displayDigestSingleMulti = digestSingleMulti; 
    
    List<MultistructuresGlycoct> multipleCt = (List<MultistructuresGlycoct>) Eurocarb.getEntityManager().getQuery("org.eurocarbdb.dataaccess.hplc.MultistructuresGlycoct.SELECT_ALL_MULTICT")
    .setParameter("glycan_id", searchGlycanId)
    .list();

    displayMultipleCt = multipleCt;
    
    
         //List multiDigests = Eurocarb.getEntityManager().getQuery("org.eurocarbdb.dataaccess.hplc.Multipleglycoct.SELECT_ALL_MULTICT_DIGESTS")
    List<MultistructuresGlycoct> multiDigests = (List<MultistructuresGlycoct>) Eurocarb.getEntityManager().getQuery("org.eurocarbdb.dataaccess.hplc.MultistructuresGlycoct.SELECT_ALL_MULTICT_DIGESTS")
    .setParameter("glycan_id", searchGlycanId)
    .list();
    int metest = multiDigests.size();
    logger.info("listsizetest" + metest);
    if ( metest > 0) {
    displayMultiDigests = multiDigests;
    }
    if (metest <= 0) {
     //List multiDigestsProduct = Eurocarb.getEntityManager().getQuery("org.eurocarbdb.dataaccess.hplc.Multipleglycoct.SELECT_ALL_MULTICT_DIGESTS_PRODUCT")
    List<MultistructuresGlycoct> multiDigestsProduct = (List<MultistructuresGlycoct>) Eurocarb.getEntityManager().getQuery("org.eurocarbdb.dataaccess.hplc.MultistructuresGlycoct.SELECT_ALL_MULTICT_DIGESTS_PRODUCT")
    .setParameter("glycan_id", searchGlycanId)
    .list();
     displayMultiDigests = multiDigestsProduct;
    }
     
        return SUCCESS;
    }

}

 
