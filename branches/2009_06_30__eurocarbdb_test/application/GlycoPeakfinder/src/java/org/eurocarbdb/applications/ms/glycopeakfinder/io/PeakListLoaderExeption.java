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
package org.eurocarbdb.applications.ms.glycopeakfinder.io;

/**
* @author Logan
*
*/
public class PeakListLoaderExeption  extends Exception
{
    private static final long serialVersionUID = 1L;

    private String m_strErrorText = "";
    
    public PeakListLoaderExeption(String a_strErrorText) 
    {
        super(a_strErrorText);
        this.m_strErrorText = a_strErrorText;
    }

    public String getErrorText()
    {
        return this.m_strErrorText;
    }
}
