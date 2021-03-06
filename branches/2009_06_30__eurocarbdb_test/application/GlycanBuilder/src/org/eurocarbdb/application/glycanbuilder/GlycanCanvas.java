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

package org.eurocarbdb.application.glycanbuilder;

import java.util.*;
import java.text.*;
import java.io.*;
import java.awt.*;
import java.awt.geom.*;
import java.awt.event.*;
import java.awt.datatransfer.*;
import java.awt.image.*;
import java.awt.print.*;
import javax.swing.*;
import javax.swing.border.*;

import static org.eurocarbdb.application.glycanbuilder.Geometry.*; 

/**
   A component that implement a visual editor of glycan
   structures. Multiple structures can be created in the same editor.
   The structures are displayed using the settings specified by the
   current {@link GraphicOptions}. The actions to create and modify
   the structures can be accessed by toolbars menus that should be
   added to the application frame. The default toolbars and menus can
   be retrieved using: {@link #getToolBarDocument}, {@link
   #getToolBarStructure}, {@link #getToolBarProperties}, {@link
   #getEditMenu}, {@link #getStructureMenu} and {@link #getViewMenu}.
   Listeners can be registered to react to changes in the structures
   (through the underlying {@link GlycanDocument}) and in the
   selections.

   @see GlycanDocument
   @see GlycanRenderer

   @author Alessio Ceroni (a.ceroni@imperial.ac.uk)
*/

public class GlycanCanvas extends JComponent implements ActionListener, BaseDocument.DocumentChangeListener, ResidueHistory.Listener, Printable, MouseListener, MouseMotionListener {

    // Classes

    /**
       Interface that should be implemented by all objects that want
       to be notified when the selection is changed
     */
    public interface SelectionChangeListener {    
    /**
       Called by the component when the selection is changed
     */
    public void selectionChanged(SelectionChangeEvent e);    
    }

    /**
       Contains the information about a selection change event
     */
    public static class SelectionChangeEvent {
    private GlycanCanvas src;

    /**
       Default constructor
       @param _src the source of the event
     */
    public SelectionChangeEvent(GlycanCanvas _src) {
        src = _src;
    }

    /**
       Return the source of the event
     */
    public GlycanCanvas getSource() {
        return src;
    }       
    }

    // -----------

    protected static final long serialVersionUID = 0L;    
    protected GlycanCanvas this_object = null;

    // singletons
    protected JFrame theParent = null;
    protected BuilderWorkspace theWorkspace = null;
    protected GlycanDocument theDoc = null;
    protected ActionManager theActionManager;  

    // graphic objects
    protected JScrollPane theScrollPane = null;
    protected JToolBar theToolBarDocument;
    protected JToolBar theToolBarStructure;
    protected JToolBar theToolBarProperties;
   
    protected JComboBox field_anomeric_state;
    protected JComboBox field_anomeric_carbon;
    protected DropDownList field_linkage_position;
    protected JComboBox field_chirality;
    protected JComboBox field_ring_size;
    protected JCheckBox field_second_bond;
    protected JComboBox field_second_child_position;
    protected DropDownList field_second_parent_position;

    // menus
    protected JMenu theEditMenu = null;
    protected JMenu theStructureMenu = null;
    protected JMenu theViewMenu = null;

    protected JCheckBoxMenuItem show_redend_canvas_button = null;
  
    protected int recent_residues_index = -1;
    protected int no_recent_residues_buttons = 0;

    protected ButtonGroup display_button_group = null;
    protected HashMap<String,ButtonModel> display_models = null;  

    // selection
    protected Residue current_residue;
    protected Linkage current_linkage;
    protected HashSet<Residue> selected_residues;
    protected HashSet<Linkage> selected_linkages;

    // painting
    protected GlycanRenderer  theGlycanRenderer;
    protected Rectangle       all_structures_bbox;
    protected BBoxManager     theBBoxManager;
    protected PositionManager thePosManager;
    protected boolean         is_printing;
    
    protected JLabel sel_label = new JLabel();

    // events
    private boolean ignore_actions = false;
 
    protected Point mouse_start_point = null;
    protected Point mouse_end_point = null;
    
    // DnD

    protected boolean is_dragndrop = false;
    protected boolean was_dragged = false;
    protected Cursor dndcopy_cursor = null;
    protected Cursor dndmove_cursor = null;
    protected Cursor dndnocopy_cursor = null;
    protected Cursor dndnomove_cursor = null;

    // 
    protected Vector<SelectionChangeListener> listeners;

    //---------
    // construction    

    /**
       Default constructor
       @param parent the parent frame
       @param _workspace the workspace containing all documents and
       options
     */
    public GlycanCanvas(JFrame parent, BuilderWorkspace _workspace) {
    // init
    this_object = this;
    theParent = parent;
    theWorkspace = _workspace;
    theDoc = theWorkspace.getStructures();
    theDoc.addDocumentChangeListener(this);
    theActionManager = new ActionManager();

    current_residue = null;
    current_linkage = null;
    selected_residues = new HashSet<Residue>();
    selected_linkages = new HashSet<Linkage>();

    theGlycanRenderer = theWorkspace.getGlycanRenderer();
    thePosManager  = new PositionManager();
    theBBoxManager = new BBoxManager();
    all_structures_bbox = null;
    is_printing = false;

    // initialize the action set
    createActions();

    // create toolbars
    theToolBarDocument = createToolBarDocument();
    theToolBarStructure = createToolBarStructure();
    theToolBarProperties = createToolBarProperties();

    // create menus
    theEditMenu = createEditMenu();
    theStructureMenu = createStructureMenu();
    theViewMenu = createViewMenu();

    // set the canvas 
    this.setOpaque(true);
    this.setBackground(Color.white);

    // load DnD cursors
    dndcopy_cursor = FileUtils.createCursor("dnd-copy");
    dndnocopy_cursor = FileUtils.createCursor("dnd-nocopy");
    dndmove_cursor = FileUtils.createCursor("dnd-move");
    dndnomove_cursor = FileUtils.createCursor("dnd-nomove");

    // init events
    theWorkspace.getResidueHistory().addHistoryChangedListener(this);
    theDoc.addDocumentChangeListener(this);
    addMouseMotionListener( this );
    addMouseListener( this ); 

    listeners = new Vector<SelectionChangeListener>();
    }

    /**
       Set the underlying document containing the glycan structures
       that are being created and modified
     */
    public void setDocument(GlycanDocument doc) {
    if( theDoc!=null )
        theDoc.removeDocumentChangeListener(this);

    theDoc = doc;

    if( theDoc!=null )
        theDoc.addDocumentChangeListener(this);

    resetSelection();
    repaint();
    }

    /**
       Return the underlying document containing the glycan structures
       that are being created and modified
     */
    public GlycanDocument getDocument() {
    return theDoc;
    }

    /**
       Return the action manager
     */
    public ActionManager getActionManager() {
    return theActionManager;
    }

    /**
       Return the object that is used to render the structures
     */
    public GlycanRenderer getGlycanRenderer() {
    return theGlycanRenderer;
    }

 
    /**
       Set the object that is used to render the structures
     */
    public void setGlycanRenderer(GlycanRenderer r) {
    theGlycanRenderer = r;
    }

    /**
       Add a scroll pane to the component
     */
    public void setScrollPane(JScrollPane sp) {
    theScrollPane = sp;
    theScrollPane.getVerticalScrollBar().setUnitIncrement(20);
    theScrollPane.getVerticalScrollBar().setBlockIncrement(20);
    theScrollPane.getHorizontalScrollBar().setUnitIncrement(10);
    theScrollPane.getHorizontalScrollBar().setBlockIncrement(10);
    }

    /**
       Return the toolbar containing the default actions to create and
       modify the underlying document
     */
    public JToolBar getToolBarDocument() {
    return theToolBarDocument;
    }

    /**
       Return the toolbar containing the default actions to create and
       modify the glycan structures
     */
    public JToolBar getToolBarStructure() {
    return theToolBarStructure;
    }

    /**
       Return the toolbar containing the default actions to change the
       residue properties
     */
    public JToolBar getToolBarProperties() {
    return theToolBarProperties;
    }

    /**
       Return the menu containing the default actions to create and
       modify the underlying document
     */
    public JMenu getEditMenu() {
    return theEditMenu;
    }

    /**
       Return the menu containing the default actions to create and
       modify the glycan structures
     */
    public JMenu getStructureMenu() {
    return theStructureMenu;
    }

    /**
       Return the menu containing the default actions to change the
       graphic options
     */
    public JMenu getViewMenu() {
    return theViewMenu;
    }

    private Icon getOrientationIcon() {
    int orientation = theWorkspace.getGraphicOptions().ORIENTATION;
    if( orientation==GraphicOptions.LR )
        return FileUtils.getIcon("lr");
    if( orientation==GraphicOptions.RL )
        return FileUtils.getIcon("rl");
    if( orientation==GraphicOptions.TB )
        return FileUtils.getIcon("tb");       
    if( orientation==GraphicOptions.BT )
        return FileUtils.getIcon("bt");
    return null;
    } 

