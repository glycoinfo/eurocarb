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
/*
* CompareReportDialog.java
*
* Created on 30 July 2008, 10:49
*/



/**
*
* @author  aceroni
*/
public class ProfilesComparisonReportDialog extends javax.swing.JDialog {
    
    /** Creates new form CompareReportDialog */
    public ProfilesComparisonReportDialog(java.awt.Frame parent, boolean modal) {
        super(parent, modal);
        initComponents();
    }
    
    /** This method is called from within the constructor to
     * initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is
     * always regenerated by the Form Editor.
     */
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        buttongroup_normalization = new javax.swing.ButtonGroup();
        buttongroup_deconvolution = new javax.swing.ButtonGroup();
        buttongroup_representation = new javax.swing.ButtonGroup();
        jScrollPane1 = new javax.swing.JScrollPane();
        list_profiles = new javax.swing.JList();
        button_addfirst = new javax.swing.JButton();
        button_removefirst = new javax.swing.JButton();
        jScrollPane2 = new javax.swing.JScrollPane();
        list_firstgroup = new javax.swing.JList();
        button_addsecond = new javax.swing.JButton();
        button_removesecond = new javax.swing.JButton();
        jScrollPane3 = new javax.swing.JScrollPane();
        list_secondgroup = new javax.swing.JList();
        jLabel1 = new javax.swing.JLabel();
        button_normalization_basepeak = new javax.swing.JRadioButton();
        button_normalization_sum = new javax.swing.JRadioButton();
        button_normalization_average = new javax.swing.JRadioButton();
        button_normalization_standardization = new javax.swing.JRadioButton();
        jLabel2 = new javax.swing.JLabel();
        button_deconvolution_monosaccharides = new javax.swing.JRadioButton();
        button_deconvolution_disaccharides = new javax.swing.JRadioButton();
        jLabel3 = new javax.swing.JLabel();
        button_representation_table = new javax.swing.JRadioButton();
        button_representation_bars = new javax.swing.JRadioButton();
        button_representation_errorbars = new javax.swing.JRadioButton();
        button_representation_distributions = new javax.swing.JRadioButton();
        jSeparator1 = new javax.swing.JSeparator();
        button_ok = new javax.swing.JButton();
        button_cancel = new javax.swing.JButton();
        jLabel4 = new javax.swing.JLabel();
        jLabel5 = new javax.swing.JLabel();
        button_deconvolution_none = new javax.swing.JRadioButton();
        button_normalizebyrow = new javax.swing.JCheckBox();
        button_deconvolution_cores = new javax.swing.JRadioButton();
        button_deconvolution_terminals = new javax.swing.JRadioButton();

        setDefaultCloseOperation(javax.swing.WindowConstants.DISPOSE_ON_CLOSE);

        list_profiles.setModel(new javax.swing.AbstractListModel() {
            String[] strings = { "Item 1", "Item 2", "Item 3", "Item 4", "Item 5" };
            public int getSize() { return strings.length; }
            public Object getElementAt(int i) { return strings[i]; }
        });
        jScrollPane1.setViewportView(list_profiles);

        button_addfirst.setText(">>");

        button_removefirst.setText("<<");

        list_firstgroup.setModel(new javax.swing.AbstractListModel() {
            String[] strings = { "Item 1", "Item 2", "Item 3", "Item 4", "Item 5" };
            public int getSize() { return strings.length; }
            public Object getElementAt(int i) { return strings[i]; }
        });
        jScrollPane2.setViewportView(list_firstgroup);

        button_addsecond.setText(">>");

        button_removesecond.setText("<<");

        list_secondgroup.setModel(new javax.swing.AbstractListModel() {
            String[] strings = { "Item 1", "Item 2", "Item 3", "Item 4", "Item 5" };
            public int getSize() { return strings.length; }
            public Object getElementAt(int i) { return strings[i]; }
        });
        jScrollPane3.setViewportView(list_secondgroup);

        jLabel1.setText("Normalizaton");

        buttongroup_normalization.add(button_normalization_basepeak);
        button_normalization_basepeak.setText("base peak");

        buttongroup_normalization.add(button_normalization_sum);
        button_normalization_sum.setText("sum");

        buttongroup_normalization.add(button_normalization_average);
        button_normalization_average.setText("average");

