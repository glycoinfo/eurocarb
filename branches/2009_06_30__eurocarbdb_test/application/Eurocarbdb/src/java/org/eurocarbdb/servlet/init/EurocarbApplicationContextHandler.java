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
* $Id: EurocarbApplicationContextHandler.java 1210 2009-06-11 18:13:15Z glycoslave $
* Last changed $Author: glycoslave $
* EUROCarbDB Project
*/
package org.eurocarbdb.servlet.init;

//  stdlib imports
import java.util.Set;
import java.util.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;

import javax.servlet.ServletContextEvent;
import javax.servlet.ServletContextListener;
import javax.servlet.ServletException;

//  3rd party imports
import org.apache.log4j.Logger;

import org.apache.commons.configuration.ConfigurationUtils;
import org.apache.commons.configuration.ConfigurationException;
import org.apache.commons.configuration.PropertiesConfiguration;
import org.apache.commons.configuration.CompositeConfiguration;

import com.opensymphony.xwork.ActionProxyFactory;
import com.opensymphony.xwork.config.entities.ActionConfig;
import com.opensymphony.webwork.sitegraph.XWorkConfigRetriever;

//  eurocarb imports
// import org.eurocarbdb.soap.SoapEnabledActionProxyFactory;
import org.eurocarbdb.tranche.TrancheAdmin;

import org.eurocarbdb.dataaccess.Eurocarb;
import org.eurocarbdb.dataaccess.EntityManager;

import org.eurocarbdb.dataaccess.core.Contributor;
import org.eurocarbdb.dataaccess.core.GlycanSequence;
import org.eurocarbdb.dataaccess.core.BiologicalContext;
import org.eurocarbdb.dataaccess.core.Reference;
import org.eurocarbdb.dataaccess.core.Evidence;

//  static imports
import static org.eurocarbdb.util.StringUtils.join;
import static org.eurocarbdb.util.StringUtils.CR;

/**
* @author          mjh, hirenj
* @version         $Rev: 1210 $
*/
public class EurocarbApplicationContextHandler implements ServletContextListener 
{
    
    //~~~~~~~~~~~~~~~~~~~~~~ STATIC FIELDS ~~~~~~~~~~~~~~~~~~~~~~~~//

    /** Logging handle. */
    public static final Logger log 
        = Logger.getLogger( EurocarbApplicationContextHandler.class );

    /** Default name of app config file */
    public static final String ECDB_APP_PROPERTIES_FILE = "eurocarbdb-application.properties";
    
    
    //~~~~~~~~~~~~~~~~~~~~~~~~~~ FIELDS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//
    
    
    //~~~~~~~~~~~~~~~~~~~~~~~~~~ METHODS ~~~~~~~~~~~~~~~~~~~~~~~~~~//

    /* (non-Javadoc)
    * @see javax.servlet.ServletContextListener#contextInitialized(javax.servlet.ServletContextEvent)
    */
    public void contextInitialized(ServletContextEvent arg0) 
    {
        initConfig();
        
        // initSoapHandler();
        
        startTrancheIfNeeded();
        
        checkDataStore();
        
        checkActions();
    }

    
    /* (non-Javadoc)
    * @see javax.servlet.ServletContextListener#contextDestroyed(javax.servlet.ServletContextEvent)
    */
    public void contextDestroyed(ServletContextEvent arg0) 
    {
        stopTrancheIfNeeded();
    }
        
    //~~~~~~~~~~~~~~~~~~~~~~~~ PRIVATE METHODS ~~~~~~~~~~~~~~~~~~~~//
    