    private void createActions() {

    // edit    
    theActionManager.add("undo",FileUtils.getIcon("undo"),"Undo",KeyEvent.VK_U, "ctrl Z",this);
    theActionManager.add("redo",FileUtils.getIcon("redo"),"Redo", KeyEvent.VK_R, "ctrl Y",this);
    theActionManager.add("cut",FileUtils.getIcon("cut"),"Cut",KeyEvent.VK_T, "ctrl X",this);
    theActionManager.add("copy",FileUtils.getIcon("copy"),"Copy",KeyEvent.VK_C, "ctrl C",this);
    theActionManager.add("paste",FileUtils.getIcon("paste"),"Paste", KeyEvent.VK_P, "ctrl V",this);
    theActionManager.add("delete",FileUtils.getIcon("delete"),"Delete",KeyEvent.VK_L, "DELETE",this);

    theActionManager.add("orderstructuresasc",FileUtils.getIcon("orderstructuresasc"),"Sort structures by m/z in ascending order",KeyEvent.VK_A, "",this);
    theActionManager.add("orderstructuresdesc",FileUtils.getIcon("orderstructuresdesc"),"Sort structures by m/z in descending order",KeyEvent.VK_D, "",this);

    theActionManager.add("selectstructure",FileUtils.getIcon("selectstructure"),"Select current structure",KeyEvent.VK_S, "ctrl W",this);
    theActionManager.add("selectall",FileUtils.getIcon("selectall"),"Select all",KeyEvent.VK_A, "ctrl A",this);
    theActionManager.add("selectnone",FileUtils.getIcon("selectnone"),"Select none",KeyEvent.VK_N, "ESCAPE",this);
    theActionManager.add("gotostart",FileUtils.getIcon("gotostart"),"Show beginning of the canvas",KeyEvent.VK_B, "ctrl HOME",this);    
    theActionManager.add("gotoend",FileUtils.getIcon("gotoend"),"Show end of the canvas",KeyEvent.VK_E, "ctrl END",this);
    //theActionManager.add("screenshot",FileUtils.getIcon("screenshot"),"Screenshot",KeyEvent.VK_PRINTSCREEN, "PRINTSCREEN",this);    

    // navigation
    theActionManager.add("navup",FileUtils.getIcon("navup"),"Navigate up",KeyEvent.VK_U,"ctrl UP",this);
    theActionManager.add("navdown",FileUtils.getIcon("navdown"),"Navigate down",KeyEvent.VK_W,"ctrl DOWN",this);
    theActionManager.add("navleft",FileUtils.getIcon("navleft"),"Navigate left",KeyEvent.VK_F,"ctrl LEFT",this);
    theActionManager.add("navright",FileUtils.getIcon("navright"),"Navigate right",KeyEvent.VK_R,"ctrl RIGHT",this);


    // structure

    for(CoreType t : CoreDictionary.getCores() ) 
        theActionManager.add("addstructure=" + t.getName(),null,t.getDescription(),-1,"",this);    
    theActionManager.add("addstructurestr",FileUtils.getIcon(null),"Add structure from string",KeyEvent.VK_S,"",this);
    theActionManager.add("addcomposition",FileUtils.getIcon(null),"Add composition",KeyEvent.VK_C,"",this);


    theActionManager.add("bracket", FileUtils.getIcon("bracket"),"Add bracket",KeyEvent.VK_B,"ctrl B",this);
    theActionManager.add("repeat", FileUtils.getIcon("repeat"),"Add repeating unit",KeyEvent.VK_U,"ctrl R",this);
    theActionManager.add("properties", FileUtils.getIcon("properties"),"Residue properties",KeyEvent.VK_P,"ctrl ENTER",this);    

    theActionManager.add("moveccw",FileUtils.getIcon("moveccw"),"Move residue counter-clockwise",KeyEvent.VK_K,"ctrl shift LEFT",this);
    theActionManager.add("movecw",FileUtils.getIcon("movecw"),"Move residue clockwise",KeyEvent.VK_W,"ctrl shift RIGHT",this);

    theActionManager.add("changeredend",FileUtils.getIcon("changeredend"),"Change reducing end type",KeyEvent.VK_Y,"",this);
    theActionManager.add("massoptstruct",FileUtils.getIcon("massoptstruct"),"Mass options of selected structures",KeyEvent.VK_M,"",this);

    // view
    theActionManager.add("notation=" + GraphicOptions.NOTATION_CFG, null, "CFG notation", KeyEvent.VK_C, "", this);
    theActionManager.add("notation=" + GraphicOptions.NOTATION_CFGBW, null, "CFG black and white notation", KeyEvent.VK_B, "", this);
    theActionManager.add("notation=" + GraphicOptions.NOTATION_CFGLINK, null, "CFG with linkage placement notation", KeyEvent.VK_L, "", this);
    theActionManager.add("notation=" + GraphicOptions.NOTATION_UOXF, null, "UOXF notation", KeyEvent.VK_O, "", this);
    theActionManager.add("notation=" + GraphicOptions.NOTATION_TEXT, null, "Text only notation", KeyEvent.VK_T, "", this);    

    theActionManager.add("display=" + GraphicOptions.DISPLAY_COMPACT, null, "compact view", KeyEvent.VK_O, "", this);
    theActionManager.add("display=" + GraphicOptions.DISPLAY_NORMAL, null, "normal view", KeyEvent.VK_N, "", this);
    theActionManager.add("display=" + GraphicOptions.DISPLAY_NORMALINFO, null, "normal view with linkage info", KeyEvent.VK_I, "", this);
    theActionManager.add("display=" + GraphicOptions.DISPLAY_CUSTOM, null, "custom view with user settings", KeyEvent.VK_U, "", this);

    theActionManager.add("scale=400", null, "400%", -1, "", this);
    theActionManager.add("scale=300", null, "300%", -1, "", this);
    theActionManager.add("scale=200", null, "200%", -1, "", this);
    theActionManager.add("scale=150", null, "150%", -1, "", this);
    theActionManager.add("scale=100", null, "100%", -1, "", this);
    theActionManager.add("scale=67", null, "67%", -1, "", this);
    theActionManager.add("scale=50", null, "50%", -1, "", this);
    theActionManager.add("scale=33", null, "33%", -1, "", this);
    theActionManager.add("scale=25", null, "25%", -1, "", this);

    theActionManager.add("collapsemultipleantennae", null, "Collapse multiple antennae", KeyEvent.VK_A, "", this);
    theActionManager.add("showmassescanvas", null, "Show masses in the drawing canvas", KeyEvent.VK_V, "", this);
    theActionManager.add("showmasses", null, "Show masses when exporting", KeyEvent.VK_M, "", this);
    theActionManager.add("showredendcanvas", null, "Show reducing end indicator in the drawing canvas", KeyEvent.VK_R, "", this);
    theActionManager.add("showredend", null, "Show reducing end indicator when exporting", KeyEvent.VK_E, "", this);

    theActionManager.add("orientation",getOrientationIcon(),"Change orientation",KeyEvent.VK_O,"",this);

    theActionManager.add("displaysettings",FileUtils.getIcon(""),"Change display settings",KeyEvent.VK_D,"",this);

    // help
    theActionManager.add("about",FileUtils.getIcon("about"),"About",KeyEvent.VK_B,"",this);
    
    // structure
    ResidueRenderer rr = theGlycanRenderer.getResidueRenderer();
    for( ResidueType t : ResidueDictionary.allResidues() ) {
        theActionManager.add("change=" + t.getName(),rr.getIcon(t,GraphicOptions.ICON_SIZE_SMALL),t.getDescription(),-1,"",this);        
        if( t.canHaveParent() ) 
        theActionManager.add("add=" + t.getName(),rr.getIcon(t,GraphicOptions.ICON_SIZE_SMALL),t.getDescription(),-1,(t.getToolbarOrder()!=0 ) ?("ctrl " + t.getToolbarOrder()) :"",this);        
        if( t.canHaveParent() && t.canHaveChildren() ) 
        theActionManager.add("insert=" + t.getName(),rr.getIcon(t,GraphicOptions.ICON_SIZE_SMALL),t.getDescription(),-1,"",this);
        if( t.canBeReducingEnd() ) 
        theActionManager.add("redend=" + t.getName(),rr.getIcon(t,GraphicOptions.ICON_SIZE_SMALL),t.getDescription(),-1,"",this);        
    }                   
    }   
    

    private void updateActions() {
    theActionManager.get("undo").setEnabled(theDoc.getUndoManager().canUndo());
    theActionManager.get("redo").setEnabled(theDoc.getUndoManager().canRedo());

    theActionManager.get("cut").setEnabled(hasSelectedResidues());
    theActionManager.get("copy").setEnabled(hasSelectedResidues());
    theActionManager.get("delete").setEnabled(hasSelectedResidues());
    
    theActionManager.get("bracket").setEnabled(hasCurrentResidue());
    theActionManager.get("repeat").setEnabled(hasCurrentResidue());
    theActionManager.get("properties").setEnabled(hasCurrentResidue());
    theActionManager.get("orientation").putValue(Action.SMALL_ICON,getOrientationIcon());

    theActionManager.get("massoptstruct").setEnabled(hasSelection());

    theActionManager.get("moveccw").setEnabled(hasCurrentSelection());
    //theActionManager.get("resetplace").setEnabled(hasCurrentSelection());
    theActionManager.get("movecw").setEnabled(hasCurrentSelection());

    }

    private void updateResidueActions() {
    // structure
    ResidueRenderer rr = theGlycanRenderer.getResidueRenderer();
    for(ResidueType t : ResidueDictionary.allResidues() ) {
        theActionManager.update("add=" + t.getName(),rr.getIcon(t,GraphicOptions.ICON_SIZE_SMALL),t.getDescription(),-1,(t.getToolbarOrder()!=0 ) ?("ctrl " + t.getToolbarOrder()) :"");
        theActionManager.update("insert=" + t.getName(),rr.getIcon(t,GraphicOptions.ICON_SIZE_SMALL),t.getDescription(),-1,"");
        theActionManager.update("redend=" + t.getName(),rr.getIcon(t,GraphicOptions.ICON_SIZE_SMALL),t.getDescription(),-1,"");
    }

    if( theParent!=null )
        theParent.getJMenuBar().updateUI();    
    }

    private String[] toStrings(char[] pos) {
    String[] ret = new String[pos.length];
    for( int i=0; i<pos.length; i++ )
        ret[i] = "" + pos[i];
    return ret;
    }

    private ListModel createPositions(Residue parent) {
    DefaultListModel ret = new DefaultListModel();

    // collect available positions
    char[] par_pos = null;
    if( parent==null || parent.getType().getLinkagePositions().length==0 )
        par_pos = new char[] { '1', '2', '3', '4', '5', '6', '7', '8', '9', 'N' };
    else 
        par_pos = parent.getType().getLinkagePositions();

    // add elements
    ret.addElement("?");    
    for( int i=0; i<par_pos.length; i++ ) 
        ret.addElement("" + par_pos[i]);
    
    return ret;
    }

    private void updateToolbarProperties() {
    
    ignore_actions = true;
    
    Residue current = getCurrentResidue();
    if( current!=null && (!current.isSpecial() || current.isCleavage()) ) {
        Linkage parent_link = current.getParentLinkage();
        
        if( parent_link!=null ) {
        field_linkage_position.setListModel(createPositions(parent_link.getParentResidue()));
        field_second_parent_position.setListModel(createPositions(parent_link.getParentResidue()));
        }

        // enable items
        boolean can_have_parent_linkage = (parent_link!=null && parent_link.getParentResidue()!=null && (parent_link.getParentResidue().isSaccharide() || parent_link.getParentResidue().isBracket() || parent_link.getParentResidue().isRepetition() || parent_link.getParentResidue().isRingFragment()));              

        field_linkage_position.setEnabled(can_have_parent_linkage);
        field_anomeric_state.setEnabled(current.isSaccharide());    
        field_anomeric_carbon.setEnabled(current.isSaccharide());
        field_chirality.setEnabled(current.isSaccharide());
        field_ring_size.setEnabled(current.isSaccharide());
        field_second_bond.setEnabled(can_have_parent_linkage);
        field_second_parent_position.setEnabled(can_have_parent_linkage && parent_link.hasMultipleBonds() );
        field_second_child_position.setEnabled(can_have_parent_linkage && parent_link.hasMultipleBonds() );

        // fill items
        if( parent_link!=null )        
        field_linkage_position.setSelectedValues(toStrings(parent_link.glycosidicBond().getParentPositions()));        
        else
        field_linkage_position.clearSelection();
        field_anomeric_state.setSelectedItem(""+current.getAnomericState());
        field_anomeric_carbon.setSelectedItem(""+current.getAnomericCarbon());
        field_chirality.setSelectedItem(""+current.getChirality());
        field_ring_size.setSelectedItem(""+current.getRingSize());
        if( parent_link!=null ) {
        field_second_bond.setSelected(parent_link.hasMultipleBonds());
        field_second_parent_position.setSelectedValues(toStrings(parent_link.getBonds().get(0).getParentPositions()));
        field_second_child_position.setSelectedItem(""+parent_link.getBonds().get(0).getChildPosition());
        }
        else {
        field_second_bond.setSelected(false);
        field_second_parent_position.clearSelection();
        field_second_child_position.setSelectedItem("?");
        }
    }
    else {
        // reset all
        field_linkage_position.setEnabled(false);
        field_anomeric_state.setEnabled(false);
        field_anomeric_carbon.setEnabled(false);
        field_chirality.setEnabled(false);
        field_ring_size.setEnabled(false);
        field_second_bond.setEnabled(false);
        field_second_parent_position.setEnabled(false);
        field_second_child_position.setEnabled(false);

        // fill items
        field_linkage_position.clearSelection();
        field_anomeric_state.setSelectedItem("?");
        field_anomeric_carbon.setSelectedItem("");
        field_chirality.setSelectedItem("?");
        field_ring_size.setSelectedItem("?");
        field_second_bond.setSelected(false);
        field_second_parent_position.clearSelection();
        field_second_child_position.setSelectedItem("?");
    }

    ignore_actions = false;
    }


    private JMenu createAddStructureMenu() {
    
    JMenu add_menu = new JMenu("Add structure");
    add_menu.setMnemonic(KeyEvent.VK_A);
    add_menu.setIcon(FileUtils.getIcon(""));

    for(String superclass : CoreDictionary.getSuperclasses() ) {
        JMenu class_menu = new JMenu(superclass);        
        for( CoreType t : CoreDictionary.getCores(superclass) ) 
        class_menu.add(theActionManager.get("addstructure=" + t.getName()));        
        if( class_menu.getItemCount()>0 ) 
        add_menu.add(class_menu);
    }

    return add_menu;
    }

