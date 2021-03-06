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

package org.eurocarbdb.application.glycoworkbench;

import org.eurocarbdb.application.glycanbuilder.*;
import org.eurocarbdb.application.glycoworkbench.plugin.*;
import org.eurocarbdb.application.glycoworkbench.plugin.reporting.*;

import java.io.*;
import javax.swing.*;
import javax.swing.border.*;
import javax.swing.table.*;
import javax.swing.event.*;
import java.awt.*;
import java.awt.image.*;
import java.awt.event.*;
import java.awt.print.*;
import java.util.*;
import java.text.*;
import java.net.*;
import javax.help.*;

public class GlycoWorkbench extends JFrame implements ActionListener, BaseDocument.DocumentChangeListener, GlycanCanvas.SelectionChangeListener, FileHistory.Listener, MouseListener, GlycanWorkspace.Listener {   

    private static final long serialVersionUID = 0L;    

    // singletons
    protected GlycanWorkspace theWorkspace;
    protected GlycanDocument theDoc;
    protected ActionManager theActionManager;  
    protected HelpSet theHelpSet;

    // graphical objects
    protected JMenuBar theMenuBar;
    protected JToolBar theToolBarFile;
    protected JToolBar theToolBarPanes;
    protected JToolBar theToolBarTools;
    protected JPanel   theToolBarPanel;

    protected GlycanCanvas  theCanvas;
    protected JSplitPane theSplitPane;
    protected JSplitPane theLeftSplitPane;
    protected JSplitPane theTopSplitPane;

    // plugins
    protected PluginManager thePluginManager;    

    // menus
    protected JMenu recent_files_menu;
    protected String last_exported_file = null;
    
    private Monitor halt_interactions = null;

    // -------------------

    public GlycoWorkbench() {

    LogUtils.setReportOwner(this);
    LogUtils.setGraphicalReport(true);       

    // create the default workspace
    theWorkspace = new GlycanWorkspace(FileUtils.getRootDir() + "/config.xml",true);
    theWorkspace.setAutoSave(true);

    // create singletons 
    theDoc = theWorkspace.getStructures(); 
    theActionManager = new ActionManager();
    thePluginManager = new PluginManager(this,theWorkspace);
    halt_interactions = new Monitor(this);

    // initialize the action set
    createActions();

    // set the layout
    getContentPane().setLayout(new BorderLayout());

    // create the canvas
    theCanvas = new GlycanCanvas(this,theWorkspace);     

    // set the toolbars
    UIManager.getDefaults().put("ToolTip.hideAccelerator",Boolean.TRUE);
    theToolBarPanel = new JPanel(new BorderLayout());

    JPanel centerPanel = new JPanel(new BorderLayout());
    theToolBarFile = createToolBarFile();
    theToolBarPanes = createToolBarPanes();
    theToolBarTools = createToolBarTools();

    JPanel northTbPanel = new JPanel();
    northTbPanel.setLayout(new BoxLayout(northTbPanel,BoxLayout.X_AXIS));
    northTbPanel.add(theToolBarFile);
    northTbPanel.add(theCanvas.getToolBarDocument());
    northTbPanel.add(theToolBarPanes);

    JPanel centerTbPanel = new JPanel();
    centerTbPanel.setLayout(new BoxLayout(centerTbPanel,BoxLayout.X_AXIS));
    centerTbPanel.add(theCanvas.getToolBarStructure());
    centerTbPanel.add(theToolBarTools);

    theToolBarPanel.add(northTbPanel, BorderLayout.NORTH);
    theToolBarPanel.add(centerTbPanel, BorderLayout.CENTER);
    theToolBarPanel.add(theCanvas.getToolBarProperties(), BorderLayout.SOUTH);
    getContentPane().add(theToolBarPanel,BorderLayout.NORTH);

    // set the MenuBar
    theMenuBar = createMenuBar();
    setJMenuBar(theMenuBar);        

    // set the split panes
    theSplitPane = new JSplitPane();
    theSplitPane.setResizeWeight(1.);
    theSplitPane.setOneTouchExpandable(true);
    getContentPane().add(theSplitPane,BorderLayout.CENTER);

    theLeftSplitPane = new JSplitPane(JSplitPane.VERTICAL_SPLIT);
    theLeftSplitPane.setResizeWeight(1.);
    theLeftSplitPane.setOneTouchExpandable(true);
    theSplitPane.setLeftComponent(theLeftSplitPane);

    theTopSplitPane = new JSplitPane(JSplitPane.HORIZONTAL_SPLIT);
    theTopSplitPane.setResizeWeight(0.);
    theTopSplitPane.setOneTouchExpandable(true);
    theLeftSplitPane.setTopComponent(theTopSplitPane);

    // set the canvas
    JScrollPane sp = new JScrollPane(theCanvas);
    theCanvas.setScrollPane(sp);
    theTopSplitPane.setRightComponent(sp);

    // set the plugin panels
    theTopSplitPane.setLeftComponent(thePluginManager.getLeftComponent());    
    hideBottomPanels();

    theLeftSplitPane.setBottomComponent(thePluginManager.getBottomComponent());    
    hideBottomPanels();

    theSplitPane.setRightComponent(thePluginManager.getRightComponent());
    hideRightPanels();
        
    // add listeners
    theDoc.addDocumentChangeListener(this);
    theCanvas.addSelectionChangeListener(this);
    theCanvas.addMouseListener( this ); 
    theWorkspace.addDocumentChangeListener(this);
    theWorkspace.addWorkspaceListener(this);
    theWorkspace.getFileHistory().addHistoryChangedListener(this);
    
    setDefaultCloseOperation(WindowConstants.DO_NOTHING_ON_CLOSE);
    this.addWindowListener(new WindowAdapter() {

        public void windowOpened(WindowEvent we) {
            hideRightPanels();
            hideBottomPanels();
        }

        public void windowClosing(WindowEvent we) {
            onExit();
        }
        });
    
    // init help

    try {
        theHelpSet = new HelpSet(null, HelpSet.findHelpSet(GlycoWorkbench.class.getClassLoader(), "Help.hs"));
    } catch (Exception ee) {
        LogUtils.report(ee);
    }
    
        // setto la dimensione e la posizione della finestra
    setIconImage(FileUtils.getIcon("logo","png").getImage());
        setSize(880, 660);        
    setLocationRelativeTo(null);

    // initialize document
    onNew(theWorkspace);
    theWorkspace.setChanged(false);

    updateActions();
    }
   
