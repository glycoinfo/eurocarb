
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
import memops.format.sql.PostProcessInterceptor;

/*

JMCI Development notes

Java code underlying the show_project set of actions.


Bugs and known problems:

1. CCPN object retrieval through HQL. Currently CCPN objects are not
   completely reconsistuted through HQL. The origin of this is in the
   changes that had to be made in order to allow many root objects
   (i.e. projects) in a single DB. This meant changing the cardinality
   between MemopsRoot and TopObject, and in practice this means that
   it is necessary to reattach TopObjects to the right MemopsRoot
   on retrieval. Currently this is not happening under HQL, and so it
   is not possible to used any method that calls the root (and this
   is virtually everything other than simple attribute getters)

   This is a serious bug and is on the list to sort out. In the mean
   time, heavy use has been made of sql named queries. These are good
   for speed anyway (especially when querying across the whole db)
   although are not as obvious and lack portability. The aim is to use
   an interceptor associated with the correct root to automatically
   attach on retrieval.

2. Display of ambiguity. At the moment the getShiftTable method returns
   one row per shift. However, it does not label ambiguity. We would like
   to have a system where the method contains a post-processing step
   which combines atoms groups and resonance groups so that we
   have e.g. the following

   H61, H62, H63           3.72         # methyl
   H21, H22                4.12, 3.94   # ambiguous methylene

   For Dublin, it seemed that the quality of the data in the project
   files was not good enough to do this reliably, but this would be a
   key step towards presenting the data clearly

3. Alternate conformations. Many of the projects contains two sets
   of assignments from the alpha and beta forms at the reducing
   end. These are sometimes represented by two sets of shifts for
   the monomer at the reducing end and one set of shifts for everything
   else, or by two sets of shifts throughout the structure. Currently
   we do not separate these out well (at all, infact)

   We should probably add a molecule_id column in tune_shift2atoms and
   order on this.

*/




public class ShowProject extends AbstractExperimentAwareAction
{
    protected static final Logger ms_log = Logger.getLogger( ShowProject.class.getName() );

    private Integer evidenceId = null;
    private NmrEvidence nmrEvidence = null;    
    private MemopsRoot project;
    
    public Integer getEvidenceId() { return evidenceId; }
    public void setEvidenceId(Integer id) { evidenceId = id; }
    
    public NmrEvidence getEvidence() { return nmrEvidence; }
    
    public MemopsRoot getProject() { return project; }

    public List getGlycanSequences() { return nmrEvidence.getGlycanSequences(); }

    public String getConfCode(String s) {

	if ( s.equals("stereo_1:C1") ) return "&#945;-";
	else if ( s.equals("stereo_2:C1") ) return "&#946;-";
        else return "";

    }




    public List getNmrProjects() {

	try {

	   List i = Eurocarb.getEntityManager()
	         .getQuery( "org.eurocarbdb.dataaccess.nmr.NmrEvidence.NmrProjects" )
	         .setParameter("projectName", project.getName() )
                 .list();


	    return i;

	} catch (Exception e) {

            ms_log.error(" while fetching NmrProjects: " + e.getMessage());
	    return new ArrayList();

	}

    }

    public List getExperiments() {

	try {

	   List i = Eurocarb.getEntityManager()
	         .getQuery( "org.eurocarbdb.dataaccess.nmr.NmrEvidence.NmrExperiments" )
	         .setParameter("projectName", project.getName() )
                 .list();


	    return i;

	} catch (Exception e) {

            ms_log.error(" while fetching NmrProjects: " + e.getMessage());
	    return new ArrayList();

	}

    }


    public List getExperimentTable() {

	try {

	   List i = Eurocarb.getEntityManager()
	         .getQuery( "org.eurocarbdb.dataaccess.nmr.NmrEvidence.ExperimentTable" )
	         .setParameter("projectName", project.getName() )
                 .list();


	    return i;

	} catch (Exception e) {

            ms_log.error(" while fetching Experiment Table: " + e.getMessage());
	    return new ArrayList();

	}

    }

    public List getShiftTable(Integer shiftListId) {

	try {


	   List i = Eurocarb.getEntityManager()
	         .getQuery( "org.eurocarbdb.dataaccess.nmr.NmrEvidence.ShiftByExptTable" )
	         .setParameter("projectName", project.getName() )
	         .setParameter("shiftListId", shiftListId )
                 .list();


	   return i;

	} catch (Exception e) {

            ms_log.error(" while fetching Experiment Table: " + e.getMessage());
	    return new ArrayList();

	}
    }


    public List getExptTable() {

	try {


	   List i = Eurocarb.getEntityManager()
	         .getQuery( "org.eurocarbdb.dataaccess.nmr.NmrEvidence.ExptsByProject" )
	         .setParameter("projectName", project.getName() )
                 .list();


	   return i;

	} catch (Exception e) {

            ms_log.error(" while fetching Experiment Table: " + e.getMessage());
	    return new ArrayList();

	}
    }

    public List getMeasTable() {

	try {

	   List i = Eurocarb.getEntityManager()
	         .getQuery( "org.eurocarbdb.dataaccess.nmr.NmrEvidence.MeasListsByProject" )
	         .setParameter("projectName", project.getName() )
                 .list();

	    return i;


	} catch (Exception e) {

            ms_log.error(" while fetching Experiment Table: " + e.getMessage());
	    return new ArrayList();

	}
    }


    
    @Override
    public String execute() throws Exception
    {
        if (getEvidenceId() != null)
        {

            nmrEvidence = NmrEvidence.lookupById(getEvidenceId());
            
        }

	project = nmrEvidence.getMemopsRoot();
	Eurocarb.getEntityManager().beginUnitOfWork(new PostProcessInterceptor(project));
        
        if (project == null)
        {
            return "error";
        }
	
	
	
	return "success";
    }
	
}