    private JMenu createAddResidueMenu() {
    
    JMenu add_menu = new JMenu("Add residue");
    add_menu.setMnemonic(KeyEvent.VK_R);
    add_menu.setIcon(FileUtils.getIcon(""));

    for(String superclass : ResidueDictionary.getSuperclasses() ) {
        JMenu class_menu = new JMenu(superclass);        
        for( ResidueType t : ResidueDictionary.getResidues(superclass) ) {
        if( t.canHaveParent() ) 
            class_menu.add(theActionManager.get("add=" + t.getName()));
        }
        if( class_menu.getItemCount()>0 ) 
        add_menu.add(class_menu);
    }

    return add_menu;
    }

    private JMenu createAddTerminalMenu() {
    
    JMenu add_menu = new JMenu("Add terminal");
    add_menu.setMnemonic(KeyEvent.VK_T);
    add_menu.setIcon(FileUtils.getIcon(""));

    for(String superclass : TerminalDictionary.getSuperclasses() ) {
        JMenu class_menu = new JMenu(superclass);        
        for( TerminalType t : TerminalDictionary.getTerminals(superclass) ) {
        JMenu terminal_menu = new JMenu(t.getDescription());

        JMenuItem nlinked_terminal = new JMenuItem("Unknown linkage");
        nlinked_terminal.setActionCommand("addterminal=" + t.getName());
        nlinked_terminal.addActionListener(this);

        terminal_menu.add(nlinked_terminal);
        for( int l=1; l<9; l++ ) {
            nlinked_terminal = new JMenuItem(l + "-linked");
            nlinked_terminal.setActionCommand("addterminal=" + l + "-" + t.getName());
            nlinked_terminal.addActionListener(this);
            terminal_menu.add(nlinked_terminal);
        }
        class_menu.add(terminal_menu);
        }
        if( class_menu.getItemCount()>0 ) 
        add_menu.add(class_menu);
    }

    return add_menu;
    }
   

    private JMenu createInsertResidueMenu() {
    
    JMenu insert_menu = new JMenu("Insert residue before");
    insert_menu.setMnemonic(KeyEvent.VK_I);
    insert_menu.setIcon(FileUtils.getIcon(""));

    for(String superclass : ResidueDictionary.getSuperclasses() ) {
        JMenu class_menu = new JMenu(superclass);        
        for( ResidueType t : ResidueDictionary.getResidues(superclass) ) {
        if( t.canHaveParent() && t.canHaveChildren() && t.getMaxLinkages()>=2 ) 
            class_menu.add(theActionManager.get("insert=" + t.getName()));
        }
        if( class_menu.getItemCount()>0 ) 
        insert_menu.add(class_menu);
    }

    return insert_menu;
    }


    private JMenu createChangeResidueTypeMenu() {
    
    JMenu change_menu = new JMenu("Change residue type");
    change_menu.setMnemonic(KeyEvent.VK_H);
    change_menu.setIcon(FileUtils.getIcon(""));

    for(String superclass : ResidueDictionary.getSuperclasses() ) {
        JMenu class_menu = new JMenu(superclass);        
        for( ResidueType t : ResidueDictionary.getResidues(superclass) ) 
        class_menu.add(theActionManager.get("change=" + t.getName()));        
        if( class_menu.getItemCount()>0 ) 
        change_menu.add(class_menu);
    }

    return change_menu;
    }
    

    private void updateRecentResiduesToolbar(JToolBar tb) {
    for( int i=0; i<no_recent_residues_buttons; i++ ) 
        tb.remove(recent_residues_index);

    no_recent_residues_buttons = 0;
    for( String typename : theWorkspace.getResidueHistory().getRecentResidues() ) { 
        JButton b = new JButton(theActionManager.get("add=" + typename));  
        b.setText(null);
        tb.add(b,recent_residues_index+no_recent_residues_buttons++);
    }
    }

    private JMenu createZoomMenu() {
    GraphicOptions view_opt = theWorkspace.getGraphicOptions();

    JMenu zoom_menu = new JMenu("Zoom");
    zoom_menu.setMnemonic(KeyEvent.VK_Z);

    JRadioButtonMenuItem last = null;
    ButtonGroup group = new ButtonGroup();        

    zoom_menu.add(last = new JRadioButtonMenuItem(theActionManager.get("scale=400" )));
    last.setSelected(view_opt.SCALE_CANVAS==4.);
    group.add(last);
    
    zoom_menu.add(last = new JRadioButtonMenuItem(theActionManager.get("scale=300" )));
    last.setSelected(view_opt.SCALE_CANVAS==3.);
    group.add(last);

    zoom_menu.add(last = new JRadioButtonMenuItem(theActionManager.get("scale=200" )));
    last.setSelected(view_opt.SCALE_CANVAS==2.);
    group.add(last);

    zoom_menu.add(last = new JRadioButtonMenuItem(theActionManager.get("scale=150" )));
    last.setSelected(view_opt.SCALE_CANVAS==1.5);
    group.add(last);

    zoom_menu.add(last = new JRadioButtonMenuItem(theActionManager.get("scale=100" )));
    last.setSelected(view_opt.SCALE_CANVAS==1.);
    group.add(last);

    zoom_menu.add(last = new JRadioButtonMenuItem(theActionManager.get("scale=67" )));
    last.setSelected(view_opt.SCALE_CANVAS==0.67);
    group.add(last);

    zoom_menu.add(last = new JRadioButtonMenuItem(theActionManager.get("scale=50" )));
    last.setSelected(view_opt.SCALE_CANVAS==0.5);
    group.add(last);

    zoom_menu.add(last = new JRadioButtonMenuItem(theActionManager.get("scale=33" )));
    last.setSelected(view_opt.SCALE_CANVAS==0.33);
    group.add(last);

    zoom_menu.add(last = new JRadioButtonMenuItem(theActionManager.get("scale=25" )));
    last.setSelected(view_opt.SCALE_CANVAS==0.25);
    group.add(last);

    return zoom_menu;
    }
   
    private JMenu createViewMenu() {
    GraphicOptions view_opt = theWorkspace.getGraphicOptions();

    JMenu view_menu = new JMenu("View");
    view_menu.setMnemonic(KeyEvent.VK_V);

    view_menu.add(createZoomMenu());

    view_menu.addSeparator();
    
    // notation 
    JRadioButtonMenuItem last = null;
    ButtonGroup groupn = new ButtonGroup();    

    view_menu.add(last = new JRadioButtonMenuItem(theActionManager.get("notation=" + GraphicOptions.NOTATION_CFG)));
    last.setSelected(view_opt.NOTATION.equals(GraphicOptions.NOTATION_CFG));
    groupn.add(last);

    view_menu.add(last = new JRadioButtonMenuItem(theActionManager.get("notation=" + GraphicOptions.NOTATION_CFGBW)));
    last.setSelected(view_opt.NOTATION.equals(GraphicOptions.NOTATION_CFGBW));
    groupn.add(last);

    view_menu.add(last = new JRadioButtonMenuItem(theActionManager.get("notation=" + GraphicOptions.NOTATION_CFGLINK)));
    last.setSelected(view_opt.NOTATION.equals(GraphicOptions.NOTATION_CFGLINK));
    groupn.add(last);

    view_menu.add(last = new JRadioButtonMenuItem(theActionManager.get("notation=" + GraphicOptions.NOTATION_UOXF)));
    last.setSelected(view_opt.NOTATION.equals(GraphicOptions.NOTATION_UOXF));
    groupn.add(last);

    view_menu.add(last = new JRadioButtonMenuItem(theActionManager.get("notation=" + GraphicOptions.NOTATION_TEXT)));
    last.setSelected(view_opt.NOTATION.equals(GraphicOptions.NOTATION_TEXT));
    groupn.add(last);
    
    view_menu.addSeparator();

    // display 

    display_button_group = new ButtonGroup();
    display_models = new HashMap<String,ButtonModel>();  

    view_menu.add(last = new JRadioButtonMenuItem(theActionManager.get("display=" + GraphicOptions.DISPLAY_COMPACT)));
    last.setSelected(view_opt.DISPLAY.equals(GraphicOptions.DISPLAY_COMPACT));
    display_models.put(GraphicOptions.DISPLAY_COMPACT,last.getModel());
    display_button_group.add(last);

    view_menu.add(last = new JRadioButtonMenuItem(theActionManager.get("display=" + GraphicOptions.DISPLAY_NORMAL)));
    last.setSelected(view_opt.DISPLAY.equals(GraphicOptions.DISPLAY_NORMAL));
    display_models.put(GraphicOptions.DISPLAY_NORMAL,last.getModel());
    display_button_group.add(last);

    view_menu.add(last = new JRadioButtonMenuItem(theActionManager.get("display=" + GraphicOptions.DISPLAY_NORMALINFO)));
    last.setSelected(view_opt.DISPLAY.equals(GraphicOptions.DISPLAY_NORMALINFO));
    display_models.put(GraphicOptions.DISPLAY_NORMALINFO,last.getModel());
    display_button_group.add(last);

    view_menu.add(last = new JRadioButtonMenuItem(theActionManager.get("display=" + GraphicOptions.DISPLAY_CUSTOM)));
    last.setSelected(view_opt.DISPLAY.equals(GraphicOptions.DISPLAY_CUSTOM));
    display_models.put(GraphicOptions.DISPLAY_CUSTOM,last.getModel());
    display_button_group.add(last);

    //view_menu.add( lastcb = new JCheckBoxMenuItem(theActionManager.get("showinfo")) );
    //lastcb.setState(view_opt.SHOW_INFO);

    view_menu.addSeparator();

    // export 

    JCheckBoxMenuItem lastcb = null;
    view_menu.add( lastcb = new JCheckBoxMenuItem(theActionManager.get("collapsemultipleantennae")) );
    lastcb.setState(view_opt.COLLAPSE_MULTIPLE_ANTENNAE);
    view_menu.add( lastcb = new JCheckBoxMenuItem(theActionManager.get("showmassescanvas")) );
    lastcb.setState(view_opt.SHOW_MASSES_CANVAS);
    view_menu.add( lastcb = new JCheckBoxMenuItem(theActionManager.get("showmasses")) );
    lastcb.setState(view_opt.SHOW_MASSES);
    view_menu.add( lastcb = new JCheckBoxMenuItem(theActionManager.get("showredendcanvas")) );
    show_redend_canvas_button = lastcb;
    lastcb.setState(view_opt.SHOW_REDEND_CANVAS);
    view_menu.add( lastcb = new JCheckBoxMenuItem(theActionManager.get("showredend")) );
    lastcb.setState(view_opt.SHOW_REDEND);
    
    view_menu.addSeparator();

    // orientation

    view_menu.add(theActionManager.get("orientation"));

    view_menu.addSeparator();

    view_menu.add(theActionManager.get("displaysettings"));

    return view_menu;
    }

    
    private JMenu createEditMenu() {
    
    JMenu edit_menu = new JMenu("Edit");    
    edit_menu.setMnemonic(KeyEvent.VK_E);
    edit_menu.add(theActionManager.get("undo"));
    edit_menu.add(theActionManager.get("redo"));
    edit_menu.addSeparator();
    edit_menu.add(theActionManager.get("cut"));
    edit_menu.add(theActionManager.get("copy"));
    edit_menu.add(theActionManager.get("paste"));
    edit_menu.add(theActionManager.get("delete"));
    edit_menu.addSeparator();
    edit_menu.add(theActionManager.get("orderstructuresasc"));
    edit_menu.add(theActionManager.get("orderstructuresdesc"));
    edit_menu.addSeparator();
    edit_menu.add(theActionManager.get("selectstructure"));
    edit_menu.add(theActionManager.get("selectall"));
    edit_menu.add(theActionManager.get("selectnone"));
    edit_menu.add(theActionManager.get("gotostart"));
    edit_menu.add(theActionManager.get("gotoend"));
    edit_menu.addSeparator();
    edit_menu.add(theActionManager.get("navup"));
    edit_menu.add(theActionManager.get("navdown"));
    edit_menu.add(theActionManager.get("navleft"));
    edit_menu.add(theActionManager.get("navright"));
    //edit_menu.addSeparator();
    //edit_menu.add(theActionManager.get("screenshot"));

    return edit_menu;
    }

