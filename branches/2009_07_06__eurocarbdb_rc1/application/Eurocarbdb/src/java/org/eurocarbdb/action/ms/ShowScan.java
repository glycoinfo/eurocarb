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
*   Last commit: $Rev: 1506 $ by $Author: glycoslave $ on $Date:: 2009-07-13 #$  
*/
/**
* $Id: ShowScan.java 1506 2009-07-13 17:51:41Z glycoslave $
* Last changed $Author: glycoslave $
* EUROCarbDB Project
*/

package org.eurocarbdb.action.ms;

import org.eurocarbdb.action.*;
import org.eurocarbdb.dataaccess.*;
import org.eurocarbdb.dataaccess.ms.*;

import java.util.Map;

import org.apache.log4j.Logger;

/**
* @author             aceroni
* @version                $Rev: 1506 $
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

    public void setParameters(Map params)
    {   

        annotation = getObjectFromParams(Annotation.class, params, "annotation.annotationId");
        
        if (params.get("scan.scanId") == null && params.get("scanId") != null) {
            params.put("scan.scanId",params.get("scanId"));
        }

        if ( annotation == null ) {
            scan = getObjectFromParams(Scan.class, params);
        }
                        
        super.setParameters(params);
    }

    public String execute() throws Exception {
        return SUCCESS;
    }

}