        buttongroup_normalization.add(button_normalization_standardization);
        button_normalization_standardization.setText("standardization");

        jLabel2.setText("Structure deconvolution");

        buttongroup_deconvolution.add(button_deconvolution_monosaccharides);
        button_deconvolution_monosaccharides.setText("monosaccharides");

        buttongroup_deconvolution.add(button_deconvolution_disaccharides);
        button_deconvolution_disaccharides.setText("disaccharides");

        jLabel3.setText("Representation");

        buttongroup_representation.add(button_representation_table);
        button_representation_table.setText("table");

        buttongroup_representation.add(button_representation_bars);
        button_representation_bars.setText("bars");

        buttongroup_representation.add(button_representation_errorbars);
        button_representation_errorbars.setText("error bars");

        buttongroup_representation.add(button_representation_distributions);
        button_representation_distributions.setText("distributions");

        button_ok.setText("OK");

        button_cancel.setText("Cancel");

        jLabel4.setText("Profiles");

        jLabel5.setText("To compare");

        buttongroup_deconvolution.add(button_deconvolution_none);
        button_deconvolution_none.setText("none");

        button_normalizebyrow.setText("normalize by row");

        buttongroup_deconvolution.add(button_deconvolution_cores);
        button_deconvolution_cores.setText("cores");

        buttongroup_deconvolution.add(button_deconvolution_terminals);
        button_deconvolution_terminals.setText("terminals");

