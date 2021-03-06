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
* 
*/
package org.eurocarbdb.applications.ms.glycopeakfinder.util;

import java.util.Comparator;

import org.eurocarbdb.applications.ms.glycopeakfinder.storage.GPPeak;

/**
* @author Logan
*
*/
public class ComparatorPeak implements Comparator<GPPeak>
{
    /**
     * @see java.util.Comparator#compare(T, T)
     */
    public int compare(GPPeak a_objPeakOne, GPPeak a_objPeakTwo) 
    {
        double t_dDelta = a_objPeakOne.getMZ() - a_objPeakTwo.getMZ(); 
        if ( t_dDelta < 0 )
        {
            return -1;
        }
        if ( t_dDelta > 0 )
        {
            return 1;
        }        
        return 0;
    }
    
}
