
/*
	ccpn utility functions
*/

package org.eurocarbdb.action.nmr;
import java.io.*;
import java.util.*;

import org.apache.log4j.Logger;

import org.eurocarbdb.action.*;
import org.eurocarbdb.dataaccess.*;
import org.eurocarbdb.dataaccess.core.*;
import org.eurocarbdb.dataaccess.nmr.*;

import memops.api.Implementation.MemopsRoot;
import ccp.api.molecule.Molecule.Molecule;
import ccp.api.molecule.Molecule.MolResidue;
import ccp.api.molecule.Molecule.MolResLink;
import memops.api.Implementation.AppDataInt;

import org.eurocarbdb.sugar.SugarSequence;
import org.eurocarbdb.sugar.SequenceFormat;

import org.eurocarbdb.MolecularFramework.sugar.GlycoEdge;
import org.eurocarbdb.MolecularFramework.sugar.GlycoNode;
import org.eurocarbdb.MolecularFramework.sugar.Linkage;
import org.eurocarbdb.MolecularFramework.sugar.LinkageType;
import org.eurocarbdb.MolecularFramework.sugar.Monosaccharide;
import org.eurocarbdb.MolecularFramework.sugar.Sugar;

import org.eurocarbdb.MolecularFramework.io.GlycoCT.SugarImporterGlycoCTCondensed;
import org.eurocarbdb.MolecularFramework.io.GlycoCT.SugarExporterGlycoCTCondensed;

import org.eurocarbdb.MolecularFramework.util.validation.GlycoVisitorValidation;

/*

JMCI Development notes:

Based on Siegfried's initial code. The loading was switched to use the
CCPN SQL API and code was added to link the CCPN load into the core
schema. For now only the glycan_sequence is linked; further work is
required to connect biological_context and reference from a direct
load from CCPN. However, in many cases the CCPN project will be linked
to an existing glycan which will have the reference and context
information present from a different load.

This code is currently used both by UploadProject and by LoadBatchData
(i.e. both in offline and online loads).


Known bugs and problems:

1. Creating new glycan_sequences. Currently approx 50% of new glycan
   sequence being made are invalid. Need to get to the bottom of this.
   
   This may require better curation of the CCPN ChemComps or fixing
   of bugs in the code that creates sugar sequences from the
   monomer codes and CCPN linkages.

*/



public class CcpnUtil
{

    protected static final Logger util_log = Logger.getLogger( CcpnUtil.class.getName() );
	/*
		return a File object pointing to the main index
		file of the project stored in the "dir" directory
	*/

	public static File locateMainProjectFile(File dir)
	    throws IOException
	{

	    // list through recursively we. We cannot rely on the CCPN
	    // structure being in any particular place in the archive
	    
	    List stack = new ArrayList();
	    File f[] = dir.listFiles();
	    for (int i=0; i < f.length; i++) {
		stack.add(f[i]);
	    }

	    // keep on taking the top of the stack and testing

	    while (stack.size() > 0) {

		File fCurr = (File) stack.get(0);
		util_log.warn( " testing file  " + fCurr);
		
		if (!fCurr.isFile()) {

		    if (ccpnRootTest(fCurr)) {

			// if we are in memops/Implementation then
			// look for single xml file. This should be
			// the main index file for the project.

			File mainDir[] = fCurr.listFiles(new XmlFileFilter());
			if (mainDir.length != 1) {
			    util_log.warn( fCurr + " contains more than one XML file. skipping");
			}
			else return mainDir[0];
              
		    } else {
			    
			// add subfiles to the stack

			File subDir[] = fCurr.listFiles();
			for (int i=0; i < subDir.length; i++) {
			    stack.add(subDir[i]);
			}

		    }
		}
 
		stack.remove(0);		    
		
	    }

	    throw new IOException("Could not find main project directory");

	}


    /*

    Code that scans the molecule and builds a glycoCT code for the
    whole molecule

    */

