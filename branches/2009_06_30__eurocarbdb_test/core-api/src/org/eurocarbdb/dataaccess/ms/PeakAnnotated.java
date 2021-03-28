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
// Generated Apr 3, 2007 6:49:18 PM by Hibernate Tools 3.1.0.beta4

package org.eurocarbdb.dataaccess.ms;

//  stdlib imports
import java.util.HashSet;
import java.util.Set;
import org.eurocarbdb.dataaccess.core.Contributor;

import java.io.Serializable;

//  eurocarb imports
import org.eurocarbdb.dataaccess.BasicEurocarbObject;
import static org.eurocarbdb.dataaccess.Eurocarb.getEntityManager;

/*  class PeakAnnotated  *//**********************************************
*
*
*/ 
public class PeakAnnotated extends BasicEurocarbObject implements Serializable 
{


    //~~~~~~~~~~~~~~~~~~~~~~~~~~ FIELDS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//
      
    private int peakAnnotatedId;
      
    private PeakAnnotation peakAnnotation;
      
    private int glycoCtId;

    private String sequenceGWS;
      
    private String formula;
      
    private double formulaCarry;
      
    private double calculatedMass;
      
    private double contributorQuality;
      
    private Set<PeakAnnotatedToSmallMolecule> peakAnnotatedToSmallMolecules = new HashSet<PeakAnnotatedToSmallMolecule>(0);
      
    private Set<PeakAnnotatedToIon> peakAnnotatedToIons = new HashSet<PeakAnnotatedToIon>(0);
      
    private Set<Fragmentation> fragmentations = new HashSet<Fragmentation>(0);


    //~~~~~~~~~~~~~~~~~~~~~~~ CONSTRUCTORS ~~~~~~~~~~~~~~~~~~~~~~~~//

    /** Default constructor. */
    public PeakAnnotated() {}

    /** Minimal constructor */
    public PeakAnnotated( PeakAnnotation peakAnnotation, int glycoCtId, String sequenceGWS, String formula, double formulaCarry, double calculatedMass, double contributorQuality ) 
    {
    this.peakAnnotation = peakAnnotation;
        this.glycoCtId = glycoCtId;
    this.sequenceGWS = sequenceGWS;
        this.formula = formula;
        this.formulaCarry = formulaCarry;
        this.calculatedMass = calculatedMass;
        this.contributorQuality = contributorQuality;
    }
    
    /** full constructor */
    public PeakAnnotated( PeakAnnotation peakAnnotation, int glycoCtId, String sequenceGWS,  String formula, double formulaCarry, double calculatedMass, double contributorQuality, Set<PeakAnnotatedToSmallMolecule> peakAnnotatedToSmallMolecules, Set<PeakAnnotatedToIon> peakAnnotatedToIons, Set<Fragmentation> fragmentations ) 
    {
         this.peakAnnotation = peakAnnotation;
        this.glycoCtId = glycoCtId;
    this.sequenceGWS = sequenceGWS;
        this.formula = formula;
        this.formulaCarry = formulaCarry;
        this.calculatedMass = calculatedMass;
        this.contributorQuality = contributorQuality;
        this.peakAnnotatedToSmallMolecules = peakAnnotatedToSmallMolecules;
        this.peakAnnotatedToIons = peakAnnotatedToIons;
        this.fragmentations = fragmentations;
    }
    

   
    //~~~~~~~~~~~~~~~~~~~~~~~~~ METHODS ~~~~~~~~~~~~~~~~~~~~~~~~~~~//


    /*  getPeakAnnotatedId  *//******************************** 
    *
    */ 
    public int getPeakAnnotatedId() 
    {
        return this.peakAnnotatedId;
    }
    
    
    /*  setPeakAnnotatedId  *//******************************** 
    *
    */
    public void setPeakAnnotatedId( int peakAnnotatedId ) 
    {
        this.peakAnnotatedId = peakAnnotatedId;
    }
    
   
    /*  getPeakAnnotation  *//******************************** 
    *
    */ 
    public PeakAnnotation getPeakAnnotation() 
    {
        return this.peakAnnotation;
    }
    
    
    /*  setPeakAnnotation  *//******************************** 
    *
    */
    public void setPeakAnnotation( PeakAnnotation peakAnnotation ) 
    {
        this.peakAnnotation = peakAnnotation;
    }
    