    public void exit(int err_level) {    
    // save configurations
    thePluginManager.exit();
    theWorkspace.exit(FileUtils.getRootDir() + "/config.xml");

    // clear memory
    theWorkspace.init();
    System.gc();
    System.runFinalization();

    // exit
    System.exit(err_level);
    }

    public GlycanWorkspace getWorkspace() {
    return theWorkspace;
    }   

    public PluginManager getPluginManager() {
    return thePluginManager;
    }

    public GlycanCanvas getCanvas() {
    return theCanvas;
    }    
 
    public void hideLeftPanels() {
    theTopSplitPane.setDividerLocation(0.);
    }

    public void showLeftPanels() {
    if( theTopSplitPane.getDividerLocation()<(0.1*theTopSplitPane.getSize().width) ) 
        theTopSplitPane.setDividerLocation(0.3);        
    }

    public void toggleLeftPanels() {
    if( theTopSplitPane.getDividerLocation()<(0.1*theTopSplitPane.getSize().width) ) 
        theTopSplitPane.setDividerLocation(0.3);        
    else
        theTopSplitPane.setDividerLocation(0.);
    }

    public void hideBottomPanels() {
    theLeftSplitPane.setDividerLocation(1.);
    }

    public void showBottomPanels() {
    if( theLeftSplitPane.getDividerLocation()>(0.9*theLeftSplitPane.getSize().height) ) 
        theLeftSplitPane.setDividerLocation(0.6);        
    }

    public void toggleBottomPanels() {
    if( theLeftSplitPane.getDividerLocation()>(0.9*theLeftSplitPane.getSize().height) ) 
        theLeftSplitPane.setDividerLocation(0.6);        
    else
        theLeftSplitPane.setDividerLocation(1.);        
    }

    public void hideRightPanels() {
    theSplitPane.setDividerLocation(1.);
    }

    public void showRightPanels() {
    //theSplitPane.resetToPreferredSizes();
    if( theSplitPane.getDividerLocation()>(0.9*theSplitPane.getSize().width) ) 
        theSplitPane.setDividerLocation(0.6);        
    }     

    public void toggleRightPanels() {
    if( theSplitPane.getDividerLocation()>(0.9*theSplitPane.getSize().width) ) 
        theSplitPane.setDividerLocation(0.6);        
    else
        theSplitPane.setDividerLocation(1.);        
    }

    public void haltInteractions() {

        // display the wait cursor and block user input
    if( halt_interactions.isFree() ) {
        Component glassPane = getGlassPane();
        glassPane.addMouseListener( new MouseAdapter() { }  );
        glassPane.setCursor( Cursor.getPredefinedCursor( Cursor.WAIT_CURSOR ) );
        glassPane.setVisible( true );
    }    
    halt_interactions.hold();
    }

    public void restoreInteractions() {        

        // restore normal user interaction
    halt_interactions.release();
    if( halt_interactions.isFree() )
        getGlassPane().setVisible(false);        
    }
    
