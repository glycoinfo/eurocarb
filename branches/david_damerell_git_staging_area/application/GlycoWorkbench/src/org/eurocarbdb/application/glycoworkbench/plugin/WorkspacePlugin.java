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
import javax.swing.ImageIcon;

public class WorkspacePlugin implements Plugin{

    PluginManager theManager = null;
    GlycoWorkbench theApplication = null;
    GlycanWorkspace theWorkspace = null;

    WorkspacePanel theWorkspacePanel = null;    
    
    public WorkspacePlugin() {
    theWorkspacePanel = new WorkspacePanel();
    }

    public void init() {
    }

    public void exit() {
    }

    public String getName() {
    return "Workspace";
    }

    public int getMnemonic() {
    return java.awt.event.KeyEvent.VK_W;
    }
    
    public ImageIcon getIcon() {
    return FileUtils.getIcon("");
    }

    public int getViewPosition(String view) {
    return PluginManager.VIEW_LEFT;
    }

    public java.awt.Component getLeftComponent() {
    return theWorkspacePanel;
    }

    public java.awt.Component getRightComponent() {
    return null;
    }

    public java.awt.Component getBottomComponent() {
    return null;
    }
 
    public Collection<String> getViews() {
    return Collections.singleton("Workspace");
    }

    public Collection<GlycanAction> getActions() {
    return new Vector<GlycanAction>();
    }

    public Collection<GlycanAction> getToolbarActions() {
    return new Vector<GlycanAction>();
    }

    public Collection<GlycanAction> getObjectActions(Object prototype, java.awt.event.ActionListener al) {
    Vector<GlycanAction> actions = new Vector<GlycanAction>();
    return actions;
    }

    public void setManager(PluginManager manager) {
    theManager = manager;
    }

    public void setApplication(GlycoWorkbench application) {
    theApplication = application;
    theWorkspacePanel.setApplication(application);
    }
  
    public void setWorkspace(GlycanWorkspace workspace) {
    theWorkspace = workspace;
    theWorkspacePanel.setWorkspace(workspace);
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
    if( !view.equals("Workspace") )
        throw new Exception("Invalid view: " + view);        
    }

    public boolean runAction(String action) throws Exception {
    throw new Exception("Invalid action: " + action);
    }

    public boolean runAction(String action, Object param) throws Exception {
    throw new Exception("Invalid action: " + action);
    }

    public void updateViews() {
    theWorkspacePanel.updateView();
    }

    public void updateMasses() {
    }
}