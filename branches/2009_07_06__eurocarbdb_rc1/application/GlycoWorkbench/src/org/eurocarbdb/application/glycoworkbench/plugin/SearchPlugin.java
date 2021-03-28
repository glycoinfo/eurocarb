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

import java.util.*;
import javax.swing.*;
import java.awt.event.*;

public class SearchPlugin implements Plugin {

    protected PluginManager theManager = null;
    protected GlycoWorkbench theApplication = null;
    protected GlycanWorkspace theWorkspace = null;

    protected JTabbedPane theSearchPane = null;
    protected SearchDetailsPanel theSearchDetailsPanel = null;
    protected SearchSummaryPanel theSearchSummaryPanel = null;
    
    public SearchPlugin() {

    theSearchDetailsPanel = new SearchDetailsPanel();
    theSearchSummaryPanel = new SearchSummaryPanel();

    theSearchPane = new JTabbedPane();
    theSearchPane.add("Details", theSearchDetailsPanel);
    theSearchPane.add("Summary", theSearchSummaryPanel);
    }
        
    public SearchDetailsPanel getSearchDetailsPanel() {
    return theSearchDetailsPanel;
    }

    public SearchSummaryPanel getSearchSummaryPanel() {
    return theSearchSummaryPanel;
    }
   
    public void init() {
    }

    public void exit() {
    }

    public String getName() {
    return "Search";
    }

    public int getMnemonic() {
    return java.awt.event.KeyEvent.VK_H;
    }

    public ImageIcon getIcon() {
    return FileUtils.getIcon("");
    }

    public int getViewPosition(String view) {
    return PluginManager.VIEW_RIGHT;
    }

    public java.awt.Component getLeftComponent() {
    return null;
    }

    public java.awt.Component getRightComponent() {
    return theSearchPane;
    }

    public java.awt.Component getBottomComponent() {
    return null;
    }
    
    public Collection<String> getViews() {
    Vector<String> views = new Vector<String>();
    views.add("Details");
    views.add("Summary");
    return views;
    }

    public Collection<GlycanAction> getActions() {
    Vector<GlycanAction> actions = new Vector<GlycanAction>();
    return actions;
    }

    public Collection<GlycanAction> getToolbarActions() {
    Vector<GlycanAction> actions = new Vector<GlycanAction>();
    return actions;
    }

    public Collection<GlycanAction> getObjectActions(Object prototype, ActionListener al) {
    Vector<GlycanAction> actions = new Vector<GlycanAction>();
    return actions;
    }
    
    public void setManager(PluginManager manager) {
    theManager = manager;
    }

    public void setApplication(GlycoWorkbench application) {
    theApplication = application;
    theSearchDetailsPanel.setApplication(application);
    theSearchSummaryPanel.setApplication(application);
    }
   
    public void setWorkspace(GlycanWorkspace workspace) {
    theWorkspace = workspace;
    theSearchDetailsPanel.setWorkspace(workspace);
    theSearchSummaryPanel.setWorkspace(workspace);
    }
   

    public  PluginManager getManager() {
    return theManager;
    }

    public  GlycoWorkbench getApplication() {
    return theApplication;
    }

    public  GlycanWorkspace getWorkspace() {
    return theWorkspace;
    }  

    public void show(String view) throws Exception {
    if( view.equals("Details") )
        theSearchPane.setSelectedComponent(theSearchDetailsPanel);
    else if( view.equals("Summary") )
        theSearchPane.setSelectedComponent(theSearchSummaryPanel);    
    else
        throw new Exception("Invalid view: " + view);
    }

    public boolean runAction(String action, Object params) throws Exception{
    throw new Exception("Invalid action: " + action);        
    }

    public boolean runAction(String action) throws Exception{
    throw new Exception("Invalid action: " + action);        
    }

    public void updateViews() {
    theSearchDetailsPanel.updateView();
    theSearchSummaryPanel.updateView();
    }

    public void updateMasses() {
    }

  
}