    private void createActions() {

    // cores
    theActionManager.add("empty",null,"Empty",-1,"",this);
    for(CoreType t : CoreDictionary.getCores() ) 
        theActionManager.add("new=" + t.getName(),null,t.getDescription(),-1,"",this);
    
    // workspace
    theActionManager.add("newall",FileUtils.getIcon("newall"),"Clear the workspace",KeyEvent.VK_C, "",this);
    theActionManager.add("openall",FileUtils.getIcon("openall"),"Open a workspace",KeyEvent.VK_P, "",this);
    theActionManager.add("saveall",FileUtils.getIcon("saveall"),"Save the workspace",KeyEvent.VK_V, "",this);
    theActionManager.add("saveallas",FileUtils.getIcon("saveallas"),"Save the workspace as...",KeyEvent.VK_E, "",this);

    // file
    theActionManager.add("new",FileUtils.getIcon("new"),"New",KeyEvent.VK_N, "ctrl N",this);
    theActionManager.add("open",FileUtils.getIcon("open"),"Open document...",KeyEvent.VK_O, "ctrl O",this);
    theActionManager.add("openinto",FileUtils.getIcon("openinto"),"Open additional document...",KeyEvent.VK_I, "ctrl I",this);
    
    theActionManager.add("save",FileUtils.getIcon("save"),"Save the structures",KeyEvent.VK_S, "ctrl S",this);
    theActionManager.add("saveas",FileUtils.getIcon("saveas"),"Save the structures as...",KeyEvent.VK_A, "shift ctrl S",this);
    theActionManager.add("print",FileUtils.getIcon("print"),"Print the structures...",KeyEvent.VK_P, "ctrl P",this);
    theActionManager.add("quit",FileUtils.getIcon("quit"),"Quit",KeyEvent.VK_Q, "ctrl Q",this);

    // import/export
    for(java.util.Map.Entry<String,String> e : GlycanDocument.getImportFormats().entrySet() )
        theActionManager.add("import=" + e.getKey(),FileUtils.getIcon(""),"Import from " + e.getValue() + "...",-1, "",this);
    for(java.util.Map.Entry<String,String> e : GlycanDocument.getExportFormats().entrySet() )
        theActionManager.add("export=" + e.getKey(),FileUtils.getIcon(""),"Export to " + e.getValue() + "...",-1, "",this);
    for(java.util.Map.Entry<String,String> e : SVGUtils.getExportFormats().entrySet() )
        theActionManager.add("export=" + e.getKey(),FileUtils.getIcon(""),"Export to " + e.getValue() + "...",-1, "",this);
    
    // panes
    theActionManager.add("toggleleft",FileUtils.getIcon("toggleleft"),"Show/hide left panels",-1, "",this);
       theActionManager.add("togglebottom",FileUtils.getIcon("togglebottom"),"Show/hide bottom panels",-1, "",this);
       theActionManager.add("toggleright",FileUtils.getIcon("toggleright"),"Show/hide right panels",-1, "",this);



    // tools    
    theActionManager.add("massopt",FileUtils.getIcon("massopt"),"Mass options of all structures",KeyEvent.VK_M,"",this);
    theActionManager.add("fragopt",FileUtils.getIcon("fragopt"),"Fragment options",KeyEvent.VK_O,"",this);
    theActionManager.add("annopt",FileUtils.getIcon("annopt"),"Annotation options",KeyEvent.VK_N,"",this);
    

    // help
    theActionManager.add("help",FileUtils.getIcon("help"),"Help content",KeyEvent.VK_H,"F1",this);
    theActionManager.add("about",FileUtils.getIcon("about"),"About",KeyEvent.VK_B,"",this);
    
    }
   
    private void updateActions() {
    theActionManager.get("save").setEnabled(theDoc.hasChanged());
    }
    
 
    private JMenu createNewDocumentMenu() {
    
    JMenu new_menu = new JMenu("New");
    new_menu.setMnemonic(KeyEvent.VK_N);
    new_menu.setIcon(FileUtils.getIcon("new"));

    new_menu.add(theActionManager.get("empty"));
    for( String superclass : CoreDictionary.getSuperclasses() ) {
        JMenu class_menu = new JMenu(superclass);        
        for( CoreType core_type : CoreDictionary.getCores(superclass) ) 
        class_menu.add(theActionManager.get("new=" + core_type.getName()));        

        if( class_menu.getItemCount()>0 ) 
        new_menu.add(class_menu);
    }

    return new_menu;
    }

    private JMenu createImportSequenceMenu() {
    
    JMenu import_menu = new JMenu("Import from sequence formats");    
    import_menu.setMnemonic(KeyEvent.VK_M);
    import_menu.setIcon(FileUtils.getIcon("import"));

    for(java.util.Map.Entry<String,String> e : GlycanDocument.getImportFormats().entrySet() )
        import_menu.add(theActionManager.get("import="+e.getKey()));
    
    return import_menu;
    }

    private JMenu createExportSequenceMenu() {
    
    JMenu export_menu = new JMenu("Export to sequence formats");    
    export_menu.setMnemonic(KeyEvent.VK_X);
    export_menu.setIcon(FileUtils.getIcon("export"));

    for(java.util.Map.Entry<String,String> e : GlycanDocument.getExportFormats().entrySet() )
        export_menu.add(theActionManager.get("export="+e.getKey()));
    
    return export_menu;
    }

    private JMenu createExportDrawingMenu() {
    
    JMenu export_menu = new JMenu("Export to graphical formats");    
    export_menu.setMnemonic(KeyEvent.VK_G);
    export_menu.setIcon(FileUtils.getIcon("export"));

    for(java.util.Map.Entry<String,String> e : SVGUtils.getExportFormats().entrySet() )
        export_menu.add(theActionManager.get("export="+e.getKey()));

    return export_menu;
    }
      

    private void updateRecentFileMenu() {
    // update recent files menu
    
    recent_files_menu.removeAll();
        
    FileHistory theFileHistory = theWorkspace.getFileHistory();
    for( Iterator<String> i = theFileHistory.iterator(); i.hasNext(); ) {
        String file_path = i.next();
        String file_type = theFileHistory.getFileType(file_path);

        JMenuItem mi = new JMenuItem(theFileHistory.getAbbreviatedName(file_path));
        if( file_type.equals("Workspace") )
        mi.setActionCommand("openall=" + file_path);
        else if( file_type.equals("Structures") )
        mi.setActionCommand("openstruct=" + file_path);
        else if( file_type.equals("Fragments") )
        mi.setActionCommand("openfragments=" + file_path);
        else if( file_type.equals("PeakList") )
        mi.setActionCommand("openpeaks=" + file_path);
        else if( file_type.equals("Annotated PeakList") )
        mi.setActionCommand("openannpeaks=" + file_path);
        else if( file_type.equals("Spectra") )
        mi.setActionCommand("openspectra=" + file_path);
        else
        continue;
        mi.addActionListener(this);
        mi.setToolTipText(file_path);
        
        recent_files_menu.add(mi);
    }
    if( recent_files_menu.getItemCount()==0 )
        recent_files_menu.add(new JMenuItem("<empty>"));                    
    }