    public static String determineGlycoCtCode(Molecule mol) 
	throws Exception {


	Sugar fullSugar = new Sugar();

	HashMap ccpn2ecdbMap = new HashMap();

	String molSeq = null;

	//try {

	    for (MolResidue molRes: mol.getMolResidues()) {

		// only handle carbs for now
		if (! (molRes.getChemComp().getMolType().equals("carbohydrate")))
		    continue;
		
		String t_sequence = molRes.getChemCompVar().getGlycoCtCode();

		util_log.info("glycoct seq " + t_sequence + "::");

		if (t_sequence == null || t_sequence.length() < 10)
		    continue;

		// new hack to handle current format from Wim
		t_sequence = t_sequence.replaceAll(";","");
		t_sequence = t_sequence.replaceAll("\n\n","\n");
		t_sequence = t_sequence.substring(0, t_sequence.length() - 1);

		util_log.info("modified glycoct seq " + t_sequence + "::");

		SugarImporterGlycoCTCondensed t_importer = new SugarImporterGlycoCTCondensed();
		Sugar t_sugar = t_importer.parse(t_sequence);

		util_log.info("got sugar " + t_sugar);

		// first add the new sugar and the internal edges to
		// the integrated sugar 

		for (GlycoNode glycoNode : t_sugar.getNodes())
		{
		    if (glycoNode instanceof Monosaccharide) {
			util_log.info("in to map  " + molRes.getSerial() + ", " + glycoNode);
			ccpn2ecdbMap.put(molRes.getSerial(), glycoNode);			
		    }
		    fullSugar.addNode(glycoNode);
		}

		for (GlycoNode glycoNode : t_sugar.getNodes())
		{
		    GlycoEdge t_edge = glycoNode.getParentEdge();
		    if ( t_edge != null )
		    {
			fullSugar.addEdge(t_edge.getParent(),t_edge.getChild(),t_edge);
		    }
		}

	    }


	    // now tranfer the linkages between sugar units in a second pass

	    // OK, so it looks as though we can get the atom name from the
	    // linkEnd.getLinkEnd().getBoundChemAtom().getName() (or else we can
	    // parse it out of the link code directly). In theory we should have
	    // a separate nomenclature that would allow us to pick up the
	    // Eurocarb name. For now just atomise the atom name.

	    for (MolResLink link: mol.getMolResLinks()) {

		GlycoEdge t_edge = new GlycoEdge();
		Linkage t_linkage = new Linkage();

		util_log.info("link " + link);

		boolean addLinkage = true;

		int[] linkNums = new int[2]; 
		GlycoNode[] linkSugars = new GlycoNode[2];

		for (ccp.api.molecule.Molecule.MolResLinkEnd linkEnd: link.getMolResLinkEnds()) {

		    String linkAtomName = linkEnd.getLinkEnd().getBoundChemAtom().getName();

		    // this is a hack to test the principle. need to parse this properly
		    String linkEl = linkAtomName.substring(0,1);
		    int linkNum = Integer.parseInt(linkAtomName.substring(1,2));

		    util_log.info("  link end " + linkEnd.getLinkCode() + ", " + linkAtomName + "=> " + linkEl + " " + linkNum);
		    
		    // which end is the child (deoxygenated) end? 1 is child
		    // end, 0 is parent end. Need to make sure that we don't
		    // populate the same end on both passes.
		    int idx;
		    if (linkEl.equals("C")) {
			idx = 1;
		    } else {
			idx = 0;
		    }
		    
		    linkNums[idx] = linkNum;

		    ccp.api.molecule.Molecule.MolResidue molRes = linkEnd.getMolResidue();
		    if (! (ccpn2ecdbMap.containsKey(molRes.getSerial()))) {
			util_log.warn("  cannot find monomer for " + molRes.getSerial());
			addLinkage = false;
			linkSugars[idx] = null;
		    } else {
			linkSugars[idx] = (Monosaccharide) ccpn2ecdbMap.get(molRes.getSerial());
		    }
		    		   
		}

		if (addLinkage == true) {

		    t_linkage.addParentLinkage(linkNums[0]);
		    t_linkage.addChildLinkage(linkNums[1]);
		    t_linkage.setParentLinkageType(LinkageType.H_AT_OH);
		    t_linkage.setChildLinkageType(LinkageType.DEOXY);

		    t_edge.addGlycosidicLinkage(t_linkage);		    
		    fullSugar.addEdge(linkSugars[0], linkSugars[1], t_edge);

		    util_log.info("created new edge");

		}
		    		    
	    }

		
	    util_log.info("sugar " + fullSugar);


	    GlycoVisitorValidation t_validator = new GlycoVisitorValidation();
	    t_validator.start(fullSugar);
	    ArrayList<String> t_aErrors = t_validator.getErrors();

	    for (String s: t_aErrors) {
		util_log.error(s);
	    }

	    if (t_aErrors.size() > 0) {
		throw new Exception("Created invalid sugar");
	    } 
		
	    SugarExporterGlycoCTCondensed t_exporter = new SugarExporterGlycoCTCondensed();
	    t_exporter.start(fullSugar);
	    molSeq = t_exporter.getHashCode();
	 
	    util_log.info("got code " + molSeq);

	return molSeq;

    }


