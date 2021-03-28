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
   @author Alessio Ceroni (a.ceroni@imperial.ac.uk)
*/

package org.eurocarbdb.application.glycoworkbench.plugin;

import org.eurocarbdb.application.glycanbuilder.*;

import org.eurocarbdb.application.glycoworkbench.*;

import java.io.*;
import java.util.*;
import java.awt.Component;
import javax.swing.JTabbedPane;
import java.net.URLClassLoader;
import java.net.URL;

public class PluginManager {

    public static final int VIEW_NONE = -1;
    public static final int VIEW_LEFT = 0;
    public static final int VIEW_RIGHT = 1;
    public static final int VIEW_BOTTOM = 2;

    protected JTabbedPane theLeftPane = new JTabbedPane();
    protected JTabbedPane theRightPane = new JTabbedPane();
    protected JTabbedPane theBottomPane = new JTabbedPane();

    protected GlycoWorkbench         theApplication = null;
    protected GlycanWorkspace        theWorkspace = null;
    protected TreeMap<String,Plugin> plugins = new TreeMap<String,Plugin>();

    protected Vector<GlycanAction> ms_peak_actions = new Vector<GlycanAction>();
    protected Vector<GlycanAction> msms_peak_actions = new Vector<GlycanAction>();

    public PluginManager(GlycoWorkbench application, GlycanWorkspace workspace) {
    theApplication = application;
    theWorkspace = workspace;
    
    // add default plugins
    add( new WorkspacePlugin() );
    add( new SpectraPlugin() );
    add( new PeakListPlugin() );
    add( new FragmentsPlugin() );
    add( new AnnotationPlugin() );
    add( new SearchPlugin() );
    add( new NotesPlugin() );
    add( new ProfilerPlugin() );
    add( new PeakFinderPlugin() );
    add( new ReportingPlugin() );
    add( new GAGPlugin() );

    // search for plugins in plugin dir
    searchPlugins(FileUtils.getRootDir() + "/plugins/");

    // init plugins
    for(Plugin p : plugins.values() ) 
        p.init();
    }

    public void setWorkspace(GlycanWorkspace workspace) {
    theWorkspace = workspace;
    for(Plugin p : plugins.values() ) 
        p.setWorkspace(workspace);
    }

    public void exit() {
    for(Plugin p : plugins.values() ) 
        p.exit();
    }

    public Component getLeftComponent() {
    return theLeftPane;
    }

    public Component getRightComponent() {
    return theRightPane;
    }

    public Component getBottomComponent() {
    return theBottomPane;
    }

    public void add(Plugin plugin) {
    if( plugin!=null ) {
        // set workspace
        plugin.setManager(this);
        plugin.setApplication(theApplication);
        plugin.setWorkspace(theWorkspace);

        // add to the list
        plugins.put(plugin.getName(), plugin);

        // add to the tabbed panes
        if( plugin.getLeftComponent()!=null ) 
        theLeftPane.add(plugin.getName(), plugin.getLeftComponent());         
        if( plugin.getRightComponent()!=null ) 
        theRightPane.add(plugin.getName(), plugin.getRightComponent());         
        if( plugin.getBottomComponent()!=null ) 
        theBottomPane.add(plugin.getName(), plugin.getBottomComponent());                 
    }
    }

    public Plugin get(String name) {
    return plugins.get(name);
    }

    public boolean hasPlugin(String name) {
    return ( get(name)!=null );
    }

    public Collection<Plugin> getPlugins() {
    return plugins.values();
    }

    public void show(String pname, String view) throws Exception {    
    Plugin plugin = get(pname);
    if( plugin==null ) 
        throw new Exception("Invalid plugin: " + pname);
 
    if( plugin.getViewPosition(view)==PluginManager.VIEW_LEFT  ) {
        theApplication.showLeftPanels();
        theLeftPane.setSelectedComponent(plugin.getLeftComponent());
    }
    else if( plugin.getViewPosition(view)==PluginManager.VIEW_RIGHT  ) {
        theApplication.showRightPanels();
        theRightPane.setSelectedComponent(plugin.getRightComponent());
    }
    else if( plugin.getViewPosition(view)==PluginManager.VIEW_BOTTOM  ) {
        theApplication.showBottomPanels();
        theBottomPane.setSelectedComponent(plugin.getBottomComponent());
    }           
    
    plugin.show(view);
    }
  