    private JMenu createFileMenu() {
    recent_files_menu = new JMenu("Recent files");
    recent_files_menu.setMnemonic(KeyEvent.VK_R);
    recent_files_menu.setIcon(FileUtils.getIcon(null));
    updateRecentFileMenu();

    JMenu file_menu = new JMenu("File");
    file_menu.setMnemonic(KeyEvent.VK_F);
    
    file_menu.add(createNewDocumentMenu());
    file_menu.add(theActionManager.get("open"));
    file_menu.add(theActionManager.get("openinto"));
    //file_menu.add(theActionManager.get("openpeaks"));
    //file_menu.add(theActionManager.get("openannpeaks"));
    //file_menu.add(theActionManager.get("openspectra"));
    file_menu.add(recent_files_menu);

    file_menu.addSeparator();

    file_menu.add(theActionManager.get("save"));
    file_menu.add(theActionManager.get("saveas"));

    file_menu.addSeparator();

    file_menu.add(theActionManager.get("newall"));
    file_menu.add(theActionManager.get("openall"));
    file_menu.add(theActionManager.get("saveall"));
    file_menu.add(theActionManager.get("saveallas"));

    file_menu.addSeparator();

    file_menu.add(createImportSequenceMenu());
    file_menu.add(createExportSequenceMenu());
    file_menu.add(createExportDrawingMenu());

    file_menu.addSeparator();

    file_menu.add(theActionManager.get("print"));

    file_menu.addSeparator();

    file_menu.add(theActionManager.get("quit"));
    
    return file_menu;
    }

    private JMenuBar createMenuBar() {

    JMenuBar menubar = new JMenuBar();

    menubar.add(createFileMenu());
    menubar.add(theCanvas.getEditMenu());
    menubar.add(theCanvas.getStructureMenu());
    menubar.add(createToolsMenu());
    menubar.add(theCanvas.getViewMenu());    
    
    // help menu
    JMenu help_menu = new JMenu("Help");
    help_menu.setMnemonic(KeyEvent.VK_H);    
    help_menu.add(theActionManager.get("help"));
    help_menu.addSeparator();
    help_menu.add(theActionManager.get("about"));
    menubar.add(help_menu);    

    return menubar;
    }

    protected JMenu createToolsMenu() {

    JMenu tools_menu = new JMenu("Tools");
    tools_menu.setMnemonic(KeyEvent.VK_T);    

    for( Plugin p : thePluginManager.getPlugins() ) {
        if( p.getActions().size()>0 ) {
        JMenu plugin_menu = new JMenu(p.getName());
        plugin_menu.setMnemonic(p.getMnemonic());
        plugin_menu.setIcon(p.getIcon());
        for( GlycanAction a : p.getActions() ) {
            if( a==null )
            plugin_menu.addSeparator();
            else
            plugin_menu.add(a);
        }

        tools_menu.add(plugin_menu);
        }
    }

    tools_menu.addSeparator();

    tools_menu.add(theActionManager.get("massopt"));
    tools_menu.add(theActionManager.get("fragopt"));
    tools_menu.add(theActionManager.get("annopt"));

    return tools_menu;
    }

    protected JPopupMenu createPopupMenu() {

    JPopupMenu menu = theCanvas.createPopupMenu();
    
    // add tools menu
    JMenu tools_menu = createToolsMenu();
    tools_menu.setIcon(FileUtils.getIcon(""));
    
    menu.addSeparator();        
    menu.add(tools_menu);

    return menu;
    }

    private JToolBar createToolBarFile() {
    
    JToolBar toolbar = new JToolBar();
    toolbar.setFloatable(false);

    toolbar.add(theActionManager.get("newall"));
    toolbar.add(theActionManager.get("openall"));
    toolbar.add(theActionManager.get("saveall"));
    toolbar.add(theActionManager.get("saveallas"));

    toolbar.addSeparator();

    toolbar.add(theActionManager.get("new"));
    toolbar.add(theActionManager.get("open"));    
    toolbar.add(theActionManager.get("openinto"));    
    //toolbar.add(theActionManager.get("openpeaks"));    
    //toolbar.add(theActionManager.get("openannpeaks"));    
    //toolbar.add(theActionManager.get("openspectra"));    
    toolbar.add(theActionManager.get("save"));
    toolbar.add(theActionManager.get("saveas"));

    toolbar.addSeparator();

    toolbar.add(theActionManager.get("print"));
        
    return toolbar;
    }


    private JToolBar createToolBarPanes() {
    
    JToolBar toolbar = new JToolBar();
    toolbar.setFloatable(false);

    toolbar.add(theActionManager.get("toggleleft"));
       toolbar.add(theActionManager.get("togglebottom"));
       toolbar.add(theActionManager.get("toggleright"));       

    return toolbar;
    }
    
    private JToolBar createToolBarTools() {
    JToolBar toolbar = new JToolBar();
    toolbar.setFloatable(false);

    boolean first = true;
       for( Plugin p : thePluginManager.getPlugins() ) {
           if( p.getToolbarActions().size()>0 ) {
             if( first ) {
                 toolbar.addSeparator();
                 first = false;
             }
       
             for( GlycanAction a : p.getToolbarActions() ) {
                 if( a!=null )       
                  toolbar.add(a);
             }
           }
       }

       return toolbar;
    }

    public String askName(String what) {
    return JOptionPane.showInputDialog(this,"Insert " + what + " name:", "", JOptionPane.QUESTION_MESSAGE);
    }     

    //----------------------------
    // Document handling actions

    public void updateTitle() {
    String title = FileHistory.getAbbreviatedName(theWorkspace.getFileName()) + " - GlycoWorkbench";
    if( theWorkspace.hasChanged() )
        title = "* " + title;
    setTitle(title);
    }

    private File getLastExportedFile() {
    if( last_exported_file!=null && last_exported_file.length()>0 ) {
        return new File(last_exported_file);                
        }
        return null;
    }

