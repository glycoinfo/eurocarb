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
* $Id: SoapActions.java 1210 2009-06-11 18:13:15Z glycoslave $
* Last changed $Author: glycoslave $
* EUROCarbDB Project
*/
package org.eurocarbdb.soap.service;

import java.util.Map;

import org.eurocarbdb.action.EurocarbAction;
import org.eurocarbdb.action.core.CreateGlycanSequence;
import org.eurocarbdb.action.core.SearchTaxonomy;
import org.eurocarbdb.action.core.ShowTissueTaxonomy;

/** SoapActions interface
* Public interface to gather actions which are exposed via SOAP. If you need 
* to add a SOAP action to the WSDL, add a method signature here. No body is required
* as long as the method signature accepts only a Map<String,String>, or a 
* EurocarbAction as the parameter. The former method (using a map of values) is
* compatible with using a RPC method to call the SOAP, while the latter method 
* (using a serialised EurocarbAction) is more suited to using the wrapped style
* of SOAP call.
* 
* @author             hirenj
* @version                $Rev: 1210 $
*/
public interface SoapActions {

    /**
     * Runs an action and returns the result.
     * Any interceptors defined for the action will also be run
     * 
     * @param actionName    Action name to run (as listed in the xwork.xml)
     * @param params        Map of parameters to pass to the action
     * @return              The action with results filled in - i.e. the action state post execution.
     */
    public EurocarbAction run_action(String actionName, Map<String,String> params);
    
    /**
     * Runs an action and returns the result.
     * Any interceptors defined for the action will also be run
     * 
     * @param actionName    The webwork alias for the action name - will be used to decide which action to run, as well as the associated interceptors.
     * @param action        An object encapsulating all off the parameters used to run the action
     * @return              The action with results filled in - i.e. the action state post execution.
     */
    public EurocarbAction run_action(String actionName, EurocarbAction action);
    
    /**
     * Run the ShowTissueTaxonomy action
     * 
     * @param params        Parameters to pass to the ShowTissueTaxonomy action for initialisation
     * @return              ShowTissueTaxonomy action object
     */
    public ShowTissueTaxonomy show_tissue_taxonomy(Map<String,String> params);

    /**
     * Run the SearchTaxonomy action
     * 
     * @param params        Parameters to pass to the SearchTaxonomy action for initialisation
     * @return              SearchTaxonomy action object
     */
    public SearchTaxonomy search_taxonomy(Map<String,String> params);
    
    /**
     * Run the CreateGlycanSequence action
     * 
     * @param params        Parameters to pass to the CreateGlycanSequeunce action for initialisation
     * @return              CreateGlycanSequence action object
     */
    public CreateGlycanSequence create_glycan_sequence(Map<String,String> params);
}