    /**
    *   Iterates through the list of all currently known actions
    *   and checks that the action class is loadable.
    */
    void checkActions()
    {
        log.debug("checking actions...");
        
        StringBuilder sb = new StringBuilder();
        
        //  get current webwork config
        Set<String> namespaces = (Set<String>) XWorkConfigRetriever.getNamespaces();
        Set<String> action_names;

        for ( String ns : namespaces )
        {
            action_names = (Set<String>) XWorkConfigRetriever.getActionNames( ns );
            sb.append( 
                "    namespace " 
                + (ns.length() > 0 ? ns : '/' ) 
                + " has "
                + action_names.size()
                + " actions\n"
            );
            
            
            List<String> sorted_action_names = new ArrayList( action_names );
            Collections.sort( sorted_action_names );
            
            ActionConfig ac;
            Set<String> result_names;
            for ( String action_name : sorted_action_names )
            {
                ac = XWorkConfigRetriever.getActionConfig( ns, action_name );
                String class_name = ac.getClassName();
                
                //  loading of action classes is somewhat redundant since it 
                //  appears to have already been done in first call to XWorkConfigRetriever
                try {  Class.forName( class_name );  }
                catch ( ClassNotFoundException ex )
                {
                    log.warn(
                        "Couldn't load action class for action '" 
                        + action_name 
                        + "': "
                        , ex 
                    );       
                }
                
                /*
                result_names = (Set<String>) ac.getResults().keySet();
                sb.append(
                    "        "
                    + action_name
                    + " ("
                    + join( ", ", result_names )
                    + ")\n"
                );
                */
            }
        }
        
        log.info( 
            "action config OK:\n" 
            + sb 
        );
        
        return;
    }
    
    
    /**
    *   Checks that it's possible to connect to the (default) data
    *   store, start a transaction, and perform a basic query.
    */
    void checkDataStore()
    {
        log.debug("checking data store exists and is queryable...");
        try
        {
            EntityManager em = Eurocarb.getEntityManager();
            em.beginUnitOfWork();
            
            int count_cb = em.countAll( Contributor.class );
            int count_gs = em.countAll( GlycanSequence.class );
            int count_bc = em.countAll( BiologicalContext.class );
            int count_rf = em.countAll( Reference.class );
            int count_ev = em.countAll( Evidence.class );
            
            em.endUnitOfWork();
            
            log.info(
                join( "\n    "
                    , "data store OK; default data store has:"
                    , count_cb + " contributor(s)"
                    , count_gs + " glycan sequence(s)"
                    , count_bc + " biological context(s)"
                    , count_rf + " reference(s)"
                    , count_ev + " evidence"
                )
            );   
        }
        catch ( org.hibernate.MappingNotFoundException ex )
        {
            log.fatal(
                "Could not query the data store: " + ex 
                + "-- did you perhaps forget to add a new mapping "
                + "file to the hibernate.cfg.xml?"
            );
            throw new RuntimeException( ex );
        }
        catch ( Exception ex )
        {
            log.fatal("Could not query the data store: " + ex );   
            throw new RuntimeException( ex );
        }
    }
    
    
    private void startTrancheIfNeeded()
    {
        if ( Eurocarb.getConfiguration().getBoolean("ecdb.tranche.enabled") ) 
        {
            log.info("starting the Tranche server (set ecdb.tranche.enabled=false to disable)");
            TrancheAdmin.StartServer();
        }  
        else log.debug("Tranche not started (ecdb.tranche.enabled=false)");
    }
    
    
    void stopTrancheIfNeeded()
    {
        if ( Eurocarb.getConfiguration().getBoolean("ecdb.tranche.enabled")) 
        {
            log.info("shutting down the Tranche server");
            TrancheAdmin.StopServer();
        }
    }
    
    
    /**
    *   Loads the main application properties file, given by {@link ECDB_APP_PROPERTIES_FILE}.
    *   Note that core-api properties take precedence over application properties;
    *   ideally there shouldn't be any property name collisions in the first place.
    */
    void initConfig()
    {
        //  need to call getConfiguration before adding our config so 
        //  that core-api config gets initialised and logged first. 
        CompositeConfiguration config = Eurocarb.getConfiguration();
        
        log.info("adding eurocarbdb application configuration: " + ECDB_APP_PROPERTIES_FILE );
        try
        {
            config.addConfiguration( 
                new PropertiesConfiguration( ECDB_APP_PROPERTIES_FILE ) );
        }
        catch ( ConfigurationException ex )
        {
            throw new RuntimeException( ex );
        }
        
        if ( log.isInfoEnabled() )
        {
            log.info(
                "Configured eurocarb-application properties:\n"
                + CR 
                + ConfigurationUtils.toString( config ) 
            );
        }       
    }
    
    
/*    void initSoapHandler()
    {
        log.debug("initialising SOAP handler");
        ActionProxyFactory.setFactory(
                new SoapEnabledActionProxyFactory());
    }
*/
}