    private void setLastExportedFile(String name) {
    last_exported_file = name;
    }    
    

    public boolean checkDocumentChanges(BaseDocument doc) {
    if( doc.hasChanged() && !doc.isEmpty() ) {
        int ret = JOptionPane.showConfirmDialog(this,"Save changes to " + doc.getName().toLowerCase() + "?", null, JOptionPane.YES_NO_CANCEL_OPTION, JOptionPane.QUESTION_MESSAGE);
        if( ret == JOptionPane.CANCEL_OPTION ) 
        return false;        
        if( ret == JOptionPane.YES_OPTION ) {
        if( !onSaveAs(doc) )
            return false;
        return true;
        }
        if( ret == JOptionPane.NO_OPTION ) 
        return true;
        return false;
    }    
    return true;
    }


    public boolean checkWorkspaceChanges() {
    Collection<BaseDocument> unsaved_docs = theWorkspace.getUnsavedDocuments();
    if( unsaved_docs.size()>0 ) {
        int ret = JOptionPane.showConfirmDialog(this,"Save changes to modified documents?", null, JOptionPane.YES_NO_CANCEL_OPTION, JOptionPane.QUESTION_MESSAGE);
        if( ret == JOptionPane.CANCEL_OPTION ) 
        return false;        
        if( ret == JOptionPane.YES_OPTION ) {
        for( BaseDocument doc : unsaved_docs ) 
            onSave(doc,false);
        return true;
        }
        if( ret == JOptionPane.NO_OPTION ) 
        return true;
        return false;
    }    
    return true;
    }

    public boolean checkExisting(String filename) { 
    if( !(new File(filename)).exists() ) {
        JOptionPane.showMessageDialog(this,"The file selected is not existing.", "File not found", JOptionPane.ERROR_MESSAGE);
        theWorkspace.getFileHistory().remove(filename);      
        return false;
    }
    return true;
    }


    public boolean onNew(BaseDocument doc) {
    if( doc==null )
        return false;
    
    if( !checkDocumentChanges(doc) ) 
        return false;

    // init document
    doc.init();
    return true;
    }
    
    public boolean onNew(String name) {
    try {
        if( !checkDocumentChanges(theDoc) ) 
        return false;
        
        // add structure from template
        if( name!=null && name.length()>0 ) 
        return theDoc.init(CoreDictionary.getCoreType(name).getStructure());
        
        theDoc.init();
        return true;
    }    
    catch(Exception e) {
        LogUtils.report(e);
        return false;
    }
    }

    
    public boolean tryOpen(String filename, boolean merge) {

    try {
        if( !checkExisting(filename) ) 
        return false;
        
        // try to open one document
        if( theWorkspace.open(filename,merge,false) ) {
        theWorkspace.getFileHistory().add(filename,theWorkspace.getName());
        return true;
        }
        if( theWorkspace.getStructures().open(filename,merge,false) ) {
        theWorkspace.getFileHistory().add(filename,theWorkspace.getStructures().getName());
        return true;
        }
        if( theWorkspace.getPeakList().open(filename,merge,false) ) {
        theWorkspace.getFileHistory().add(filename,theWorkspace.getPeakList().getName());
        thePluginManager.show("PeakList","PeakList");
        return true;
        }
        if( theWorkspace.getAnnotatedPeakList().open(filename,merge,false) ) {
        theWorkspace.getFileHistory().add(filename,theWorkspace.getAnnotatedPeakList().getName());
        thePluginManager.show("Annotation","Summary");
        return true;
        }
        if( theWorkspace.getSpectra().open(filename,merge,false) ) {
        theWorkspace.getFileHistory().add(filename,theWorkspace.getSpectra().getName());
        thePluginManager.show("Spectra","Spectra");
        return true;
        }
        
        throw new Exception("Unrecognized file format");    
    }
    catch(Exception e) {
        LogUtils.report(e);
        return false;
    }
    }

    public boolean onOpenDocument(Collection<BaseDocument> documents, boolean merge) {
    if( documents==null || documents.size()==0 )
        return false;
    
    // collect file formats
    JFileChooser fileChooser = new JFileChooser();
    fileChooser.setAcceptAllFileFilterUsed(false);
    
    HashMap<javax.swing.filechooser.FileFilter,BaseDocument> all_ff = new HashMap<javax.swing.filechooser.FileFilter,BaseDocument>();
    for( BaseDocument doc : documents) {
        javax.swing.filechooser.FileFilter ff = doc.getAllFileFormats();    
        fileChooser.addChoosableFileFilter(ff);
        all_ff.put(ff,doc);    
    }
    
    // open file chooser
    fileChooser.setCurrentDirectory(theWorkspace.getFileHistory().getRecentFolder());
    if( fileChooser.showOpenDialog(this) != JFileChooser.APPROVE_OPTION ) 
        return false;
    
    // retrieve file path and document type
    String filename = fileChooser.getSelectedFile().getAbsolutePath();
    BaseDocument document = all_ff.get(fileChooser.getFileFilter());

    // open the file
    return onOpen(filename,document,merge);    
    }


