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
* $Id: Column.java 1210 2009-06-11 18:13:15Z glycoslave $
* Last changed $Author: glycoslave $
* EUROCarbDB Project
*/
package org.eurocarbdb.action.hplc;

import org.eurocarbdb.action.EurocarbAction;
import org.eurocarbdb.dataaccess.EntityManager;

//  static imports
import static org.eurocarbdb.dataaccess.Eurocarb.getEntityManager;
//
//3rd party imports
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory; 

/**
* @author             hirenj
* @version                $Rev: 1210 $
*/
public class Column extends EurocarbAction {

protected static final Log log = LogFactory.getLog( Column.class );

    private Column column = null;
    private int myVariable;
    String emptystring = "empty";

    public String execute() {


        if (this.getMyVariable() > 0) {
        column = getEntityManager().lookup( Column.class, myVariable );

            return this.SUCCESS;
        } else {
            return this.INPUT;
        }
    }

    public int getMyVariable() {


//       if (myVariable == null) { myVariable = emptystring;}
//         //     return myVariable;
      return myVariable;
                     }

   public void setMyVariable(int myVariable) {
       this.myVariable = myVariable;
   }



}
