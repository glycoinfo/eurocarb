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
/**
* $Id: ShowScan.java 1210 2009-06-11 18:13:15Z glycoslave $
* Last changed $Author: glycoslave $
* EUROCarbDB Project
*/

package org.eurocarbdb.action.ms;

import org.eurocarbdb.action.*;
import org.eurocarbdb.dataaccess.*;
import org.eurocarbdb.dataaccess.ms.*;

import java.util.Set;
import java.util.TreeSet;

import org.apache.log4j.Logger;

/**
* @author             aceroni
* @version                $Rev: 1210 $
*/
public class ShowScan extends EurocarbAction {

    protected static final Logger log = Logger.getLogger( ShowScan.class.getName() );

    private Scan scan = null;

    private int scan_id = -1;
    private Annotation annotation = null;
    private int annotation_index = -1;
    
    public Scan getScan() {      
    return scan;  
    }

    public void setScan(Scan s) {      
    scan = s;  
    }

    public int getScanId() {
        return scan_id;
    }

    public void setScanId(int _id) {
        this.scan_id = _id;
    }

    public Annotation getAnnotation() {
        return annotation;
    }

    public void setAnnotation(Annotation annotation) {
        this.annotation = annotation;
    }


    public int getAnnotationIndex() {
        return annotation_index;
    }

    public void setAnnotationIndex(int index) {
        annotation_index = index;
    }

    public String execute() throws Exception {
    if( submitAction.equals("Back") ) 
        return "back";        
    
    if( scan_id<=0 ) {
        this.addActionError( "Invalid scan id " + scan_id);
        return ERROR;
    }

    scan = Eurocarb.getEntityManager().lookup( Scan.class, scan_id );
    if ( scan == null ) {
        log.info( "No scan associated with id " + scan_id );
        this.addActionError( "No scan associated with id " + scan_id );
            return ERROR;        
    }

    // select annotations
    if( submitAction.equals("Show previous") ) 
        annotation_index--;
        else if( submitAction.equals("Show next") ) 
        annotation_index++;
    
    annotation_index = Math.max(0,Math.min(annotation_index,scan.getAnnotations().size()-1));
    annotation = getAnnotation(scan,annotation_index);
        return SUCCESS;
    }

    static private Annotation getAnnotation(Scan scan, int ind) {
        if( ind<0 || ind>=scan.getAnnotations().size() )
        return null;

        int count = 0;
        Eurocarb.getEntityManager().refresh(scan);
        for( Annotation a : scan.getAnnotations() ) {
            if( ind == count )
                return a;
            count ++;
        }
    return null;
    }

}