    public boolean onOpen(String filename, BaseDocument doc, boolean merge) {
    if( doc==null )
        return false;    

    if( filename==null ) {        
        if( doc.getFileFormats().size()==0 )
        return false;

        // imposto la dialog per l'apertura del file      
        JFileChooser fileChooser = new JFileChooser();
        for( javax.swing.filechooser.FileFilter ff : doc.getFileFormats() )         
        fileChooser.addChoosableFileFilter(ff);
        fileChooser.setCurrentDirectory(theWorkspace.getFileHistory().getRecentFolder());

        // visualizzo la dialog
        if( fileChooser.showOpenDialog(this) != JFileChooser.APPROVE_OPTION ) 
        return false;
        
        // retrieve file path
        filename = fileChooser.getSelectedFile().getAbsolutePath();
    }

    if( !checkExisting(filename) ) 
        return false;
    if( filename.equals(doc.getFileName()) ) {
        // ask for reload if document has changed
        if( !doc.hasChanged() )
        return false;        
        int retValue = JOptionPane.showOptionDialog(this, "Reload document from the file: " + filename + "?", "Load document", JOptionPane.YES_NO_CANCEL_OPTION, JOptionPane.QUESTION_MESSAGE, null, null, null);  
        if( retValue!=JOptionPane.YES_OPTION )
        return false;
    }
    else if( !merge && !checkDocumentChanges(doc) ) 
        return false;

    // open document        
    haltInteractions();    
    /*if( merge && doc.getName().equals("Structures") ) {
        // add new scan
        Scan s = new Scan(theWorkspace);
        if( !s.getStructures().open(filename,merge,true) ) {
        restoreInteractions();
        return false;
        }        
        theWorkspace.addScan(null,s);
        theWorkspace.setCurrentScan(s);
        
    }
    else*/
    if( merge && doc.getName().equals("Fragments") ) {
        // add new scan
        Scan s = new Scan(theWorkspace);
        if( !s.getFragments().open(filename,merge,true) ) {
        restoreInteractions();
        return false;
        }        
        theWorkspace.addScan(null,s);
        theWorkspace.setCurrentScan(s);
        
    }
    else if( merge && doc.getName().equals("Spectra") ) {
        // add new scan
        Scan s = new Scan(theWorkspace);
        if( !s.getSpectra().open(filename,merge,true) ) {
        restoreInteractions();
        return false;
        }        
        theWorkspace.addScan(null,s);
        theWorkspace.setCurrentScan(s);
        
    }
    else if( merge && doc.getName().equals("PeakList") ) {
        // add new scan
        Scan s = new Scan(theWorkspace);
        if( !s.getPeakList().open(filename,merge,true) ) {
        restoreInteractions();
        return false;
        }        
        theWorkspace.addScan(null,s);
        theWorkspace.setCurrentScan(s);
        
    }
    else if( merge && doc.getName().equals("Annotated PeakList") ) {
        // add new scan
        Scan s = new Scan(theWorkspace);
        if( !s.getAnnotatedPeakList().open(filename,merge,true) ) {
        restoreInteractions();
        return false;
        }        
        theWorkspace.addScan(null,s);
        theWorkspace.setCurrentScan(s);        
    }
    else if( !doc.open(filename,merge,true) ) {
        restoreInteractions();
        return false;
    }
    
    if( doc.getName().equals("Annotation report") )
        theWorkspace.addAnnotationReport((AnnotationReportDocument)doc);
    
    restoreInteractions();
       
    // show panel
    try{ 
        if( doc.getName().equals("Workspace") )
        thePluginManager.show("Workspace","Workspace");
        else if( doc.getName().equals("Fragments") )
        thePluginManager.show("Fragments","Summary");
        else if( doc.getName().equals("PeakList") )
        thePluginManager.show("PeakList","PeakList");
        else if( doc.getName().equals("Annotated PeakList") )
        thePluginManager.show("Annotation","Summary");
        else if( doc.getName().equals("Spectra") )
        thePluginManager.show("Spectra","Spectra");
        else if( doc.getName().equals("Notes") )
        thePluginManager.show("Notes","Notes");
        else if( doc.getName().equals("Annotation report") )
        ((ReportingPlugin)this.getPluginManager().get("Reporting")).showAnnotationsReport((AnnotationReportDocument)doc,false);
    }
    catch(Exception e) {
        LogUtils.report(e);
    }

    // update history
    theWorkspace.getFileHistory().add(filename,doc.getName());         
    return true;
    }


    public boolean onSave(BaseDocument doc) {
    return onSave(doc,true);
    }

    public boolean onSave(BaseDocument doc, boolean ask_filename) {
    if( doc==null )
        return false;
    
    // controlla se e' possibile salvare il file nella stessa posizione da cui e' stato aperto
        File cur = doc.getFile();                
        if( cur!=null && cur.canWrite() ) {
        // salvo il documento su file
        doc.save(cur.getAbsolutePath());       
        return true;
    }

    // non e' stato possibile salvare il file nella posizione da cui e' stato aperto. Richiedo il salvataggio con scelta file
    if( ask_filename )
        return onSaveAs(doc);        
    return false;
    }

  
    public boolean onSaveAs(BaseDocument doc) {
    if( doc==null )
        return false;

    // imposto la dialog per il salvataggio del file
    JFileChooser fileChooser = new JFileChooser();
    for( javax.swing.filechooser.FileFilter ff : doc.getFileFormats() )         
        fileChooser.addChoosableFileFilter(ff);
    fileChooser.setCurrentDirectory(theWorkspace.getFileHistory().getRecentFolder());
        
        // visualizzo la dialog
        if( fileChooser.showSaveDialog(this) == JFileChooser.APPROVE_OPTION ) {

        // aggiunge l'estension        
        String filename = fileChooser.getSelectedFile().getAbsolutePath();
         javax.swing.filechooser.FileFilter ff = fileChooser.getFileFilter();
        if( ff!=fileChooser.getAcceptAllFileFilter() && (ff instanceof ExtensionFileFilter) ) 
        filename = FileUtils.enforceExtension(filename,((ExtensionFileFilter)ff).getDefaultExtension());

        // chiede conferma prima di sovrascrivere il file
        File file = new File(filename);                    
        if( file.exists() ) {
        int retValue = JOptionPane.showOptionDialog(this, "File exists. Overwrite file: " + filename + "?",
                                "Save document", JOptionPane.YES_NO_CANCEL_OPTION, 
                                JOptionPane.QUESTION_MESSAGE, null, null, null);  
        if( retValue!=JOptionPane.YES_OPTION )
            return false;
        }            
        
        // salvo il documento su file
        if( !doc.save(filename) )
        return false;
        
        // update history
        theWorkspace.getFileHistory().add(filename,doc.getName());     
        return true;
        }
    return false;
    }    

