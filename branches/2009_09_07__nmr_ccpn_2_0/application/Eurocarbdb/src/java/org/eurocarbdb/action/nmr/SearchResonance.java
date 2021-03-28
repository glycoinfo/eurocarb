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

For this search to run to speed on a full database it is essential
that the indexes in database/sql/create_indexes_ccpn.sql are built.


Bugs and known problems:

1. At the moment the query is limited to two shifts through a named
   query. It would make much more sense to take an arbitrary number 
   of shifts and build the query dynamically.

2. The query interface would be better off as a single text box
   with a parsing method in this class. It is deeply annoying
   typing in numbers as things are at the moment.

*/


public class SearchResonance extends AbstractExperimentAwareAction 
{
    protected static final Logger ms_log = Logger.getLogger( SearchResonance.class.getName() );

    private String element1;
    private String freq1;
    private String error1;
    private String element2;
    private String freq2;
    private String error2;

    public String getElement1() { return element1;}
    public String getFreq1() { return freq1; }
    public String getError1() { return error1; }
    public String getElement2() { return element2;}
    public String getFreq2() { return freq2; }
    public String getError2() { return error2; }

    public void setElement1(String v) { element1 = v; }
    public void setFreq1(String v) { freq1 = v; }
    public void setError1(String v) { error1 = v; }
    public void setElement2(String v) { element2 = v; }
    public void setFreq2(String v) { freq2 = v; }
    public void setError2(String v) { error2 = v; }


    public String getConfCode(String s) {

	if ( s.equals("stereo_1:C1") ) return "&#945;-";
	else if ( s.equals("stereo_2:C1") ) return "&#946-";
        else return "";

    }

    public List getCompTable() {

	try {

	    // FIXME: This needs to be set up far more cleverly. Just
	    // run this as a quick test of concept

            ms_log.info(" initial values: " + freq1 + " - " + error1);
            ms_log.info(" initial values: " + freq2 + " - " + error2);

	    Float s_low_1 = Float.valueOf(freq1) - Float.valueOf(error1);
	    Float s_high_1 = Float.valueOf(freq1) + Float.valueOf(error1);

	    Float s_low_2 = Float.valueOf(freq2) - Float.valueOf(error2);
	    Float s_high_2 = Float.valueOf(freq2) + Float.valueOf(error2);

            ms_log.info(" fetching Experiment Table: " + s_low_1 + " - " + s_high_1);
            ms_log.info(" fetching Experiment Table: " + s_low_2 + " - " + s_high_2);

	    List i = Eurocarb.getEntityManager()
	         .getQuery( "org.eurocarbdb.dataaccess.nmr.NmrEvidence.CompByShiftTable" )
	         .setParameter("el_1", element1 )
	         .setParameter("s_low_1", s_low_1 )
	         .setParameter("s_high_1", s_high_1 )
	         .setParameter("el_2", element2 )
	         .setParameter("s_low_2", s_low_2 )
	         .setParameter("s_high_2", s_high_2 )
                 .list();

	    return i;

	} catch (Exception e) {

            ms_log.error(" while fetching Shift By Comp Table: " + e.getMessage());
	    return new ArrayList();

	}


    }



    public String execute() throws Exception 
    {

        if( submitAction.equals("Search") ) 
	{

	    return "success";

	}


	return "input";

    }

}
