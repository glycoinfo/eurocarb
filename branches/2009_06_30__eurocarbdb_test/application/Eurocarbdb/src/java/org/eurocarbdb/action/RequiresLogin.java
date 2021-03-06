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

package org.eurocarbdb.action;

/**
*   This is a 'marker' interface that indicates that usage
*   of this class requires a loggin-in user/contributor.
*   Specifically, it is the presence/absence of this interface
*   that is tested for by the Eurocarb 
*   {@link org.eurocarbdb.dataaccess.AuthenticationInterceptor}. 
*
*   @author mjh
*/
public interface RequiresLogin 
{
}