    public boolean onImportFrom(String format) {
    // imposto la dialog per l'apertura del file      
    JFileChooser fileChooser = new JFileChooser();
    fileChooser.setCurrentDirectory(theWorkspace.getFileHistory().getRecentFolder());
        
    // visualizzo la dialog
    if( fileChooser.showOpenDialog(this) != JFileChooser.APPROVE_OPTION ) 
        return false;
    
    // retrieve file path
    String filename = fileChooser.getSelectedFile().getAbsolutePath();    

    //if( filename.equals(theDoc.getFileName()) )
    //return false;
    //if( !checkDocumentChanges(theDoc) ) 
    //return false;
    if( !checkExisting(filename) ) 
        return false;
    
    // import structures into the document
    return theDoc.importFrom(filename,format);
    }

    
    public boolean onExportTo(String format) {

    if( theDoc.getStructures().size()>1 && !theDoc.supportMultipleStructures(format) ) {
        int retValue = JOptionPane.showOptionDialog(this, "The selected format does not support multiple structures.\n" +
                            "Only the first structure will be exported. Continue?",
                            "Cannot export all structures", JOptionPane.YES_NO_OPTION, 
                            JOptionPane.WARNING_MESSAGE, null, null, null);  

        if( retValue!=JOptionPane.YES_OPTION )
        return false;
    }

        // imposto la dialog per il salvataggio del file
    JFileChooser fileChooser = new JFileChooser();
    fileChooser.addChoosableFileFilter(new ExtensionFileFilter(format));
    fileChooser.setCurrentDirectory(theWorkspace.getFileHistory().getRecentFolder());    
        
        // visualizzo la dialog
        int returnVal = fileChooser.showSaveDialog(this);        
        if (returnVal == JFileChooser.APPROVE_OPTION) {
        
        // aggiunge l'estension
        String filename = fileChooser.getSelectedFile().getAbsolutePath();
        filename = FileUtils.enforceExtension(filename,format);

        // chiede conferma prima di sovrascrivere il file
        File file = new File(filename);                    
        if (file.exists()) {
        int retValue = JOptionPane.showOptionDialog(this, "File exists. Overwrite file: " + filename + "?",
                                "Salva documento", JOptionPane.YES_NO_CANCEL_OPTION, 
                                JOptionPane.QUESTION_MESSAGE, null, null, null);  
        if( retValue!=JOptionPane.YES_OPTION )
            return false;
        }            
        
        // esporta il documento su file
        if( theDoc.isSequenceFormat(format) ) {
        if( theDoc.exportTo(filename,format) )
            setLastExportedFile(filename);
        return true;
        }
        else if( SVGUtils.export(theWorkspace.getGlycanRenderer(),filename,theDoc.getStructures(),theWorkspace.getGraphicOptions().SHOW_MASSES,theWorkspace.getGraphicOptions().SHOW_REDEND,format) ) {
        setLastExportedFile(filename);
        return true;
        }        
        }
    return false;
    }

    public void onPrint() {
    try {       
        PrinterJob pj = theWorkspace.getPrinterJob();
        if( pj!=null ) {
        pj.setPrintable(theCanvas);
        if( pj.printDialog() ) 
            theCanvas.print(pj);
        }
    }
    catch(Exception e) {
        LogUtils.report(e);
    }
    }


    public void onExit() {
    /*if( checkDocumentChanges(theWorkspace) && 
        checkDocumentChanges(theWorkspace.getStructures()) && 
        checkDocumentChanges(theWorkspace.getPeakList()) &&
        checkDocumentChanges(theWorkspace.getAnnotatedPeakList()) ) 
    */
    if( checkDocumentChanges(theWorkspace) && checkWorkspaceChanges() )
        this.exit(0);
    }


   
    //------------
    // tools actions
   

    public void onMassOptionsAllStructures() {
    theCanvas.onMassOptionsAllStructures();
    }
  
    public void onFragmentOptions() {
    new FragmentOptionsDialog(this,theWorkspace.getFragmentOptions()).setVisible(true);
    }

    public void onAnnotationOptions() {
    new AnnotationOptionsDialog(this,theWorkspace.getFragmentOptions(),theWorkspace.getAnnotationOptions(),false,false).setVisible(true);
    }

   
    //------------------
    // Help actions

    public void onHelp() {
    WindowPresentation wp = (WindowPresentation)MainWindow.getPresentation(theHelpSet,"");
    wp.setDisplayed(true);
    wp.getHelpWindow().setLocationRelativeTo(this);        

    }

    public void onAbout() {

    try {
        JDialog dlg = new JDialog(this, "About GlycoWorkbench", true);        
        URL url = GlycoWorkbench.class.getResource("/html/about_gwb.html");
        JEditorPane html = new JEditorPane(url);
        html.setEditable(false);
        html.setBorder(new EmptyBorder(20,20,20,20));
        
        dlg.add(html);
        dlg.setSize(360,480);
        dlg.setResizable(false);
        dlg.setLocationRelativeTo(this);        

        dlg.setVisible(true);
    }
    catch(Exception e) {
        LogUtils.report(e);
    }
    }