        org.jdesktop.layout.GroupLayout layout = new org.jdesktop.layout.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)
            .add(layout.createSequentialGroup()
                .addContainerGap()
                .add(layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)
                    .add(org.jdesktop.layout.GroupLayout.TRAILING, layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)
                        .add(jLabel3)
                        .add(layout.createSequentialGroup()
                            .add(button_representation_table)
                            .addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)
                            .add(button_representation_bars)
                            .addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)
                            .add(button_representation_errorbars)
                            .addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)
                            .add(button_representation_distributions))
                        .add(layout.createSequentialGroup()
                            .add(layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)
                                .add(layout.createSequentialGroup()
                                    .add(jScrollPane1, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, 158, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE)
                                    .addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)
                                    .add(layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING, false)
                                        .add(button_removesecond, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                        .add(button_addsecond, 0, 0, Short.MAX_VALUE)
                                        .add(button_addfirst, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                        .add(button_removefirst)))
                                .add(jLabel4))
                            .addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)
                            .add(layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)
                                .add(jLabel5)
                                .add(layout.createParallelGroup(org.jdesktop.layout.GroupLayout.TRAILING, false)
                                    .add(jScrollPane3, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, 183, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE)
                                    .add(jScrollPane2, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, 183, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE)))))
                    .add(button_normalizebyrow)
                    .add(jSeparator1, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, 418, Short.MAX_VALUE)
                    .add(layout.createSequentialGroup()
                        .add(135, 135, 135)
                        .add(button_ok)
                        .addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)
                        .add(button_cancel))
                    .add(jLabel1)
                    .add(layout.createSequentialGroup()
                        .add(button_normalization_basepeak)
                        .addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)
                        .add(button_normalization_sum)
                        .addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)
                        .add(button_normalization_average)
                        .addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)
                        .add(button_normalization_standardization))
                    .add(jLabel2)
                    .add(layout.createSequentialGroup()
                        .add(button_deconvolution_none)
                        .addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)
                        .add(button_deconvolution_monosaccharides)
                        .addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)
                        .add(button_deconvolution_disaccharides))
                    .add(layout.createSequentialGroup()
                        .add(button_deconvolution_cores)
                        .addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)
                        .add(button_deconvolution_terminals)))
                .addContainerGap())
        );

        layout.linkSize(new java.awt.Component[] {button_cancel, button_ok}, org.jdesktop.layout.GroupLayout.HORIZONTAL);

        layout.linkSize(new java.awt.Component[] {jScrollPane1, jScrollPane2, jScrollPane3}, org.jdesktop.layout.GroupLayout.HORIZONTAL);

        layout.setVerticalGroup(
            layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)
            .add(org.jdesktop.layout.GroupLayout.TRAILING, layout.createSequentialGroup()
                .addContainerGap()
                .add(layout.createParallelGroup(org.jdesktop.layout.GroupLayout.BASELINE)
                    .add(jLabel4)
                    .add(jLabel5))
                .addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)
                .add(layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING, false)
                    .add(layout.createSequentialGroup()
                        .add(layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)
                            .add(layout.createSequentialGroup()
                                .add(button_addfirst)
                                .addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)
                                .add(button_removefirst))
                            .add(jScrollPane2, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, 84, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE))
                        .addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)
                        .add(layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)
                            .add(layout.createSequentialGroup()
                                .add(button_addsecond)
                                .addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)
                                .add(button_removesecond))
                            .add(jScrollPane3, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, 84, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE)))
                    .add(jScrollPane1))
                .addPreferredGap(org.jdesktop.layout.LayoutStyle.UNRELATED)
                .add(jLabel1)
                .addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)
                .add(layout.createParallelGroup(org.jdesktop.layout.GroupLayout.BASELINE)
                    .add(button_normalization_basepeak)
                    .add(button_normalization_sum)
                    .add(button_normalization_average)
                    .add(button_normalization_standardization))
                .addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)
                .add(jLabel2)
                .addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)
                .add(layout.createParallelGroup(org.jdesktop.layout.GroupLayout.BASELINE)
                    .add(button_deconvolution_monosaccharides)
                    .add(button_deconvolution_disaccharides)
                    .add(button_deconvolution_none))
                .addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)
                .add(layout.createParallelGroup(org.jdesktop.layout.GroupLayout.BASELINE)
                    .add(button_deconvolution_cores)
                    .add(button_deconvolution_terminals))
                .addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .add(jLabel3)
                .addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)
                .add(layout.createParallelGroup(org.jdesktop.layout.GroupLayout.BASELINE)
                    .add(button_representation_table)
                    .add(button_representation_bars)
                    .add(button_representation_errorbars)
                    .add(button_representation_distributions))
                .addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)
                .add(button_normalizebyrow)
                .addPreferredGap(org.jdesktop.layout.LayoutStyle.UNRELATED)
                .add(jSeparator1, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, 10, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)
                .add(layout.createParallelGroup(org.jdesktop.layout.GroupLayout.BASELINE)
                    .add(button_ok)
                    .add(button_cancel))
                .addContainerGap())
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents
    
    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                ProfilesComparisonReportDialog dialog = new ProfilesComparisonReportDialog(new javax.swing.JFrame(), true);
                dialog.addWindowListener(new java.awt.event.WindowAdapter() {
                    public void windowClosing(java.awt.event.WindowEvent e) {
                        System.exit(0);
                    }
                });
                dialog.setVisible(true);
            }
        });
    }
    
    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton button_addfirst;
    private javax.swing.JButton button_addsecond;
    private javax.swing.JButton button_cancel;
    private javax.swing.JRadioButton button_deconvolution_cores;
    private javax.swing.JRadioButton button_deconvolution_disaccharides;
    private javax.swing.JRadioButton button_deconvolution_monosaccharides;
    private javax.swing.JRadioButton button_deconvolution_none;
    private javax.swing.JRadioButton button_deconvolution_terminals;
    private javax.swing.JRadioButton button_normalization_average;
    private javax.swing.JRadioButton button_normalization_basepeak;
    private javax.swing.JRadioButton button_normalization_standardization;
    private javax.swing.JRadioButton button_normalization_sum;
    private javax.swing.JCheckBox button_normalizebyrow;
    private javax.swing.JButton button_ok;
    private javax.swing.JButton button_removefirst;
    private javax.swing.JButton button_removesecond;
    private javax.swing.JRadioButton button_representation_bars;
    private javax.swing.JRadioButton button_representation_distributions;
    private javax.swing.JRadioButton button_representation_errorbars;
    private javax.swing.JRadioButton button_representation_table;
    private javax.swing.ButtonGroup buttongroup_deconvolution;
    private javax.swing.ButtonGroup buttongroup_normalization;
    private javax.swing.ButtonGroup buttongroup_representation;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JLabel jLabel5;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JScrollPane jScrollPane2;
    private javax.swing.JScrollPane jScrollPane3;
    private javax.swing.JSeparator jSeparator1;
    private javax.swing.JList list_firstgroup;
    private javax.swing.JList list_profiles;
    private javax.swing.JList list_secondgroup;
    // End of variables declaration//GEN-END:variables
    
}