    public static NmrEvidence linkProjectToDatabase(MemopsRoot project, Contributor contributor) {


	// create the NmrEvidence object that links the ECDB schema
	// with the CCPN schema

	NmrEvidence evid = new NmrEvidence();
	evid.setMemopsRoot(project);
	evid.setContributor( contributor );
	evid.setTechnique( Technique.lookupAbbrev("nmr") );
	
	// FIXME: need to look into populating experiment_step
                        	
	// FIXME: need to look in to loading  references

	Eurocarb.getEntityManager().store(evid);
            
	// FIME: link evidence to experiment step

	// add evidence to glycan sequence get the GlycoCT code:

	// FIXME

	// We need to think about the cardinality here. Assume for now
	// that every molecule define in the CCPN project should be
	// linked to the evidence.

	// FIXME

	// had to hack the DB to remove the NOT NULL constraint on
	// sequence_ct_condensed.

        // FIXME

	// had to remove UK on sequence_iupac here; problems in
	// iupac sequence generation

	try {

	    for (Molecule mol: project.getMolecules()) {

		try {

		    String sequence_ct = determineGlycoCtCode(mol);				
		    SugarSequence sseq = new SugarSequence( sequence_ct, SequenceFormat.Glycoct );
		    GlycanSequence glycan_sequence = GlycanSequence.lookupOrCreateNew( sseq );

		    // FIXME: now link to biological_context
		    // FIXME: link to citation

		    Map<String, Object> molMap = new HashMap<String, Object>();
		    AppDataInt molMapData;
		    molMap.put("application","ECDB");
		    molMap.put("keyword","GLYCAN_ID");

		    if (glycan_sequence.getGlycanSequenceId() <= 0) {

			// FIXME: still not sure how robust the build is
			// so assume that this can fail. Therefore protect
			// the linking of glycan_sequence to evidence

			try {
			    Eurocarb.getEntityManager().store(glycan_sequence);
			    glycan_sequence.addEvidence(evid);
			    
                            molMap.put("value", glycan_sequence.getGlycanSequenceId());
			    molMapData = new AppDataInt(molMap);
			    mol.addApplicationData(molMapData);
			    
			} catch (Exception ee) {
			    util_log.info("failed to load GlycanSequence ");
			}
		    } else if (glycan_sequence == null) {

			// this is an error

		    } else {

			glycan_sequence.addEvidence(evid);

			molMap.put("value", glycan_sequence.getGlycanSequenceId());
			molMapData = new AppDataInt(molMap);
			mol.addApplicationData(molMapData);
			    		   		
		    }   
		} catch (Exception e) {
		    util_log.error("ERROR: " + e.getMessage());		    
		}	
	    }


	} catch (Exception ee) {
	    util_log.error("ERROR: " + ee.getMessage());		    
	}
	                   
	util_log.info("success");

	return evid;
    }



    private static boolean ccpnRootTest (File f) {
		
	if (f.getName().equals("Implementation"))
	    {

		if (f.getParentFile().getName().equals("memops"))
		    return true;

	    }

	return false;


    }
	
}


class XmlFileFilter implements FileFilter {

  public boolean accept(File pathname) {

    if (pathname.getName().endsWith(".xml"))
      return true;
    return false;
  }
}