    private JMenu createStructureMenu() {

    JMenu structure_menu = new JMenu("Structure");
    structure_menu.setMnemonic(KeyEvent.VK_S);

    structure_menu.add(theActionManager.get("addcomposition"));
    structure_menu.add(theActionManager.get("addstructurestr"));
    structure_menu.add(createAddStructureMenu());

    structure_menu.addSeparator();

    structure_menu.add(createAddResidueMenu());
    structure_menu.add(createAddTerminalMenu());
    structure_menu.add(createInsertResidueMenu());
    structure_menu.add(createChangeResidueTypeMenu());
    //structure_menu.add(createChangeRedEndMenu());
    structure_menu.add(theActionManager.get("bracket"));
    structure_menu.add(theActionManager.get("repeat"));

    structure_menu.addSeparator();

    structure_menu.add(theActionManager.get("properties"));
    structure_menu.add(theActionManager.get("changeredend"));
    structure_menu.add(theActionManager.get("massoptstruct"));

    structure_menu.addSeparator();

    structure_menu.add(theActionManager.get("moveccw"));
    //structure_menu.add(theActionManager.get("resetplace"));
    structure_menu.add(theActionManager.get("movecw"));

    return structure_menu;
    }

    /**
       Return a popup menu to be used with this component
     */
    public JPopupMenu createPopupMenu() {
    return createPopupMenu(true);
    }

    /**
       Return a popup menu to be used with this component
       @param change_properties <code>true</code> if the actions to
       change the properties of the current residue should be added to
       the menu
     */
    public JPopupMenu createPopupMenu(boolean change_properties) {

    JPopupMenu menu = new JPopupMenu();
    
    // edit actions
    menu.add(theActionManager.get("cut"));
    menu.add(theActionManager.get("copy"));
    menu.add(theActionManager.get("paste"));
    menu.add(theActionManager.get("delete"));

    menu.addSeparator();

    // add actions
    if( !hasCurrentSelection() ) {
        menu.add(theActionManager.get("addcomposition"));
        menu.add(createAddStructureMenu());
    }
    if( !hasCurrentLinkage() ) {
        menu.add(createAddResidueMenu());
        menu.add(createAddTerminalMenu());
    }

    // modify structure
    if( hasCurrentResidue() ) {
        menu.add(createInsertResidueMenu());
        menu.add(createChangeResidueTypeMenu());
        //menu.add(createChangeRedEndMenu());
        menu.add(theActionManager.get("bracket"));
        menu.add(theActionManager.get("repeat"));

        if( change_properties ) {
        menu.addSeparator();
        
        menu.add(theActionManager.get("properties"));
        menu.add(theActionManager.get("changeredend"));
        menu.add(theActionManager.get("massoptstruct"));
        }
    }

    // visual placement
    if( hasCurrentSelection() ) {        
        menu.addSeparator();

        menu.add(theActionManager.get("moveccw"));
        //menu.add(theActionManager.get("resetplace"));
        menu.add(theActionManager.get("movecw"));
    }    

    return menu;
    }


    private JToolBar createToolBarDocument() {
    JToolBar toolbar = new JToolBar();
    toolbar.setFloatable(false);

    toolbar.add(theActionManager.get("undo"));
    toolbar.add(theActionManager.get("redo"));

    toolbar.addSeparator();

    toolbar.add(theActionManager.get("cut"));
    toolbar.add(theActionManager.get("copy"));
    toolbar.add(theActionManager.get("paste"));
    toolbar.add(theActionManager.get("delete"));

    return toolbar;
    }


    private JToolBar createToolBarStructure() {

    JToolBar toolbar = new JToolBar();
    toolbar.setFloatable(false);
    for(Iterator<ResidueType> i=ResidueDictionary.directResidues().iterator(); i.hasNext(); ) {
        ResidueType t = i.next();
        if( t.canHaveParent() ) 
        toolbar.add(theActionManager.get("add=" + t.getName()));
    }

    toolbar.addSeparator();

    // recent residues
    recent_residues_index = toolbar.getComponentCount();
    no_recent_residues_buttons = 0;
    updateRecentResiduesToolbar(toolbar);

    toolbar.addSeparator();

    toolbar.add(theActionManager.get("bracket"));
    toolbar.add(theActionManager.get("repeat"));
    toolbar.add(theActionManager.get("properties"));

    toolbar.addSeparator();

    toolbar.add(theActionManager.get("moveccw"));
    //toolbar.add(theActionManager.get("resetplace"));
    toolbar.add(theActionManager.get("movecw"));

    toolbar.addSeparator();

    toolbar.add(theActionManager.get("orientation"));
        
    return toolbar;
    }

    private JLabel createLabel(String text, int margin) {
    JLabel ret = new JLabel(text);    
    ret.setBorder(new EmptyBorder(0,margin,0,margin));
    return ret;
    }
 
    private JToolBar createToolBarProperties() {
    JToolBar toolbar = new JToolBar();
    toolbar.setFloatable(false);
    toolbar.setLayout(new FlowLayout(FlowLayout.LEFT));
    
    toolbar.add(createLabel("Linkage",5));
    toolbar.add(field_anomeric_state = new JComboBox(new String[] {"?", "a", "b"}));
    toolbar.add(field_anomeric_carbon = new JComboBox(new String[] {"?", "1", "2", "3"}));
    toolbar.add(createLabel("->",1));
    toolbar.add(field_linkage_position = new DropDownList(new String[] {"?", "1", "2", "3", "4", "5", "6", "7", "8", "9"}));
    toolbar.add(createLabel("Chirality",5));
    toolbar.add(field_chirality = new JComboBox(new String[] {"?", "D", "L"}));
    toolbar.add(createLabel("Ring",5));
    toolbar.add(field_ring_size = new JComboBox(new String[] {"?", "p", "f", "o"}));
    toolbar.add(createLabel("2nd bond",5));
    toolbar.add(field_second_bond = new JCheckBox(""));
    toolbar.add(field_second_child_position = new JComboBox(new String[] {"?", "1", "2", "3"}));
    toolbar.add(createLabel("->",1));
    toolbar.add(field_second_parent_position = new DropDownList(new String[] {"?", "1", "2", "3", "4", "5", "6", "7", "8", "9"}));
    
    field_anomeric_state.setActionCommand("setproperties");
    field_anomeric_carbon.setActionCommand("setproperties");
    field_linkage_position.setActionCommand("setproperties");
    field_chirality.setActionCommand("setproperties");
    field_ring_size.setActionCommand("setproperties");
    field_second_bond.setActionCommand("setproperties");
    field_second_child_position.setActionCommand("setproperties");
    field_second_parent_position.setActionCommand("setproperties");

    field_anomeric_state.addActionListener(this);
    field_anomeric_carbon.addActionListener(this);
    field_linkage_position.addActionListener(this);
    field_chirality.addActionListener(this);
    field_ring_size.addActionListener(this);
    field_second_bond.addActionListener(this);
    field_second_child_position.addActionListener(this);
    field_second_parent_position.addActionListener(this);

    return toolbar;
    }
   


    //-------------------
    // JComponent

  
    public Dimension getPreferredSize() {
    return theGlycanRenderer.computeSize(all_structures_bbox);
    }            
    
    public Dimension getMinimumSize() {
    return new Dimension(0,0);
    }

    /**
       Return the position manager used by this component to render
       the structures
     */
    public PositionManager getPositionManager() {
    return thePosManager;
    }

    //-------------------
    // clipboard handling

    /**
       Return a screenshot of the component
     */
    public void getScreenshot() {
    ClipUtils.setContents(new GlycanSelection(theGlycanRenderer,theDoc.getStructures()));
    }

    /**
       Delete the selected residues/structures and copy them to the
       clipboard
     */
    public void cut() {    
    copy();
    delete();
    }

    /**
       Copy the selected residues/structures to the clipboard
     */
    public void copy() {
    Collection<Glycan> sel = theDoc.extractView(selected_residues);
    ClipUtils.setContents(new GlycanSelection(theGlycanRenderer,sel));
    }

    /**
       Copy all selected structures to the clipboard
     */
    public void copySelectedStructures() {
    ClipUtils.setContents(new GlycanSelection(theGlycanRenderer,getSelectedStructures()));
    }

    /**
       Copy all structures to the clipboard
     */
    public void copyAllStructures() {
    ClipUtils.setContents(new GlycanSelection(theGlycanRenderer,theDoc.getStructures()));
    }

    /**
       Paste the content of the clipboard into the editor
     */
    public void paste() {
        try {
        Transferable t = ClipUtils.getContents();
        if( t!=null && t.isDataFlavorSupported(GlycanSelection.glycoFlavor) ) {
        String content = TextUtils.consume((InputStream)t.getTransferData(GlycanSelection.glycoFlavor));
        theDoc.addStructures(current_residue,theDoc.parseString(content));
            }        
        } catch (Exception e) {
        LogUtils.report(e);
    }        
    }

    /**
       Delete the selected residues/structures
     */
    public void delete() {
    Residue new_current = (current_residue!=null) ?current_residue.getParent() :null;

    // cut
    theDoc.removeResidues(selected_residues);

    // update selection
    if( theDoc.contains(new_current) )         
        setSelection(new_current);
    }

    /**
       Copy the selected residues and add them to another residue
       @param position the destination
     */
    public void copyTo(Residue position) {
    theDoc.copyResidues(position,theBBoxManager.getLinkedResidues(position),selected_residues);
    }

    /**
       Move the selected residues from their current positions and add
       them to another residue
       @param position the destination
     */
    public void moveTo(Residue position) {
    theDoc.moveResidues(position,theBBoxManager.getLinkedResidues(position),selected_residues);
    }

    //-------------------    
    // painting

    private void xorRectangle(Point start_point, Point end_point) {       
    Graphics g = getGraphics();
    g.setXORMode(Color.white);
    g.setColor(Color.black);
    
    Rectangle rect = makeRectangle(start_point,end_point);
    g.drawRect(rect.x,rect.y,rect.width,rect.height);    
    }

    /**
       Return <code>true</code> if the specified residue is displayed
       around the border of its parent
     */
    public boolean isOnBorder(Residue r) {
    return thePosManager.isOnBorder(r);
    }

    protected void paintComponent(Graphics g) {
        if (isOpaque()) { //paint background
            g.setColor(getBackground());
            g.fillRect(0, 0, getWidth(), getHeight());
        }

    // prepare graphic object
    Graphics2D g2d = (Graphics2D)g.create();        
    g2d.setRenderingHint(RenderingHints.KEY_ANTIALIASING, RenderingHints.VALUE_ANTIALIAS_ON);
    
    // set clipping area
    Rectangle clipRect = new Rectangle();
    g.getClipBounds(clipRect);
    
    // set scale
    theGlycanRenderer.getGraphicOptions().setScale(theGlycanRenderer.getGraphicOptions().SCALE_CANVAS);

    // draw        
    boolean show_masses = is_printing ?theGlycanRenderer.getGraphicOptions().SHOW_MASSES :theGlycanRenderer.getGraphicOptions().SHOW_MASSES_CANVAS;
    boolean show_redend = is_printing ?theGlycanRenderer.getGraphicOptions().SHOW_REDEND :theGlycanRenderer.getGraphicOptions().SHOW_REDEND_CANVAS;
 
    all_structures_bbox = theGlycanRenderer.computeBoundingBoxes(theDoc.getStructures(),show_masses,show_redend,thePosManager,theBBoxManager);
    for( Glycan s : theDoc.getStructures() ) 
        theGlycanRenderer.paint(g2d,s,selected_residues,selected_linkages,show_masses,show_redend,thePosManager,theBBoxManager);

    if( !is_printing )
        paintSelection(g2d,show_redend);
    revalidate();

    // dispose graphic object
    g2d.dispose();    

    theGlycanRenderer.getGraphicOptions().setScale(theGlycanRenderer.getGraphicOptions().SCALE);
    }   
    
