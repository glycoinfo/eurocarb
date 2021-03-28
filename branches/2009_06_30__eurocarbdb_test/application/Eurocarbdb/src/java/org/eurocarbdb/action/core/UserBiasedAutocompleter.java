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
*   Last commit: $Rev: 1168 $ by $Author: glycoslave $ on $Date: 2009-06-05 15:37:51 +0000 (Fri, 05 Jun 2009) $  
*/

package org.eurocarbdb.action.core;

//  3rd party imports 
import org.apache.log4j.Logger;

import java.util.List;

import org.eurocarbdb.dataaccess.Eurocarb;
import org.eurocarbdb.dataaccess.core.*;

import org.eurocarbdb.action.RequiresLogin;
import org.eurocarbdb.action.UserAware;

import static org.eurocarbdb.util.StringUtils.join;

public class UserBiasedAutocompleter extends Autocompleter implements RequiresLogin
{
    private static final Logger log 
        = Logger.getLogger( UserBiasedAutocompleter.class.getName() );

    private Contributor contributor = null;

    public Contributor getContributor()
    {
        Contributor c = Eurocarb.getCurrentContributor();
        assert c != null;
        return c;
    }

    protected void findTaxonomiesMatchingString(String query) {
        for ( Taxonomy tax : getContributor().getMyTaxonomies() ) {
            String resultString = tax.getName()+"\t";
            List<String> synonyms = tax.getSynonyms();
            resultString += synonyms.size() > 0 ? "("+join(",",synonyms)+")" : "";
            if (resultString.toLowerCase().contains(query.toLowerCase())) {
                log.debug("Adding user result "+resultString);
                results.add(resultString+"\tuser");                 
            }
        }
        super.findTaxonomiesMatchingString(query);
    }
    
    protected void findDiseasesMatchingString(String query) {
        for ( Disease disease : getContributor().getMyDiseases() ) {
            String resultString = disease.getDiseaseName()+"\t";
            if (resultString.toLowerCase().contains(query.toLowerCase())) {
                log.debug("Adding user result "+resultString);
                results.add(resultString+"\tuser");
            }
        }
        super.findDiseasesMatchingString(query);        
    }

    protected void findTissuesMatchingString(String query) {
        for ( TissueTaxonomy tissue : getContributor().getMyTissueTaxonomies() ) {
            String resultString = tissue.getName()+"\t";
            if (resultString.toLowerCase().contains(query.toLowerCase())) {
                log.debug("Adding user result "+resultString);
                results.add(resultString+"\tuser");
            }
        }
        super.findTissuesMatchingString(query);        
    }
    
}