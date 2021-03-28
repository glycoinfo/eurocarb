package org.eurocarbdb.action.nmr;

import org.eurocarbdb.tranche.*;
import org.eurocarbdb.action.*;
import org.eurocarbdb.dataaccess.*;
import org.eurocarbdb.dataaccess.core.*;
import org.eurocarbdb.dataaccess.nmr.*;
import org.eurocarbdb.dataaccess.hibernate.*;

import org.eurocarbdb.sugar.SugarSequence;
import org.eurocarbdb.sugar.SequenceFormat;

import com.opensymphony.xwork.Action;
import com.opensymphony.xwork.Preparable;

import org.hibernate.*; 
import org.hibernate.criterion.*; 
import org.eurocarbdb.dataaccess.hibernate.*;

import org.eurocarbdb.MolecularFramework.io.GlycoCT.SugarImporterGlycoCTCondensed;
import org.eurocarbdb.MolecularFramework.io.GlycoCT.SugarExporterGlycoCTCondensed;

import org.eurocarbdb.MolecularFramework.sugar.GlycoEdge;
import org.eurocarbdb.MolecularFramework.sugar.GlycoNode;
import org.eurocarbdb.MolecularFramework.sugar.Linkage;
import org.eurocarbdb.MolecularFramework.sugar.LinkageType;
import org.eurocarbdb.MolecularFramework.sugar.Monosaccharide;
import org.eurocarbdb.MolecularFramework.sugar.Sugar;

import org.w3c.dom.*;
import org.w3c.dom.traversal.*;

import org.apache.xml.serialize.*;
import org.apache.xerces.parsers.DOMParser;
import org.apache.xerces.dom.DocumentImpl;

import java.util.*;
import java.io.*;
import org.apache.commons.io.*;
import org.apache.log4j.Logger;

import java.lang.reflect.*;

import java.util.zip.*;

import memops.api.Implementation.MemopsRoot;

import ccp.api.molecule.Molecule.Molecule;
import ccp.api.molecule.Molecule.MolResidue;


/**
*   @author             ss
*   @version            $Rev: 3354 $
*/


/*

JMCI Development notes

This method was never fully implemented. The idea was to use the spreads
on the shifts from the database to score the probability that a given
set of shifts corresponded to a monomer in the DB.

*/

public class SearchComp extends AbstractExperimentAwareAction 
{
    protected static final Logger ms_log = Logger.getLogger( SearchComp.class.getName() );

    private String text;

    private List inputList = new ArrayList();

    public String getText() { return text; }
    public void setText(String txt) { this.text = txt; }


    private void parseText() {

	// parse a text block. hard code for now

	//for (int i = 0; i < 2; i ++ ) {

	ms_log.info("parsing");

	List row1 = new ArrayList();

	row1.add("H");
	row1.add(4.4);
	row1.add(4.8);
 
	inputList.add(row1);


	List row2 = new ArrayList();

	row2.add("H");
	row2.add(4.8);
	row2.add(4.4);
 
	inputList.add(row2);

	//}

    }


    private void rankComps() 
	throws Exception {

	// all components with data
	// could consider including a number of dataset below which
	// we do not include. For the moment we will estimate an
	// error for sets with one set of data.
	Collection objCollection = getCompTable();

        Iterator iter = objCollection.iterator();
        while (iter.hasNext()) {

            Object[] row = (Object[]) iter.next();

	    System.out.println("got list item " + row[0] + "  " + row[1]);

	    String ccpCode = (String) row[0];
	    String descriptor = (String) row[1];
	    
	    List targList = getCompShiftTable(ccpCode, descriptor);

	    //float score = scoreMatch(inputList, targList); 

	}

    }


    /*

    This is the bit that bites. Work out the optimal score
    for each pair

    */

//     private float scoreMatch(List inputList, List targList) {

// 	// use a quick and dirty method

// 	// need a simple algorithm to scan NpM

// 	for (int i = 0; i <= inputList.size(); i++) {



// 	}

// 	return null;


//     }


//     private float scoreShift(float input, float targ, float stddev) {



//     }



    private List getCompTable() 
	throws Exception {


	List i = Eurocarb.getEntityManager()
	    .getQuery( "org.eurocarbdb.dataaccess.nmr.NmrEvidence.CompAllTable" )
	    .list();

	return i;	
 
    }


    public List getCompShiftTable(String ccpCode, String descriptor) {

	try {

	   List i = Eurocarb.getEntityManager()
	         .getQuery( "org.eurocarbdb.dataaccess.nmr.NmrEvidence.AvgShiftByCompTable" )
	         .setParameter("ccpCode", ccpCode)
	         .setParameter("descriptor", descriptor )
                .list();

	    return i;

	} catch (Exception e) {

            ms_log.error(" while fetching Atom Shift Table: " + e.getMessage());
	    return new ArrayList();

	}
    }



    public String execute() throws Exception 
    {

	ms_log.info("Starting SearchComp");

        if( submitAction.equals("GetComps") ) 
	{

	    //if( getText() != null ) 
	    //{

		try {

		    parseText();

		    rankComps();

		    return "success";

		} catch (Exception e) {

		    ms_log.info("Error scoring comps " + e.getMessage());

		    return "success";


		}
	    
	    //}

	}


	return "input";

    }

}