    private void paintSelection(Graphics2D g2d, boolean show_redend) {
    GraphicOptions theGraphicOptions = theGlycanRenderer.getGraphicOptions();
    
    Collection<Glycan> sel_structures = theDoc.findStructuresWith(selected_residues,selected_linkages);
    Glycan cur_structure = getCurrentStructure();
    
    for(Iterator<Glycan> i = theDoc.getStructures().iterator(); i.hasNext(); ) {        
        Glycan s = i.next();
        if( sel_structures.contains(s) ) {
        Rectangle bbox = theBBoxManager.getBBox(s,show_redend);
        for( ; i.hasNext(); ) {
            Glycan t = i.next();
            if( sel_structures.contains(t) ) 
            bbox = union(bbox,theBBoxManager.getBBox(t,show_redend));
            else
            break;
        }
        
        if( bbox!=null ) {
            g2d.setColor(UIManager.getColor("Table.selectionBackground"));
            g2d.fill(new Rectangle(theGraphicOptions.MARGIN_LEFT/2-3,bbox.y,5,bbox.height+theGraphicOptions.MASS_TEXT_SPACE+theGraphicOptions.MASS_TEXT_SIZE));        
        }
        }        
    }
    
    // paint cur_structure
    if( cur_structure!=null ) {
        Rectangle cur_bbox = theBBoxManager.getBBox(cur_structure,show_redend);
        if( cur_bbox!=null ) {
        UIManager.getBorder("Table.focusCellHighlightBorder").paintBorder(sel_label,g2d,theGraphicOptions.MARGIN_LEFT/2-3,cur_bbox.y,5,cur_bbox.height+theGraphicOptions.MASS_TEXT_SPACE+theGraphicOptions.MASS_TEXT_SIZE);        
        }
    }
    }
    
 
    //---------------
    // selection

    /**
       Return the residue displayed at the specified position, or
       <code>null</code> if none is there
     */
    public Residue getResidueAtPoint(Point p) {
    for( Glycan g : theDoc.getStructures() ) {
        Residue ret = getResidueAtPoint(g.getRoot(),p);
        if( ret!=null )
        return ret;
        
        ret = getResidueAtPoint(g.getBracket(),p);
        if( ret!=null )
        return ret;
    }
    return null;
    }

    /**
       Return the child of a residue that is displayed at the
       specified position, or <code>null</code> if none is there
       @param r the parent
     */
    public Residue getResidueAtPoint(Residue r, Point p) {
    if( r==null )
        return null;

    Rectangle cur_bbox = theBBoxManager.getCurrent(r);
    if( cur_bbox!=null && cur_bbox.contains(p) )
        return r;
    
    for( Linkage l : r.getChildrenLinkages() ) {
        Residue ret = getResidueAtPoint(l.getChildResidue(),p);
        if( ret!=null )
        return ret;        
    }
    return null;
    }
    
    /**
       Return the linkage displayed at the specified position, or
       <code>null</code> if none is there
     */
    public Linkage getLinkageAtPoint(Point p) {
    for( Glycan g : theDoc.getStructures() ) {
        Linkage ret = getLinkageAtPoint(g.getRoot(),p);
        if( ret!=null )
        return ret;
        
        ret = getLinkageAtPoint(g.getBracket(),p);
        if( ret!=null )
        return ret;
    }
    return null;
    }

    /**
       Return the linkage from a residue that is displayed at the
       specified position, or <code>null</code> if none is there
       @param r the parent
     */
    public Linkage getLinkageAtPoint(Residue r, Point p) {
    if( r==null )
        return null;

    Rectangle cur_bbox = theBBoxManager.getCurrent(r);
    for( Linkage l : r.getChildrenLinkages() ) {
        Rectangle child_bbox = theBBoxManager.getCurrent(l.getChildResidue());        
        if( cur_bbox!=null && child_bbox!=null && distance(p,center(cur_bbox),center(child_bbox))<4. )
        return l;

        Linkage ret = getLinkageAtPoint(l.getChildResidue(),p);
        if( ret!=null )
        return ret;                
    }
    return null;
    }

    /**
       Return <code>true</code> if any residue or linkage is selected
     */
    public boolean hasSelection() {
    return (selected_residues.size()>0 || selected_linkages.size()>0 );
    }

    /**
       Clear the selection
     */
    public void resetSelection() {    
    selected_residues.clear();
    selected_linkages.clear();
    current_residue = null;
    current_linkage = null;

    fireUpdatedSelection();
    }

    /**
       Return <code>true</code> if any residue or linkage has the
       focus. Rectangle selection may not give the focus to a specific
       residue or linkage
     */
    public boolean hasCurrentSelection() {
    return (current_residue!=null || current_linkage!=null);
    }

    /**
       Return the residue with the focus. If a linkage has the focus,
       the child residue is returned
     */
    public Residue getCurrentSelection() {
    if( current_residue!=null )
        return current_residue;
    if( current_linkage!=null )
        return current_linkage.getChildResidue();
    return null;
    }

    /**
       Return the structure containing the residue with the focus
     */
    public Glycan getCurrentStructure() {
    if( current_residue!=null )
        return theDoc.findStructureWith(current_residue);
    if( current_linkage!=null )
        return theDoc.findStructureWith(current_linkage.getChildResidue());
    return null;
    }

    /**
       Return all the structures containing the selected residues and
       linkages
     */
    public Collection<Glycan> getSelectedStructures() {
    return theDoc.findStructuresWith(selected_residues,selected_linkages);    
    }
 

    /**
       Return <code>true</code> if a residue has the focus
     */
    public boolean hasCurrentResidue() {
    return (current_residue!=null);
    }
    
    /**
       Return the residue with the focus
     */
    public Residue getCurrentResidue() {
    return current_residue;
    }

    /**
       Return all the residues that are shown at the same position of
       the residue with the focus
     */
    public Vector<Residue> getLinkedResidues() {
    return theBBoxManager.getLinkedResidues(current_residue);
    }

    private void setCurrentResidue(Residue node) {
    if( node!=null )
        selected_residues.add(node);
    selected_linkages.clear();
    current_residue = node;
    current_linkage = null;

    fireUpdatedSelection();
    }

    /**
       Return <code>true</code> if a linkage has the focus
     */
    public boolean hasCurrentLinkage() {
    return (current_linkage!=null);
    }
    
    /**
       Return the linkage with the focus
     */
    public Linkage getCurrentLinkage() {
    return current_linkage;
    }

    /**
       Return <code>true</code> if the specified residue is selected
     */
    public boolean isSelected(Residue node) {
    if( node==null )
        return false;
    return selected_residues.contains(node);
    }

    /**
       Return <code>true</code> if the specified linkage is selected
     */
    public boolean isSelected(Linkage link) {
    if( link==null )
        return false;
    return selected_linkages.contains(link);
    }
    
    /**
       Return <code>true</code> if any residue is selected
     */
    public boolean hasSelectedResidues() {
    return !selected_residues.isEmpty();
    }

    /**
       Return <code>true</code> if any linkage is selected
     */
    public boolean hasSelectedLinkages() {
    return !selected_linkages.isEmpty();
    }

    /**
       Return a list containing the selected residues
     */
    public Collection<Residue> getSelectedResiduesList() {
    return selected_residues;
    }

    /**
       Return an array containing the selected residues
     */
    public Residue[] getSelectedResidues() {
    return (Residue[])selected_residues.toArray(new Residue[0]);
    }

    /**
       Select a specific set of residues 
     */
    public void setSelection(Collection<Residue> nodes) {
    if( nodes==null || nodes.isEmpty() ) {
        resetSelection();
    }
    else {
        selected_residues.clear();
        selected_linkages.clear();
        current_residue = null;
        current_linkage = null;
        
        for(Residue node : nodes) {
        selected_residues.add(node);
        selected_residues.addAll(theBBoxManager.getLinkedResidues(node));
        }        

        fireUpdatedSelection();        
    }
    }
       
    /**
       Select a specific residue and set the focus on it
     */
    public void setSelection(Residue node) {
    if( node==null ) 
        resetSelection();    
    else {
        selected_residues.clear();
        selected_linkages.clear();
        selected_residues.add(node);
        selected_residues.addAll(theBBoxManager.getLinkedResidues(node));    
        current_residue = node;
        current_linkage = null;    
        
        fireUpdatedSelection();        
    }
    }


    /**
       Select a specific linkage and set the focus to it
     */
    public void setSelection(Linkage link) {
    if( link==null ) 
        resetSelection();    
    else {
        selected_residues.clear();
        selected_linkages.clear();
        selected_linkages.add(link);
        current_residue = null;
        current_linkage = link;    
        
        fireUpdatedSelection();        
    }
    }

    /**
       Make sure that the residue at the specified point is selected
     */
    public void enforceSelection(Point p) {
    Residue r = getResidueAtPoint(p);
    if( r!=null ) 
        enforceSelection(r);
    else {
        Linkage l = getLinkageAtPoint(p);
        if( l!=null ) 
        enforceSelection(l);
        else
        resetSelection();
    }
    }

    /**
       Make sure that the specified residue is selected
     */
    public void enforceSelection(Residue node) {
    if( isSelected(node) ) {
        current_residue = node;
        fireUpdatedSelection();
    }
    else
        setSelection(node);
    }         

    /**
       Make sure that the specified linkage is selected
     */
    public void enforceSelection(Linkage link) {
    if( isSelected(link) ) {
        current_linkage = link;
        fireUpdatedSelection();
    }
    else
        setSelection(link);
    }           

    /**
       Make sure that something is selected. In case select the first
       residue of the first structure if any
     */
    public boolean enforceSelection() {
    if( !hasCurrentSelection() ) {        
        if( theDoc.getNoStructures()==0 ) 
        return false;
        if( theDoc.getFirstStructure().getRoot()==null )
        return false;
        setSelection(theDoc.getFirstStructure().getRoot());
    }
    return true;
    }
    
    /**
       Add a list of residues to the selection
     */
    public void addSelection(Collection<Residue> nodes) {    
    if( nodes!=null ) {
        for(Residue node : nodes) {
        selected_residues.add(node);
        selected_residues.addAll(theBBoxManager.getLinkedResidues(node));
        }
    
        selected_linkages.clear();
        current_residue = null;
        current_linkage = null;    
        
        fireUpdatedSelection();
    }
    }

    /**
       Add a residue to the selection
     */
    public void addSelection(Residue node) {
    if( node!=null ) {
        selected_residues.add(node);
        selected_residues.addAll(theBBoxManager.getLinkedResidues(node));
    
        selected_linkages.clear();
        current_residue = node;
        current_linkage = null;    

        fireUpdatedSelection();

        repaint();
    }
    }

    /**
       Add to the selection all the residues that are between the
       residue with the focus and the specified residue
    */
    public void addSelectionPathTo(Residue node) {
    if( node!=null ) {
        if( current_residue==null ) {
        selected_residues.add(node);        
        selected_residues.addAll(theBBoxManager.getLinkedResidues(node));
        }
        else {
        for( Residue r : Glycan.getPath(current_residue,node) ) {
            selected_residues.add(r);           
            selected_residues.addAll(theBBoxManager.getLinkedResidues(node));
        }
        }
        selected_linkages.clear();
        current_residue = node;
        current_linkage = null;    

        fireUpdatedSelection();
    }
    }
    