    /*  getGlycoCtId  *//******************************** 
    *
    */ 
    public int getGlycoCtId() 
    {
        return this.glycoCtId;
    }
    
    
    /*  setGlycoCtId  *//******************************** 
    *
    */
    public void setGlycoCtId( int glycoCtId ) 
    {
        this.glycoCtId = glycoCtId;
    }
    
    /*  getSequenceGWS  *//******************************** 
    *
    */ 
    public String getSequenceGWS() 
    {
        return this.sequenceGWS;
    }
    
    
    /*  setSequenceGWS  *//******************************** 
    *
    */
    public void setSequenceGWS( String sequenceGWS ) 
    {
        this.sequenceGWS = sequenceGWS;
    }


    /*  getFormula  *//******************************** 
    *
    */ 
    public String getFormula() 
    {
        return this.formula;
    }
    
    
    /*  setFormula  *//******************************** 
    *
    */
    public void setFormula( String formula ) 
    {
        this.formula = formula;
    }
    

    /*  getFormulaCarry  *//******************************** 
    *
    */ 
    public double getFormulaCarry() 
    {
        return this.formulaCarry;
    }
    
    
    /*  setFormulaCarry  *//******************************** 
    *
    */
    public void setFormulaCarry( double formulaCarry ) 
    {
        this.formulaCarry = formulaCarry;
    }
    

    /*  getCalculatedMass  *//******************************** 
    *
    */ 
    public double getCalculatedMass() 
    {
        return this.calculatedMass;
    }
    
    
    /*  setCalculatedMass  *//******************************** 
    *
    */
    public void setCalculatedMass( double calculatedMass ) 
    {
        this.calculatedMass = calculatedMass;
    }
    

    /*  getContributorQuality  *//******************************** 
    *
    */ 
    public double getContributorQuality() 
    {
        return this.contributorQuality;
    }
    
    
    /*  setContributorQuality  *//******************************** 
    *
    */
    public void setContributorQuality( double contributorQuality ) 
    {
        this.contributorQuality = contributorQuality;
    }
    

    /*  getPeakAnnotatedToSmallMolecules  *//******************************** 
    *
    */ 
    public Set<PeakAnnotatedToSmallMolecule> getPeakAnnotatedToSmallMolecules() 
    {
        return this.peakAnnotatedToSmallMolecules;
    }
    
    
    /*  setPeakAnnotatedToSmallMolecules  *//******************************** 
    *
    */
    public void setPeakAnnotatedToSmallMolecules( Set<PeakAnnotatedToSmallMolecule> peakAnnotatedToSmallMolecules ) 
    {
        this.peakAnnotatedToSmallMolecules = peakAnnotatedToSmallMolecules;
    }
    

    /*  getPeakAnnotatedToIons  *//******************************** 
    *
    */ 
    public Set<PeakAnnotatedToIon> getPeakAnnotatedToIons() 
    {
        return this.peakAnnotatedToIons;
    }
    
    
    /*  setPeakAnnotatedToIons  *//******************************** 
    *
    */
    public void setPeakAnnotatedToIons( Set<PeakAnnotatedToIon> peakAnnotatedToIons ) 
    {
        this.peakAnnotatedToIons = peakAnnotatedToIons;
    }
    

    /*  getFragmentations  *//******************************** 
    *
    */ 
    public Set<Fragmentation> getFragmentations() 
    {
        return this.fragmentations;
    }
    
    
    /*  setFragmentations  *//******************************** 
    *
    */
    public void setFragmentations( Set<Fragmentation> fragmentations ) 
    {
        this.fragmentations = fragmentations;
    }          



} // end class