    //--------------------------
    // Listeners

    public void mouseEntered(MouseEvent e) {
    }

    public void mouseExited(MouseEvent e) {
    }

    public void mousePressed(MouseEvent e) {
    if( MouseUtils.isPopupTrigger(e) ) {       
        theCanvas.enforceSelection(e.getPoint());
        createPopupMenu().show(theCanvas, e.getX(), e.getY());   
    }
    }

    public void mouseReleased(MouseEvent e) {
    if( MouseUtils.isPopupTrigger(e) ) {       
        theCanvas.enforceSelection(e.getPoint());
        createPopupMenu().show(theCanvas, e.getX(), e.getY());   
    }
    }

    public void mouseClicked(MouseEvent e) {      
    if( MouseUtils.isActionTrigger(e) ) {
        try {
        if( theCanvas.hasCurrentResidue() ) 
            thePluginManager.runAction("Fragments","editFragmentsResidue");
        else if( theCanvas.hasCurrentLinkage() )     
            thePluginManager.runAction("Fragments","editFragmentsLinkage");
        }
        catch(Exception ex) {
        LogUtils.report(ex);
        }
    }
    }
    
    public void documentInit(BaseDocument.DocumentChangeEvent e) {
    if( e.getSource() == theWorkspace ) {
        theDoc = theWorkspace.getStructures(); 
        theDoc.addDocumentChangeListener(this);
        theCanvas.setDocument(theDoc);     

        thePluginManager.updateViews();
    }
    updateTitle();
    updateActions();
    }

    public void internalDocumentChanged(GlycanWorkspace.Event e) {
    updateTitle();
    updateActions();
    }

    public void documentChanged(BaseDocument.DocumentChangeEvent e) {
    updateTitle();
    updateActions();
    }

    public void selectionChanged(GlycanCanvas.SelectionChangeEvent e) {    
    updateActions();
    }    

    public void fileHistoryChanged() {
    updateRecentFileMenu();
    }    

    public void currentScanChanged(GlycanWorkspace.Event e) {
    theDoc = theWorkspace.getStructures(); 
    theDoc.addDocumentChangeListener(this);
    theCanvas.setDocument(theDoc);     
    
    updateTitle();
    updateActions();
    }
    
    public void scanAdded(GlycanWorkspace.Event e) {
    }
    
    public void scanRemoved(GlycanWorkspace.Event e) {
    }
    public void actionPerformed(ActionEvent e) {
        
    String action = GlycanAction.getAction(e);
    String param  = GlycanAction.getParam(e);
    
    // workspace
    if( action.equals("empty") )
        onNew(theDoc);
    else if( action.equals("newall") )
        onNew(theWorkspace);
    else if( action.equals("openall") )
        onOpen(param,theWorkspace,false);
    else if( action.equals("saveall") )
        onSave(theWorkspace,true);
    else if( action.equals("saveallas") )
        onSaveAs(theWorkspace);
    
    // document handling
    else if( action.equals("new") )
        onNew(param);
    else if( action.equals("open") )
        onOpenDocument(theWorkspace.getAllDocuments(),false);
        //onOpen(param,theDoc,false);
    else if( action.equals("openinto") )
        onOpenDocument(theWorkspace.getAllDocuments(),true);
    else if( action.equals("openstruct") )
        onOpen(param,theWorkspace.getStructures(),false);
    else if( action.equals("openfragments") )
        onOpen(param,theWorkspace.getFragments(),false);
    else if( action.equals("openpeaks") )
        onOpen(param,theWorkspace.getPeakList(),false);
    else if( action.equals("openannpeaks") )
        onOpen(param,theWorkspace.getAnnotatedPeakList(),false);
    else if( action.equals("openspectra") )
        onOpen(param,theWorkspace.getSpectra(),false);
    else if( action.equals("save") )
        onSave(theDoc,true);
    else if( action.equals("saveas") )
        onSaveAs(theDoc);
    else if( action.equals("print") )
        onPrint();
    else if( action.equals("import") )
        onImportFrom(param);
    else if( action.equals("export") )
        onExportTo(param);
    else if( action.equals("quit") )
        onExit();

    // panes
    else if( action.equals("toggleleft") )
        toggleLeftPanels();
    else if( action.equals("togglebottom") )
        toggleBottomPanels();
    else if( action.equals("toggleright") )
        toggleRightPanels();


    // tools
    else if( action.equals("massopt") ) 
        onMassOptionsAllStructures();    
    else if( action.equals("fragopt") ) 
        onFragmentOptions();    
    else if( action.equals("annopt") ) 
        onAnnotationOptions();    


    // help
    else if( action.equals("help") )
        onHelp();
    else if( action.equals("about") )
        onAbout();

    updateActions();
    }

    //---------------------------------
    
    public static void main(String[] args) {

    GlycoWorkbench ed = new GlycoWorkbench();
    
    ed.setVisible(true);
    if( args.length==1 ) {
        ed.tryOpen(args[0],false);
    }
    else {
        GlycanWorkspace workspace = ed.getWorkspace();
        for( int i=0; i<args.length-1; i+=2 ) {
        if( args[i].equals("-open") ) 
            ed.onOpen(args[i+1],workspace.getStructures(),true);
        else if( args[i].equals("-openpeaks") ) 
            ed.onOpen(args[i+1],workspace.getPeakList(),true);
        else if( args[i].equals("-openspectra") ) 
            ed.onOpen(args[i+1],workspace.getSpectra(),true);
        }
    }
    }    
}