    /**
       Select all the residues from the structure with the focus
     */
    public void selectStructure() {
    selected_linkages.clear();
    selected_residues.clear();

    Glycan s = getCurrentStructure();
    if( s!=null ) {
        selectAll(s.getRoot());       
        selectAll(s.getBracket());
    }
    current_linkage = null;    

    fireUpdatedSelection();
    }

    /**
       Select all residues from all structures
     */
    public void selectAll() {
    for(Iterator<Glycan> i=theDoc.iterator(); i.hasNext(); ) {
        Glycan structure = i.next();
        selectAll(structure.getRoot());       
        selectAll(structure.getBracket());
    }
    selected_linkages.clear();
    current_residue = null;
    current_linkage = null;    

    if( theDoc.getFirstStructure()!=null ) 
        current_residue = theDoc.getFirstStructure().getRoot();

    fireUpdatedSelection();
    }

    private void selectAll(Residue node) {
    if( node==null )
        return;

    selected_residues.add(node);
    for(Iterator<Linkage> i = node.iterator(); i.hasNext(); ) 
        selectAll(i.next().getChildResidue());
    }    

    private Residue findNearest(Point p, Collection<Residue> nodes) {
    if( p==null )
        return null;
    
    Residue best_node = null;
    double  best_dist = 0.;
    for( Residue cur_node : nodes ) {
        Rectangle cur_rect = theBBoxManager.getCurrent(cur_node);
        if( cur_rect!=null ) {
        double cur_dist = distance(p,cur_rect);
        if( best_node==null || best_dist>cur_dist ) {
            best_node = cur_node;
            best_dist = cur_dist;
        }
        }
    }

    return best_node;
    }

 
    //---------------
    // visual structure rearrangement

    
    private Residue getResidueAfter(Residue parent, Residue current, ResAngle cur_pos) {

    Vector<Residue> linked = theBBoxManager.getLinkedResidues(current);
    for( int i=parent.indexOf(current)+1; i<parent.getNoChildren(); i++ ) {
        Residue other = parent.getChildAt(i);
        if( thePosManager.getRelativePosition(other).equals(cur_pos) && !linked.contains(other) )
        return other;
    }
    return null;
    }

    private Residue getResidueBefore(Residue parent, Residue current, ResAngle cur_pos) {

    Vector<Residue> linked = theBBoxManager.getLinkedResidues(current);
    for( int i=parent.indexOf(current)-1; i>=0; i-- ) {
        Residue other = parent.getChildAt(i);
        if( thePosManager.getRelativePosition(other).equals(cur_pos) && !linked.contains(other) )
        return other;
    }
    return null;
    }


    private Residue getFirstResidue(Residue parent, Residue current, ResAngle cur_pos) {
    for( int i=0; i<parent.getNoChildren(); i++ ) {
        Residue other = parent.getChildAt(i);
        if( thePosManager.getRelativePosition(other).equals(cur_pos) && other!=current )
        return other;
    }
    return null;
    }

    private Residue getLastResidue(Residue parent, Residue current, ResAngle cur_pos) {
    for( int i=parent.getNoChildren()-1; i>=0; i-- ) {
        Residue other = parent.getChildAt(i);
        if( thePosManager.getRelativePosition(other).equals(cur_pos) && other!=current )
        return other;
    }
    return null;
    }

    private void updateAndMantainSelection() {
    if( current_residue!=null ) {
        Residue old_current = current_residue;
        theDoc.fireDocumentChanged();
        setSelection(old_current);
    }
    else if( current_linkage!=null ) {
        Linkage old_current = current_linkage;
        theDoc.fireDocumentChanged();
        setSelection(old_current);
    }
    }

    private void swapAndMantainSelection(Residue r1, Residue r2) {
    if( current_residue!=null ) {
        Residue old_current = current_residue;
        theDoc.swap(r1,r2);
        setSelection(old_current);
    }
    else if( current_linkage!=null ) {
        Linkage old_current = current_linkage;
        theDoc.swap(r1,r2);
        setSelection(old_current);
    }
    }

    /*
    public void resetPlacement() {
    Residue current = getCurrentSelection();
    if( current == null )
        return;

    current.resetPreferredPlacement();
    updateAndMantainSelection();
    }         
    */
    
    /*
    public void toggleSticky() {
    Residue current = getCurrentSelection();
    if( current == null || current.getPreferredPlacement()==null )
        return;

    current_residue.getPreferredPlacement().toggleSticky();
    updateAndMantainSelection();
    }*/

    private void setPlacement(Residue current, ResiduePlacement new_rp ) {
    current.setPreferredPlacement(new_rp);
    for( Residue r : theBBoxManager.getLinkedResidues(current) )
        r.setPreferredPlacement(new_rp);
    }
    
    private void setWasSticky(Residue current, boolean f) {
    current.setWasSticky(f);
    for( Residue r : theBBoxManager.getLinkedResidues(current) )
        r.setWasSticky(f);
    }

    private void moveBefore(Residue parent, Residue current, Residue other) {
    parent.moveChildBefore(current,other);
    for( Residue r : theBBoxManager.getLinkedResidues(current) ) {
        if( r.getParent()==parent )
        parent.moveChildBefore(r,other);      
    }
    }

    private void moveAfter(Residue parent, Residue current, Residue other) {
    parent.moveChildAfter(current,other);
    for( Residue r : theBBoxManager.getLinkedResidues(current) ) {
        if( r.getParent()==parent )
        parent.moveChildAfter(r,other);      
    }
    }

    /**
       Move counter-clockwise the display position of the residue with
       the focus
     */
    public void onMoveCCW() {
    Residue current = getCurrentSelection();
    if( current==null || current.getParent()==null ) 
        return;    

    Residue parent = current.getParent();
    ResAngle cur_pos = thePosManager.getRelativePosition(current);    

    // try to move the children in the list
    Residue other = getResidueBefore(parent,current,cur_pos);
    if( other!=null ) {
        moveBefore(parent,current,other);
        updateAndMantainSelection();
        return;        
    } 

    // set preferred position
    if( !current.hasPreferredPlacement() ) 
        setWasSticky(current,thePosManager.isSticky(current));

    ResAngle new_pos = null;
    ResiduePlacement new_rp = null;
    if( thePosManager.isOnBorder(current) ) {
        new_pos = (cur_pos.getIntAngle()==-90) ?new ResAngle(90) :new ResAngle(-90);
        new_rp = new ResiduePlacement(new_pos,true,false);
    }
    else {
        new_pos = (cur_pos.getIntAngle()==-90) ?new ResAngle(90) :cur_pos.combine(-45);
        new_rp = (new_pos.getIntAngle()==-90 || new_pos.getIntAngle()==90) 
        ?new ResiduePlacement(new_pos,false,current.getWasSticky()) :new ResiduePlacement(new_pos,false,false);    
    }
    setPlacement(current,new_rp);

    // put residue in the correct order
    other = getLastResidue(parent,current,new_pos);
    moveAfter(parent,current,other);

    updateAndMantainSelection();
    }

    /**
       Move clockwise the display position of the residue with the
       focus
     */
    public void onMoveCW() {

    Residue current = getCurrentSelection();
    if( current==null || current.getParent()==null )
        return;    

    ResAngle cur_pos = thePosManager.getRelativePosition(current);    
    Residue parent = current.getParent();
    
    // try to move the children in the list
    Residue other = getResidueAfter(parent,current,cur_pos);
    if( other!=null ) {
        moveAfter(parent,current,other);
        updateAndMantainSelection();
        return;        
    }

    // set preferred position
    if( !current.hasPreferredPlacement() ) 
        setWasSticky(current,thePosManager.isSticky(current));

    ResAngle new_pos = null;
    ResiduePlacement new_rp = null;
    if( thePosManager.isOnBorder(current) ) {
        new_pos = (cur_pos.getIntAngle()==-90) ?new ResAngle(90) :new ResAngle(-90);
        new_rp = new ResiduePlacement(new_pos,true,false);
    }
    else {
        new_pos = (cur_pos.getIntAngle()==90) ?new ResAngle(-90) :cur_pos.combine(45);
        new_rp = (new_pos.getIntAngle()==-90 || new_pos.getIntAngle()==90) 
        ?new ResiduePlacement(new_pos,false,current.getWasSticky()) :new ResiduePlacement(new_pos,false,false);    
    }
    setPlacement(current,new_rp);

    // put residue in the correct order
    other = getFirstResidue(parent,current,new_pos);
    moveBefore(parent,current,other);    

    updateAndMantainSelection();
    }
  
    //---------------
    // structure navigation

    /**
       Scroll the component to the beginning
     */
    public void goToStart() {       
    JViewport vp = theScrollPane.getViewport();
    vp.setViewPosition(new Point(0,0));        
    vp.setViewPosition(new Point(0,0)); 
    }

    /**
       Scroll the component to the end
     */
    public void goToEnd() {       
    
    JViewport vp = theScrollPane.getViewport();
    Dimension all = getPreferredSize();
    Dimension view = vp.getExtentSize();

    vp.setViewPosition(new Point(0,all.height-view.height));        
    vp.setViewPosition(new Point(0,all.height-view.height));        
    }

    /**
       Move the focus to the residue immediately above the current
       one. If no residue has the focus select the root of the last
       structure
     */
    public void onNavigateUp() {
    Residue current = getCurrentSelection();
    if( current==null ) {        
        Glycan s = theDoc.getLastStructure();
        if( s!=null )
        setSelection(s.getRoot());
    }
    else {
        Residue best_node = theBBoxManager.getNearestUp(current);
        if( best_node!=null )
        setSelection(best_node);
    }
    }

    /**
       Move the focus to the residue immediately below the current
       one. If no residue has the focus select the root of the first
       structure
     */
    public void onNavigateDown() {
    Residue current = getCurrentSelection();
    if( current==null ) {
        Glycan s = theDoc.getFirstStructure();
        if( s!=null )
        setSelection(s.getRoot());
    }
    else {
        Residue best_node = theBBoxManager.getNearestDown(current);        
        if( best_node!=null )
        setSelection(best_node);       
    }    
    }

    /**
       Move the focus to the residue immediately to the left the
       current one. If no residue has the focus select the root of the
       last structure
     */
    public void onNavigateLeft() {
    Residue current = getCurrentSelection();
    if( current==null ) {
        Glycan s = theDoc.getLastStructure();
        if( s!=null )
        setSelection(s.getRoot());
    }
    else {
        Residue best_node = theBBoxManager.getNearestLeft(current);     
        if( best_node!=null )
        setSelection(best_node);
    }
    }

    /**
       Move the focus to the residue immediately to the right the
       current one. If no residue has the focus select the root of the
       first structure
     */
    public void onNavigateRight() {    
    Residue current = getCurrentSelection();
    if( current==null ) {
        Glycan s = theDoc.getFirstStructure();
        if( s!=null )
        setSelection(s.getRoot());
    }
    else {
        Residue best_node = theBBoxManager.getNearestRight(current);  
        if( best_node!=null )
        setSelection(best_node);
    }
    }

    //-----------------
    // print 

    
    /**
       Print the content of the component 
     */
    public void print( PrinterJob job ) throws PrinterException {  
    // do something before
    is_printing = true;

    job.print();

    // do something after
    is_printing = false;
    }

    public int print(Graphics g, PageFormat pageFormat, int pageIndex) throws PrinterException {  
    if (pageIndex > 0) {
        return NO_SUCH_PAGE;
    } 
    else {
        Graphics2D g2d = (Graphics2D)g;
        g2d.setBackground(Color.white);
        g2d.translate(pageFormat.getImageableX(), pageFormat.getImageableY());
        
        Dimension td = this.getPreferredSize();
        double sx = pageFormat.getImageableWidth()/td.width;
        double sy = pageFormat.getImageableHeight()/td.height;
        double s = Math.min(sx,sy);
        if( s<1. ) 
        g2d.scale(s,s);

        RepaintManager.currentManager(this).setDoubleBufferingEnabled(false);
        this.paint(g2d);
        RepaintManager.currentManager(this).setDoubleBufferingEnabled(true);
        
        return PAGE_EXISTS;
    }
    }

