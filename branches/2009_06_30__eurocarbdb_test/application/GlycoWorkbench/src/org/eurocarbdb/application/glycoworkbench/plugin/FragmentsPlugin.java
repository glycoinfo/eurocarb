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

import java.util.Collections;
import java.util.Collection;
import java.util.Vector;
import javax.swing.ImageIcon;
import javax.swing.JTabbedPane;
import javax.swing.JOptionPane;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import java.awt.event.KeyEvent;

public class FragmentsPlugin implements Plugin, ActionListener {

    PluginManager theManager = null;
    GlycoWorkbench theApplication = null;
    GlycanWorkspace theWorkspace = null;

    JTabbedPane      theFragmentToolsPane = null;
    FragmentDetailsPanel theFragmentDetailsPanel = null;
    FragmentSummaryPanel theFragmentSummaryPanel = null;
    FragmentEditorPanel  theFragmentEditorPanel = null;

    public FragmentsPlugin() {
        theFragmentDetailsPanel = new FragmentDetailsPanel();
        theFragmentSummaryPanel = new FragmentSummaryPanel();
    theFragmentEditorPanel = new FragmentEditorPanel();

    theFragmentToolsPane = new JTabbedPane();
    theFragmentToolsPane.add("Details", theFragmentDetailsPanel);
    theFragmentToolsPane.add("Summary", theFragmentSummaryPanel);
    theFragmentToolsPane.add("Editor", theFragmentEditorPanel);
    }

    public void init() {
    }

    public void exit() {
    }

    public String getName() {
    return "Fragments";
    }

    public int getMnemonic() {
    return KeyEvent.VK_F;
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
    return theFragmentToolsPane;
    }

    public java.awt.Component getBottomComponent() {
    return null;
    }

    public FragmentDetailsPanel getFragmentDetailsPanel() {
    return theFragmentDetailsPanel;
    }

    public FragmentSummaryPanel getFragmentSummaryPanel() {
    return theFragmentSummaryPanel;
    }

    public FragmentEditorPanel getFragmentEditorPanel() {
    return theFragmentEditorPanel;
    }
    
    public Collection<String> getViews() {
    Vector<String> views = new Vector<String>();
    views.add("Details");
    views.add("Summary");
    views.add("Editor");
    return views;
    }

    public Collection<GlycanAction> getActions() {
    Vector<GlycanAction> actions = new Vector<GlycanAction>();

    actions.add(new GlycanAction("options",FileUtils.getIcon(""),"Set plugin options",KeyEvent.VK_O,"",this));
    actions.add(null);
    actions.add(new GlycanAction("editFragmentsCurrent",FileUtils.getIcon(""),"Edit fragments for current structure",KeyEvent.VK_T,"",this));
    actions.add(new GlycanAction("editFragmentsResidue",FileUtils.getIcon(""),"Show fragments at current residue",KeyEvent.VK_R,"",this));
    actions.add(new GlycanAction("editFragmentsLinkage",FileUtils.getIcon(""),"Show fragments at current linkage",KeyEvent.VK_L,"",this));
    actions.add(null);
    actions.add(new GlycanAction("computeFragmentsCurrent",FileUtils.getIcon(""),"Compute fragments for current structure",KeyEvent.VK_C,"",this));
    actions.add(new GlycanAction("computeFragmentsSelected",FileUtils.getIcon("computefragments"),"Compute fragments for selected structures",KeyEvent.VK_S,"",this));
    actions.add(new GlycanAction("computeFragmentsAll",FileUtils.getIcon(""),"Compute fragments for all structures",KeyEvent.VK_A,"",this));
    
    return actions;
    }

    public Collection<GlycanAction> getToolbarActions() {
    Vector<GlycanAction> actions =  new Vector<GlycanAction>();

    actions.add(new GlycanAction("computeFragmentsSelected",FileUtils.getIcon("computefragments"),"Compute fragments for selected structures",KeyEvent.VK_S,"",this));

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
    theFragmentDetailsPanel.setApplication(application);
    theFragmentSummaryPanel.setApplication(application);
    theFragmentEditorPanel.setApplication(application);
    }
   
    public void setWorkspace(GlycanWorkspace workspace) {
    theWorkspace = workspace;
    theFragmentDetailsPanel.setWorkspace(workspace);    
    theFragmentSummaryPanel.setWorkspace(workspace);
    theFragmentEditorPanel.setWorkspace(workspace);
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
        theFragmentToolsPane.setSelectedComponent(theFragmentDetailsPanel);
    else if( view.equals("Summary") )
        theFragmentToolsPane.setSelectedComponent(theFragmentSummaryPanel);
    else if( view.equals("Editor") )
        theFragmentToolsPane.setSelectedComponent(theFragmentEditorPanel);
    else 
        throw new Exception("Invalid view: " + view);
    }