    public void addMsPeakAction(GlycanAction action) {
    if( action!=null )
        ms_peak_actions.add(action);
    }

    public void removeMsPeakAction(GlycanAction action) {
    if( action!=null )
        ms_peak_actions.remove(action);
    }

    public Vector<GlycanAction> getMsPeakActions() {
    return ms_peak_actions;
    }

    public GlycanAction getMsPeakAction(String action_command) {
    for( GlycanAction a : ms_peak_actions ) 
        if( a.getActionCommand().equals(action_command) )
        return a;
    return null;
    }

    public void addMsMsPeakAction(GlycanAction action) {
    if( action!=null )
        msms_peak_actions.add(action);
    }

    public void removeMsMsPeakAction(GlycanAction action) {
    if( action!=null )
        msms_peak_actions.remove(action);
    }

    public Vector<GlycanAction> getMsMsPeakActions() {
    return msms_peak_actions;
    }

    public GlycanAction getMsMsPeakAction(String action_command) {
    for( GlycanAction a : msms_peak_actions ) 
        if( a.getActionCommand().equals(action_command) )
        return a;
    return null;
    }

    public boolean runAction(GlycanAction action, Object params) throws Exception {
    if( action!=null ) {
        Plugin p = (Plugin)action.getMainListener();
        return p.runAction(action.getActionCommand(),params);
    }
    return false;
    }
 
    public boolean runAction(String plugin, String action) throws Exception{    
    Plugin p = get(plugin);
    if( p==null )
        throw new Exception("Invalid plugin: " + plugin);

    return p.runAction(action);
    }
    

    public boolean runAction(String plugin, String action, Object param) throws Exception {
    Plugin p = get(plugin);
    if( p==null )
        throw new Exception("Invalid plugin: " + plugin);

    return p.runAction(action,param);
    }   

    public void updateViews() {
    for( Plugin p : plugins.values() )
        p.updateViews();
    }

    public void updateMasses() {
    for( Plugin p : plugins.values() )
        p.updateMasses();
    }

    public void searchPlugins(String folder) {
    
    File[] jars = null;
    try {
        // open folder
        /*URL folder_url = getClass().getResource(folder);
        if( folder_url==null )
        return;
        System.out.println(folder_url);
        System.out.println(folder_url.toURI());
        File folder_file = new File(folder_url.toURI());
        */
        
        File folder_file = new File(folder);
        if( !folder_file.exists() || !folder_file.isDirectory() )
        return;

        // list jar files
        jars = folder_file.listFiles(new FileFilter() {
            public boolean accept(File pathname) {
            return (pathname.isFile() && pathname.getPath().endsWith(".jar"));
            }        
        });
    
        // find plugins in jar files
        for( int i=0; i<jars.length; i++ ) {
        try {
            URLClassLoader cl = new URLClassLoader(new URL[] {jars[i].toURL()});
            
            // read class name
            InputStream pps = cl.getResourceAsStream("plugin.properties");
            if( pps==null )
            continue;
            
            Properties pp = new Properties();
            pp.load(pps);
            String class_name = pp.getProperty("class");
            
            if( class_name!=null ) {
            // create plugin instance
            Class<?> class_type = cl.loadClass(class_name);
            if( Plugin.class.isAssignableFrom(class_type) ) {
                // add plugin to list
                add( (Plugin)class_type.newInstance() );
            }
            }
        }        
        catch(Exception e) {
            LogUtils.report(e);
        }        
        }
    }
    catch(Exception e) {
        LogUtils.report(e);
    }            
    }

}