    //----------------------
    // Edit actions
   

    /**
       Restore the state of the underlying document after a change
     */
    public void onUndo()  {
    try {
        theDoc.getUndoManager().undo();
    }
    catch(Exception e) {
        LogUtils.report(e);
    }
    }

    /**
       Apply again the changes after the state of the underlying
       document has been restored
     */
    public void onRedo()  {
    try {
        theDoc.getUndoManager().redo();
    }
    catch(Exception e) {
        LogUtils.report(e);
    }
    }
  
    //------------
    // Display actions

    /**
       Set the mass options of a list of structures. Display a {@link
       MassOptionsStructureDialog}
     */
    public boolean onMassOptionsStructures(Collection<Glycan> structures) {
    // open dialog
    MassOptionsStructureDialog mdlg = new MassOptionsStructureDialog(theParent,structures, theWorkspace.getDefaultMassOptions());
    mdlg.setVisible(true);
    
    if( mdlg.getReturnStatus().equals("OK") ) {
        // set mass options for selected structures
        theDoc.setMassOptions(structures,mdlg.getMassOptions());
        
        // set default mass options
        theWorkspace.getDefaultMassOptions().setValues(mdlg.getMassOptions());
        // update view
        repaint();

        return true;
    }
    return false;
    }

    /**
       Set the mass options of all structures. Display a {@link
       MassOptionsStructureDialog}
     */
    public boolean onMassOptionsAllStructures() {
    return onMassOptionsStructures(theDoc.getStructures());
    }

    /**
       Set the mass options of the selected structures. Display a
       {@link MassOptionsStructureDialog}
     */
    public boolean onMassOptionsSelectedStructures() {
    return onMassOptionsStructures(getSelectedStructures());
    }

    /**
       Change the orientation of the display
     */
    public void onChangeOrientation() {
    theWorkspace.getGraphicOptions().ORIENTATION = (theWorkspace.getGraphicOptions().ORIENTATION+1)%4;

    repaint();
    }  

    /**
       Change the cartoon notation to the specified value
       @see GraphicOptions
     */
    public void setNotation(String notation) {
    theWorkspace.setNotation(notation);    

    repaint();
    updateResidueActions();
    }

    /**
       Change the display style to the specified value
       @see GraphicOptions
     */
    public void setDisplay(String display) {
    theWorkspace.setDisplay(display);    

    repaint();
    updateResidueActions();
    }      
        
    /**
       Change the graphic settings. Display a {@link
       GraphicOptionsDialog}
     */
    public void onChangeDisplaySettings() {
    GraphicOptions options = theWorkspace.getGraphicOptions();
    GraphicOptionsDialog dlg = new GraphicOptionsDialog(theParent,options);
    
    dlg.setVisible(true);
    if( dlg.getReturnStatus().equals("OK") ) {
        theWorkspace.setDisplay(options.DISPLAY);        
        display_button_group.setSelected(display_models.get(options.DISPLAY),true);
        repaint();
        updateResidueActions();
    }
    }

    //--------------------
    // Structure

    /**
       Add a glycan composition to the component. Display a {@link
       CompositionDialog}
     */
    public void onAddComposition() {       
    try {
        CompositionDialog dlg = new CompositionDialog(theParent,theWorkspace.getCompositionOptions());

        dlg.setVisible(true);
        if( dlg.getReturnStatus().equals("OK") ) 
        theDoc.addStructure(theWorkspace.getCompositionOptions().getCompositionAsGlycan(theWorkspace.getDefaultMassOptions()));        
    }    
    catch(Exception e) {
        LogUtils.report(e);
    }
    }

    /**
       Add a new structure from a core motif
       @param name the identifier of the core motif
       @see CoreDictionary
     */
    public void onAddStructure(String name) {       
    try {
        theDoc.addStructure(CoreDictionary.newCore(name));            
    }    
    catch(Exception e) {
        LogUtils.report(e);
    }
    }


    /**
       Add a new structure from its string representation. Display a
       {@link ImportStructureDialog}
     */
    public void onAddStructureFromString() {       
    try {
        ImportStructureDialog dlg = new ImportStructureDialog(theParent);
        dlg.setVisible(true);

        if( !dlg.isCanceled() )
        theDoc.importFromString(dlg.getStringEncoded(),dlg.getStringFormat());
    }    
    catch(Exception e) {
        LogUtils.report(e);
    }
    }


    /**
       Add a new structure from a terminal motif
       @param name the identifier of the terminal motif
       @see TerminalDictionary
     */
    public void onAddTerminal(String name) {       
    try {
        Residue toadd   = TerminalDictionary.newTerminal(name);    
        Residue current = getCurrentResidue();
        if( theDoc.addResidue(current,getLinkedResidues(),toadd)!=null ) 
        setSelection(current);
    }    
    catch(Exception e) {
        LogUtils.report(e);
    }
    }

    /**
       Add a bracket residue to the structure with the focus
     */
    public void onAddBracket() {
    Residue bracket = theDoc.addBracket(getCurrentResidue());
    if( bracket!=null )
        setSelection(bracket);
    }


    /**
       Add a repeating unit containing the selected residues. If the
       end point of the unit cannot be easily determined a {@link
       ResidueSelectorDialog} is shown
     */
    public void onAddRepeat() {
    try {
        Collection<Residue> nodes = getSelectedResiduesList();
        if( !theDoc.createRepetition(null,nodes) ) {
        Vector<Residue> end_points = new Vector<Residue>();
        for( Residue r : nodes ) 
            if( r.isSaccharide() ) 
            end_points.add(r);

        Glycan structure = getSelectedStructures().iterator().next();
        ResidueSelectorDialog rsd = new ResidueSelectorDialog(theParent,"Select ending point","Select ending point of the repetition",structure,end_points,false,theGlycanRenderer);
        
        rsd.setVisible(true);
        if( !rsd.isCanceled() )
            theDoc.createRepetition(rsd.getCurrentResidue(),getSelectedResiduesList());    
        }
    }
    catch(Exception e) {
        JOptionPane.showMessageDialog(theParent,e.getMessage(), "Error while creating the repeating unit", JOptionPane.ERROR_MESSAGE);
    }
    }

    /**
       Add a new child to the residue with the focus.
       @param sacc_name the type name of the new residue to add
     */
    public void onAdd(String sacc_name) {       
    try {
        Residue toadd   = ResidueDictionary.newResidue(sacc_name);    
        if( theDoc.addResidue(getCurrentResidue(),getLinkedResidues(),toadd)!=null ) {
        setSelection(toadd);
        theWorkspace.getResidueHistory().add(toadd);
        }
        
    }    
    catch(Exception e) {
        LogUtils.report(e);
    }
    }

    /**
       Insert a new residue between the residue with the focus and its
       parent
       @param sacc_name the type name of the new residue to add
     */
    public void onInsertBefore(String sacc_name) {       
    try {
        Residue toinsert  = ResidueDictionary.newResidue(sacc_name);    
        Residue current   = getCurrentResidue();
        if( theDoc.insertResidueBefore(current,getLinkedResidues(),toinsert)!=null ) {
        setSelection(toinsert);
        theWorkspace.getResidueHistory().add(toinsert);
        }
    }    
    catch(Exception e) {
        LogUtils.report(e);
    }
    }

    /**
       Change the type of the residue with the focus
       @param sacc_name the new type name
     */
    public void onChangeResidueType(String sacc_name) {
    try {
        ResidueType new_type = ResidueDictionary.getResidueType(sacc_name);    
        Residue current      = getCurrentResidue();        
        if( theDoc.changeResidueType(current,getLinkedResidues(),new_type) ) {
        setSelection(current);
        theWorkspace.getResidueHistory().add(current);
        }
    }
    catch(Exception e) {
        LogUtils.report(e);
    }
    }

    /**
       Change the reducing end of the structure with the focus
       @param sacc_name the type name of the new reducing end marker
     */
    public void onChangeReducingEnd(String sacc_name) {
    try {
        ResidueType new_type = ResidueDictionary.getResidueType(sacc_name);    
        Residue current      = getCurrentResidue();        
        theDoc.changeReducingEndType(current,new_type);
    }
    catch(Exception e) {
        LogUtils.report(e);
    }
    }

    /**
       Change the properties of the residue with the focus. Display a
       {@link ResiduePropertiesDialog} or a {@link
       RepetitionPropertiesDialog} depending of the type of the
       residue.
     */
    public void onProperties() {
    Residue current = getCurrentResidue();
    if( current==null )
        return;
    if( current.getParent()!=null && (!current.isSpecial() || current.isCleavage()) ) {
        new ResiduePropertiesDialog(theParent,current,getLinkedResidues(),theDoc).setVisible(true);        
        setSelection(current);
        repaint();    
    }
    else if( current.isStartRepetition() ) {
        new ResiduePropertiesDialog(theParent,current,theDoc).setVisible(true);        
        setSelection(current);
        repaint();    
    }
    else if( current.isEndRepetition() ) {
        new RepetitionPropertiesDialog(theParent,current,theDoc).setVisible(true);        
        setSelection(current);
        repaint();    
    }
    }

    
    private char getSelectedValueChar(JComboBox field) {
    if( field.getSelectedItem()==null )
        return '?';
    return ((String)field.getSelectedItem()).charAt(0);
    }

    private char[] getSelectedPositions(DropDownList field) {
    Object[] sel = field.getSelectedValues();
    if( sel.length==0 )
        return new char[] { '?' };
    
    char[] ret = new char[sel.length];
    for( int i=0; i<sel.length; i++ ) 
        ret[i] = ((String)sel[i]).charAt(0);
    return ret;
    }

    /**
       Set the properties of the residue with the focus using the
       values in the properties toolbar
       @see #getToolBarProperties
     */
    public void onSetProperties() {
    
       Residue current = getCurrentResidue();
    if( current!=null ) {
        current.setAnomericState(getSelectedValueChar(field_anomeric_state));        
        current.setAnomericCarbon(getSelectedValueChar(field_anomeric_carbon));
        current.setChirality(getSelectedValueChar(field_chirality));
        current.setRingSize(getSelectedValueChar(field_ring_size));
    
        Linkage parent_linkage = current.getParentLinkage();
        if( parent_linkage!=null ) {
        char[] sel_linkage_positions = getSelectedPositions(field_linkage_position);
        if( field_second_bond.isSelected() ) {
            char[] sel_second_parent_positions = getSelectedPositions(field_second_parent_position);
            char   sel_second_child_position = getSelectedValueChar(field_second_child_position);        
            parent_linkage.setLinkagePositions(sel_linkage_positions,sel_second_parent_positions,sel_second_child_position);
        }
        else
            parent_linkage.setLinkagePositions(sel_linkage_positions);        
        }

        theDoc.fireDocumentChanged();      
        setSelection(current);
        repaint();
    }
    }

    /**
       Specify if the reducing end marker should be visible in the
       component
     */
    public void setShowRedendCanvas(boolean f) {
    theWorkspace.getGraphicOptions().SHOW_REDEND_CANVAS = f;
    show_redend_canvas_button.setState(f);
    repaint();
    }
    
    //---------------
    // events

