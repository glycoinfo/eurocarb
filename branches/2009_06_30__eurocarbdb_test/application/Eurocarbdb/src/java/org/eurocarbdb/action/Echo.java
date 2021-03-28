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
* $Id: Echo.java 1210 2009-06-11 18:13:15Z glycoslave $
* Last changed $Author: glycoslave $
* EUROCarbDB Project
*/
package org.eurocarbdb.action;

import javax.servlet.http.HttpServletRequest;

import org.codehaus.xfire.transport.http.XFireServletController;

import com.opensymphony.webwork.ServletActionContext;

/**
* @author             hirenj
* @version                $Rev: 1210 $
*/
public class Echo extends EurocarbAction {
    private String message = null;
    
    public String execute() {
        if (message == null) {
            HttpServletRequest req = XFireServletController.getRequest();
            if (req == null) {
                req = ServletActionContext.getRequest();
            }
            this.setMessage(req.getRequestURL().toString());
        }
        return EurocarbAction.SUCCESS;
    }
    public String getMessage() {
        return message;
    }
    public void setMessage(String message) {
        this.message = message;
    }
}