    public boolean runAction(String action) throws Exception {

    if( action.equals("options") ) 
        return setOptions();

    if( action.equals("editFragmentsCurrent") ) {        
        theApplication.getCanvas().enforceSelection();    
        if( theFragmentEditorPanel.setStructure(theApplication.getCanvas().getCurrentStructure()) ) {
        theManager.show("Fragments","Editor");
        return true;
        }
        return false;
    }
    if( action.equals("editFragmentsResidue") ) {
        if( theFragmentEditorPanel.setStructure(theApplication.getCanvas().getCurrentStructure(),theApplication.getCanvas().getCurrentResidue()) ) {
        theManager.show("Fragments","Editor");
        return true;
        }
        return false;
    }
    if( action.equals("editFragmentsLinkage") ) {
        if( theFragmentEditorPanel.setStructure(theApplication.getCanvas().getCurrentStructure(),theApplication.getCanvas().getCurrentLinkage()) ) {
        theManager.show("Fragments","Editor");
        return true;
        }
        return false;
    }
    
    if( action.equals("computeFragmentsCurrent") ) {
        theApplication.getCanvas().enforceSelection();
        if( computeAllFragments(Collections.singleton(theApplication.getCanvas().getCurrentStructure())) ) {
        theManager.show("Fragments","Details");
        return true;
        }
        return false;
    }
    if( action.equals("computeFragmentsSelected") ) {
        theApplication.getCanvas().enforceSelection();
        if( computeAllFragments(theApplication.getCanvas().getSelectedStructures()) ) {
        theManager.show("Fragments","Details");
        return true;
        }
        return false;
    }
    if( action.equals("computeFragmentsAll") ) {
        if( computeAllFragments(theWorkspace.getStructures().getStructures()) ) {
        theManager.show("Fragments","Details");
        return true;
        }
        return false;
    }

    throw new Exception("Invalid action: " + action);
    }


    public boolean runAction(String action, Object params) throws Exception {
    return runAction(action);
    }

    public void actionPerformed(ActionEvent e) {
    try {
        runAction(GlycanAction.getAction(e));
    }
    catch(Exception ex) {
        LogUtils.report(ex);
    }
    }

    public void updateViews() {
    theFragmentDetailsPanel.updateView();
    theFragmentSummaryPanel.updateView();
    theFragmentEditorPanel.updateView();
    }

    public void updateMasses() {
    }

    // ---- 
    // Actions

    public boolean setOptions() {
    FragmentOptions frag_opt = theWorkspace.getFragmentOptions();
    FragmentOptionsDialog dlg = new FragmentOptionsDialog(theApplication,frag_opt);
    dlg.setVisible(true);     
    if( !dlg.getReturnStatus().equals("OK") )
        return false;    
    return true;
    }
    
    public boolean computeAllFragments(Collection<Glycan> structures) {
    
    if( structures==null || structures.size()==0 )
        return false;    
    
    // show fragments dialog
    FragmentOptions frag_opt = theWorkspace.getFragmentOptions();
    AnnotationOptions ann_opt = theWorkspace.getAnnotationOptions();
    FragmentOptionsDialog dlg = new FragmentOptionsDialog(theApplication,frag_opt);
    dlg.setVisible(true);     
    if( !dlg.getReturnStatus().equals("OK") )
        return false;    

    // create fragmenter
    Fragmenter frag = new Fragmenter(frag_opt);

    // check for linkages
    if( frag.getComputeAFragments() || frag.getComputeXFragments() ) {
        for( Glycan s : structures ) {
        if( !s.checkLinkages() ) {
            if( JOptionPane.showConfirmDialog(theApplication, "Cross ring fragments will not be computed for residues with incomplete linkage or anomeric information. Continue?", "Warning", JOptionPane.YES_NO_OPTION)==JOptionPane.NO_OPTION ) 
            return false;
            else
            break;
        }
        }        
    }

    // halt interactions
    theApplication.haltInteractions();    
    
    // compute fragments
    int no_structures = 0;
    boolean has_fuzzy = false;
    boolean has_not_fuzzy = true;
    FragmentDocument results = new FragmentDocument();
    for( Glycan structure : structures ) {
        if( structure!=null ) {
        no_structures++;
        if( structure.isFuzzy(true) ) 
            has_fuzzy = true;
        else {
            has_not_fuzzy = true;                                  
            results.addFragments(structure,frag.computeAllFragments(structure));
        }
        }
    }
    theWorkspace.getFragments().copy(results);

    // restore interactions
    theApplication.restoreInteractions();
      
    // show fragments
    if( no_structures>0 ) {
        if( has_fuzzy ) {
        if( structures.size()==1 )
            JOptionPane.showMessageDialog(theApplication, "Cannot compute fragments for structures with uncertain terminals", "Error", JOptionPane.ERROR_MESSAGE);
        else if( has_not_fuzzy )
            JOptionPane.showMessageDialog(theApplication, "Cannot compute fragments for some structures with uncertain terminals", "Error", JOptionPane.ERROR_MESSAGE);
        else
            JOptionPane.showMessageDialog(theApplication, "Cannot compute fragments, all structures have uncertain terminals", "Error", JOptionPane.ERROR_MESSAGE);
        }    
    }
    return true;
    }  

}
