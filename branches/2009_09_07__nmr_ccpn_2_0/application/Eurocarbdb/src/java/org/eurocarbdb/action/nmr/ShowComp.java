
package org.eurocarbdb.action.nmr;

import org.apache.log4j.Logger;

import java.util.*;
import java.io.*;
import org.eurocarbdb.tranche.*;
import org.eurocarbdb.action.*;
import org.eurocarbdb.dataaccess.*;
import org.eurocarbdb.dataaccess.core.*;
import org.eurocarbdb.dataaccess.nmr.*;
import org.eurocarbdb.dataaccess.hibernate.*;
import com.opensymphony.xwork.Action;
import com.opensymphony.xwork.Preparable;

import org.hibernate.*; 
import org.hibernate.criterion.*; 
import org.eurocarbdb.dataaccess.hibernate.*;

import memops.api.Implementation.MemopsRoot;
import ccp.api.nmr.Nmr.NmrProject;
import ccp.api.nmr.Nmr.Experiment;
import ccp.api.general.Instrument.NmrSpectrometer;
import ccp.api.molecule.ChemCompCoord.ChemAtomCoord;

import org.openscience.cdk.*;
import org.openscience.cdk.CDKConstants;
import org.openscience.cdk.interfaces.*;
import org.openscience.cdk.tools.CDKHydrogenAdder;
import org.openscience.cdk.atomtype.CDKAtomTypeMatcher;
import org.openscience.cdk.tools.manipulator.AtomTypeManipulator;

import ccp.api.molecule.ChemComp.ChemComp;

/*

JMCI Development notes


Known bugs and problems:

1. Effect of substructure on shifts. really we want to be able to
   define a residue within a substructure and get average shifts plus
   variation.  For now we just have the linking state, which is better
   than nothing but still not very useful. However, it shows the sort
   of searches that could be done.

   The clever thing would be to link the shift data into the ECDB
   substructure search. This might mean mapping residues to
   seq.glycan_residue rows ...

2. Lack of information. The UI is pretty sparse but that is largely
   down to the lack of data in the CCPN files. These files need
   curating and more informatin put in them.

3. Images. It would be nice to have images (preferably 3D, manipulable
   apps) of the structure. Siegfried's code generated these on the
   fly -- there seems little point in doing that -- something
   pre-generated (or at least cached) sounds more efficient

4. Linking. Currently we cannot toggle between linking states of
   a given monomer. That would be an obvious (and simple) extension


*/



public class ShowComp extends AbstractExperimentAwareAction
{
    protected static final Logger ms_log = Logger.getLogger( ShowComp.class.getName() );

    private String ccpCode = null;
    private String descriptor = null;
    private String linking = null;

    private ccp.api.molecule.ChemComp.ChemComp comp;

    private IMolecule molecule;

    
    public String getCcpCode()
    {
        return ccpCode;
    }
    
    public void setCcpCode(String cc)
    {
        ccpCode = cc;
    }

    public String getDescriptor()
    {
        return descriptor;
    }
    
    public void setDescriptor(String d)
    {
        descriptor = d;
    }
    
    public String getLinking()
    {
        return linking;
    }
    
    public void setLinking(String l)
    {
        linking = l;
    }

    public ChemComp getChemComp()
    {

	return comp;

    }

    // Turn the CCPN linking code in alpha and beta
    public String getConfCode() {

	if ( descriptor.equals("stereo_1:C1") ) return "&#945;-";
	else if ( descriptor.equals("stereo_2:C1") ) return "&#946;-";
        else return "";

    }

    public String getConfCode(String s) {

	if ( s.equals("stereo_1:C1") ) return "&#945;";
	else if ( s.equals("stereo_2:C1") ) return "&#946";
        else return "";

    }

    public List getAtomShiftTable() {

	try {

	    // fixme: we don't have a neutral conformation (alpha unlinked ...)

	   List i = Eurocarb.getEntityManager()
	         .getQuery( "org.eurocarbdb.dataaccess.nmr.NmrEvidence.AvgShiftByCompLinkTable" )
	         .setParameter("ccpCode", getCcpCode() )
	         .setParameter("descriptor", getDescriptor() )
	         .setParameter("linking", getLinking() )
                .list();

	    return i;

	} catch (Exception e) {

            ms_log.error(" while fetching Atom Shift Table: " + e.getMessage());
	    return new ArrayList();

	}
    }

    
    @Override
    public String execute() throws Exception
    {

        if (getCcpCode() != null && getDescriptor() != null)
        {
            ms_log.info("ccpCode: " + getCcpCode());

	    comp = NmrEvidence.lookupCompById(getCcpCode());
	    
        } else {

	    return "error";

	}
		
	return "success";

    }
	
}
