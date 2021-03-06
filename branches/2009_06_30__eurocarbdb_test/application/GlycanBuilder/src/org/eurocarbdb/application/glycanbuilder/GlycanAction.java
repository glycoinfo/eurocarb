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
import javax.swing.*;
import java.awt.event.*;

/**
   Implementation of the AbstractAction class that mantains a set of
   listener to be notified when the action is performed.

   @author Alessio Ceroni (a.ceroni@imperial.ac.uk)
*/
public class GlycanAction extends AbstractAction {

    private static final long serialVersionUID = 0L;    
    
    private GlycanAction parent_action = null;
    private ActionListener main_listener = null;

    protected Vector<ActionListener> listeners = new Vector<ActionListener>();

    /**
       Empty constructor.
     */
    public GlycanAction() {
    }

    /**
       Create a new action.
       @param parent parent action, used to chain multiple actions
       @param action action identifier
       @param mnemonic character of the label used to shortcut the
       action in a menu
       @param accelerator keyboard combination used to launch the
       action
       @param l the listener that will be notified when the action is
       performed
     */
    public GlycanAction(GlycanAction parent, String action, int mnemonic, String accelerator, ActionListener l) {
    init(action + "=" + parent.getActionCommand(),parent.getIcon(),parent.getName(),mnemonic,accelerator,l);
    parent_action = parent;
    }

    /**
       Create a new action.
       @param action action identifier
       @param i icon associated with the action
       @param label label used to display the action in menus
       @param mnemonic character of the label used to shortcut the
       action in a menu
       @param accelerator keyboard combination used to launch the
       action
       @param l the listener that will be notified when the action is
       performed
     */
    public GlycanAction(String action, Icon i, String label, int mnemonic, String accelerator, ActionListener l) {
    init(action,i,label,mnemonic,accelerator,l);
    }           

    /**
       Update the information associated with the action.
       @param action action identifier
       @param i icon associated with the action
       @param label label used to display the action in menus
       @param mnemonic character of the label used to shortcut the
       action in a menu
       @param accelerator keyboard combination used to launch the
       action
       @param l the listener that will be notified when the action is
       performed
     */
    public void init(String action, Icon i, String label, int mnemonic, String accelerator, ActionListener l) {
    setEnabled(true);
    putValue(Action.ACCELERATOR_KEY,KeyStroke.getKeyStroke(accelerator));
    putValue(Action.ACTION_COMMAND_KEY,action);
    putValue(Action.MNEMONIC_KEY,mnemonic);
    putValue(Action.NAME,label);
    if( getValue(Action.ACCELERATOR_KEY)==null ) 
        putValue(Action.SHORT_DESCRIPTION,label);
    else 
       putValue(Action.SHORT_DESCRIPTION,label + "  [" + getAcceleratorText((KeyStroke)getValue(Action.ACCELERATOR_KEY)) + "]");    
    if( i!=null )
        putValue(Action.SMALL_ICON,i);    
    if( l!=null ) {
        addActionListener(l);
        main_listener = l;
    }
    }    

    /**
       Return the command run when the action is performed.
     */
    public String getActionCommand() {
    return (String)getValue(Action.ACTION_COMMAND_KEY);
    }

    /**
       Return the action identifier.
     */
    public String getName() {
    return (String)getValue(Action.NAME);
    }

    /**
       Return the label used to display the action in menus.
     */
    public String getDescription() {
    return (String)getValue(Action.SHORT_DESCRIPTION);
    }

    /**
       Return the icon associated with the action.
     */
    public Icon getIcon() {
    return (Icon)getValue(Action.SMALL_ICON);
    }

    /**
       Return the action listener specified when the action was
       created.
     */
    public ActionListener getMainListener() {
    return main_listener;
    }

    /**
       Return the parent action.
     */
    public GlycanAction getParentAction() {
    return parent_action;
    }

    private static String getAcceleratorText(KeyStroke accelerator) { 
    String acceleratorDelimiter = UIManager.getString("MenuItem.acceleratorDelimiter"); 
    if(acceleratorDelimiter==null) 
        acceleratorDelimiter = "+"; 
    
    String acceleratorText = ""; 
    if (accelerator != null) { 
        int modifiers = accelerator.getModifiers(); 
        if (modifiers > 0) { 
        acceleratorText = KeyEvent.getKeyModifiersText(modifiers); 
        acceleratorText += acceleratorDelimiter; 
        } 
        
        int keyCode = accelerator.getKeyCode(); 
        if (keyCode!=0) 
        acceleratorText += KeyEvent.getKeyText(keyCode); 
        else 
        acceleratorText += accelerator.getKeyChar(); 
    } 
    return acceleratorText; 
    } 

    /**
       Add an action listener.
     */
    public void addActionListener(ActionListener l) {
    listeners.add(l);
    }
    
    /**
       Remove an action listener.
     */
    public void removeActionListener(ActionListener l) {
    listeners.remove(l);
    }

    /**
       Notify all the listeners that the action has been performed.
     */
    public void actionPerformed(ActionEvent e) {
    for( Iterator<ActionListener> i=listeners.iterator(); i.hasNext(); ) 
        i.next().actionPerformed(e);
    }    

    /**
       Return the part of the action identifier before the "="
       character.
     */
    public static String getAction(ActionEvent e) {
    String str = e.getActionCommand();
    if( str==null )
        return null;

    int ind = str.indexOf('=');
    if( ind == -1 )
        return str;
    return str.substring(0,ind);
    }

    /**
       Return the part of the action identifier after the "="
       character.
     */
    public static String getParam(ActionEvent e) {
    String str = e.getActionCommand();
    if( str==null )
        return null;

    int ind = str.indexOf('=');
    if( ind == -1 )
        return null;
    return str.substring(ind+1);
    }
}