    public void actionPerformed(ActionEvent e) {
    
    if( ignore_actions )
        return;    

    String action = GlycanAction.getAction(e);
    String param  = GlycanAction.getParam(e);
    
    // editing
    if( action.equals("undo") )
        onUndo();
    else if( action.equals("redo") )
        onRedo();
    else if( action.equals("cut") )
        cut();
    else if( action.equals("copy") )
        copy();
    else if( action.equals("paste") )
        paste();
    else if( action.equals("delete") )
        delete();

    else if( action.equals("selectstructure") )
        selectStructure();
    else if( action.equals("selectall") )
        selectAll();
    else if( action.equals("selectnone") )
        resetSelection();
    else if( action.equals("gotostart") ) {
        resetSelection();
        goToStart();
    }
    else if( action.equals("gotoend") ) {
        resetSelection();
        goToEnd();
    }

    else if( action.equals("orderstructuresasc") )
        theDoc.orderStructures(false);
    else if( action.equals("orderstructuresdesc") )
        theDoc.orderStructures(true);    

    // structure

    else if( action.equals("addterminal") ) 
        onAddTerminal(param);
    else if( action.equals("addcomposition") ) 
        onAddComposition();
    else if( action.equals("addstructure") ) 
        onAddStructure(param);
    else if( action.equals("addstructurestr") ) 
        onAddStructureFromString();
    else if( action.equals("add") )
        onAdd(param);
    else if( action.equals("insert") )
        onInsertBefore(param);
    else if( action.equals("change") )
        onChangeResidueType(param);
    else if( action.equals("redend") ) 
        onChangeReducingEnd(param);
    else if( action.equals("bracket") )
        onAddBracket();
    else if( action.equals("repeat") )
        onAddRepeat();
    else if( action.equals("changeredend") ) 
        onMassOptionsSelectedStructures();
    else if( action.equals("massoptstruct") ) 
        onMassOptionsSelectedStructures();

    // display
    else if( action.equals("notation") ) 
        setNotation(param);          
    else if( action.equals("display") ) 
        setDisplay(param);              
    else if( action.equals("displaysettings") ) 
        onChangeDisplaySettings();
    else if( action.equals("showinfo") ) {
        theWorkspace.getGraphicOptions().SHOW_INFO = ((JCheckBoxMenuItem)e.getSource()).getState();
        repaint();
    }
    else if( action.equals("scale") ) {
        theWorkspace.getGraphicOptions().SCALE_CANVAS = Double.parseDouble(param)/100.;
        repaint();
    }
    else if( action.equals("collapsemultipleantennae") ) {
        theWorkspace.getGraphicOptions().COLLAPSE_MULTIPLE_ANTENNAE = ((JCheckBoxMenuItem)e.getSource()).getState();
        repaint();
    }
    else if( action.equals("showmassescanvas") ) {
        theWorkspace.getGraphicOptions().SHOW_MASSES_CANVAS = ((JCheckBoxMenuItem)e.getSource()).getState();
        repaint();
    }
    else if( action.equals("showmasses") ) {
        theWorkspace.getGraphicOptions().SHOW_MASSES = ((JCheckBoxMenuItem)e.getSource()).getState();
        repaint();
    }
    else if( action.equals("showredendcanvas") ) {
        theWorkspace.getGraphicOptions().SHOW_REDEND_CANVAS = ((JCheckBoxMenuItem)e.getSource()).getState();
        repaint();
    }
    else if( action.equals("showredend") ) {
        theWorkspace.getGraphicOptions().SHOW_REDEND = ((JCheckBoxMenuItem)e.getSource()).getState();
        repaint();
    }

    else if( action.equals("orientation") ) 
        onChangeOrientation();
    else if( action.equals("properties") ) 
        onProperties();
    else if( action.equals("setproperties") ) 
        onSetProperties();
    else if( action.equals("moveccw") ) 
        onMoveCCW();
    //else if( action.equals("resetplace") ) 
    //resetPlacement();
    else if( action.equals("movecw") ) 
        onMoveCW();

    else if( action.equals("navup") )
        onNavigateUp();
    else if( action.equals("navdown") )
        onNavigateDown();
    else if( action.equals("navleft") )
        onNavigateLeft();
    else if( action.equals("navright") )
        onNavigateRight();


    updateActions();
    }


    public void residueHistoryChanged() {
    updateRecentResiduesToolbar(theToolBarStructure);
    }
    
    public void documentInit(BaseDocument.DocumentChangeEvent e) {
    updateActions();
    resetSelection();
    repaint();
    }

    public void documentChanged(BaseDocument.DocumentChangeEvent e) {
    updateActions(); 
    resetSelection();
    repaint();
    }

    /**
       Register a listener that will be notified of a change in the
       selection
     */
    public void addSelectionChangeListener(SelectionChangeListener l) {
    if( l!=null )
        listeners.add(l);
    }

    /**
       Deregister one of the listeners that are notified of a change
       in the selection
     */
    public void removeSelectionChangeListener(SelectionChangeListener l) {
    if( l!=null )
        listeners.remove(l);
    }

    /**
       Send an event to all listeners notifying a change in the
       selection
     */
    public void fireUpdatedSelection() {
    // update actions
    updateActions();
    updateToolbarProperties();

    // fire events
    for( Iterator<SelectionChangeListener> i=listeners.iterator(); i.hasNext(); ) 
        i.next().selectionChanged(new SelectionChangeEvent(this));

    // update view
    repaint();
    showSelection();
    }

    /**
       Make sure that the selected residues are visible in the
       component by moving the scroll pane
     */
    public void showSelection() {
    // update bounding boxes
    boolean show_masses = is_printing ?theGlycanRenderer.getGraphicOptions().SHOW_MASSES :theGlycanRenderer.getGraphicOptions().SHOW_MASSES_CANVAS;
    boolean show_redend = is_printing ?theGlycanRenderer.getGraphicOptions().SHOW_REDEND :theGlycanRenderer.getGraphicOptions().SHOW_REDEND_CANVAS;
    theGlycanRenderer.computeBoundingBoxes(theDoc.getStructures(),show_masses,show_redend,thePosManager,theBBoxManager);

    //
    
    Rectangle bbox = null;
    for( Residue r : selected_residues )
        bbox = union(bbox,theBBoxManager.getCurrent(r));    
    for( Linkage l : selected_linkages ) {
        bbox = union(bbox,theBBoxManager.getCurrent(l.getChildResidue()));    
        bbox = union(bbox,theBBoxManager.getCurrent(l.getParentResidue()));    
    }

    if( bbox!=null ) {
        bbox = expand(bbox,5);

        // show bbox in viewport
        Rectangle view = theScrollPane.getViewport().getViewRect();
        int new_x = left(view);
        int new_y = top(view);
        if( left(view)>left(bbox) ) 
        new_x = left(bbox);
        else if( right(view)<right(bbox) ) {
        int min_move = right(bbox)-right(view);
        int max_move = left(bbox)-left(view);
        new_x += Math.min(min_move,max_move);
        }
        if( top(view)>top(bbox) ) 
        new_y = top(bbox);
        else if( bottom(view)<bottom(bbox) ) {
        int min_move = bottom(bbox)-bottom(view);
        int max_move = top(bbox)-top(view);
        new_y += Math.min(min_move,max_move);
        }
        theScrollPane.getViewport().setViewPosition(new Point(new_x,new_y));        
        theScrollPane.getViewport().setViewPosition(new Point(new_x,new_y));    }
    }

    //---------------
    // mouse handling 


    public void mouseEntered(MouseEvent e) {    
    }
    
    public void mouseExited(MouseEvent e) {    
    }

    public void mousePressed(MouseEvent e) {

    if( MouseUtils.isPushTrigger(e) || MouseUtils.isCtrlPushTrigger(e) ) {
        Residue start_position = getResidueAtPoint(e.getPoint());
        if( start_position!=null ) {
        // start DnD
        is_dragndrop = true;

        if( !isSelected(start_position) ) {
            if( MouseUtils.isCtrlPushTrigger(e) )
            addSelection(start_position);        
            else
            setSelection(start_position);        
        }
        }
        else {
        // start selection
        mouse_start_point = e.getPoint();
        }
    }
    was_dragged = false;
    }        
    
    public void mouseMoved(MouseEvent e) {
    }
    
    public void mouseDragged(MouseEvent e) {
    was_dragged = true;

    // if is dragging don't update selection
    if( is_dragndrop ) {    
        // set cursor        
        if( MouseUtils.isNothingPressed(e) ) 
        setCursor((canDrop(e)) ?dndmove_cursor :dndnomove_cursor);        
        else if( MouseUtils.isCtrlPressed(e) ) 
        setCursor((canDrop(e)) ?dndcopy_cursor :dndnocopy_cursor);
        else
        setCursor(Cursor.getDefaultCursor());
    }
    else if( mouse_start_point!=null ) {
        if( mouse_end_point!=null )
        xorRectangle(mouse_start_point,mouse_end_point);
        mouse_end_point = e.getPoint();                    
        xorRectangle(mouse_start_point,mouse_end_point);            

    }
    dragAndScroll(e);    
    }        
    
    public void mouseReleased(MouseEvent e) {
    
    // Drag and drop
    if( is_dragndrop && was_dragged ) {
        Residue position = getResidueAtPoint(e.getPoint());
        if( canDrop(e) ) {
        if( MouseUtils.isNothingPressed(e) )
            moveTo(position);
        else if( MouseUtils.isCtrlPressed(e) ) 
            copyTo(position);
        }
    }
    else if( mouse_end_point!=null ) {
        if( mouse_end_point!=null )
        xorRectangle(mouse_start_point,mouse_end_point);

        Rectangle mouse_rect = makeRectangle(mouse_start_point,mouse_end_point);
        if( MouseUtils.isNothingPressed(e) ) 
        setSelection(theBBoxManager.getNodesInside(mouse_rect));                
        else if( MouseUtils.isCtrlPressed(e) ) 
        addSelection(theBBoxManager.getNodesInside(mouse_rect));        
        setCurrentResidue(findNearest(e.getPoint(),selected_residues));
    }
    
    // reset
    if( is_dragndrop ) 
        setCursor(Cursor.getDefaultCursor());        

    is_dragndrop = false;
    was_dragged = false;
    mouse_start_point = null;
    mouse_end_point = null;
    repaint();

    }
    
    public void mouseClicked(MouseEvent e) {    

    Residue r = getResidueAtPoint(e.getPoint());
    if( r!=null ) {
        if( MouseUtils.isSelectTrigger(e) ) {
        setSelection(r);
        }
        else if( MouseUtils.isAddSelectTrigger(e) ) {
        addSelection(r);
        }
        else if( MouseUtils.isSelectAllTrigger(e) ) {
        addSelectionPathTo(r);    
        }
    }
    else {
        Linkage l = getLinkageAtPoint(e.getPoint());
        if( MouseUtils.isSelectTrigger(e) || MouseUtils.isAddSelectTrigger(e) || MouseUtils.isSelectAllTrigger(e) )
        setSelection(l);    
    }
    }

    
    private void dragAndScroll(MouseEvent e) {
    // move view if near borders                
    Point point = e.getPoint();
    JViewport view = theScrollPane.getViewport();
    Rectangle inner = view.getViewRect();
    inner.grow(-10,-10);
    
    if( !inner.contains(point) ) {
        Point orig = view.getViewPosition(); 
        if( point.x<inner.x )
        orig.x -= 10;
        else if( point.x>(inner.x+inner.width) )
        orig.x += 10;            
        if( point.y<inner.y )
        orig.y -= 10;
        else if( point.y>(inner.y+inner.height) )
        orig.y += 10;
        
        int maxx = getBounds().width-view.getViewRect().width;
        int maxy = getBounds().height-view.getViewRect().height;
        if( orig.x<0 )
        orig.x = 0;
        if( orig.x>maxx )
        orig.x = maxx;
        if( orig.y<0 )
        orig.y = 0;
        if( orig.y>maxy )
        orig.y = maxy;
        
        view.setViewPosition(orig);                    
    }    
    }

    private boolean canDrop(MouseEvent e) {    
    Residue target = getResidueAtPoint(e.getPoint());
    if( target==null )
        return true;
    if( isSelected(target) && !e.isControlDown() )             
        return false;
    return theDoc.canAddStructures(target,selected_residues);
    }

}


