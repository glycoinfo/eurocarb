
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

JMCI Development notes:

Much of this code is either based on, or taken directly from, early
work done by Siegfried.

The initial load worked by loading a MemopsRoot using the basic xml
i/o and then saving through the ECDB HibernateEntityManager.  However,
the EntityManager.store() method is a very thin layer over a hibernate
save() and so it was relatively easy to configure memops.format.sql.Io
to save through the ECDB sessionFactory. This made is simple to use
the existing mechanisms for linking pre-loaded reference data during
the load.


Known bugs and problems:

1. Linking to reference data. The CCPN loading mechanism works through
   two stages.  Initially (on refreshTopObjects) a stub is loaded and
   then on load() the rest of the data is inserted. It turns out that
   in xmlsql mode (i.e. when reference data is taken from the DB and
   other data from file) that the stubs for the reference data are
   still created from the files. Thus, currently it is necessary to 
   have all the ChemComps in the DB present in file form too.

   This is considered a bug and is on the list to be fixed

2. Downloading data. Currently we cannot download data from the server
   This is merely a matter of storing the location (NmrEvidence would
   be a good choice) and then writing the servlet.
 
   A high prioroty for further work.

*/


public class UploadProject extends AbstractExperimentAwareAction implements RequiresLogin
{
    protected static final Logger ms_log = Logger.getLogger( UploadProject.class.getName() );
  
    // FIXME: JMCI
    // need to store two versions of the data, one pre-casper and one post-casper
    // it would make sense to have two root locations that can be configured externally
    // and then a UID that is generated in this package and stored in NmrEvidence. The
    // two paths will then be:

    // $DATA_ROOT/orig/$UID/$PROJECT_NAME
    // $DATA_ROOT/casper/$UID/$PROJECT_NAME

    // we can then serve the project files (either as uploaded or post-casper)


    private static final String PATH_REF_DATA  = System.getenv("CATALINA_BASE") + "/application/Eurocarbdb/data/ccpn_ref_data";
    private static final String PATH_GENERAL_DATA  = System.getenv("CATALINA_HOME") + "/data/ccpn_user_data";
    private static final String PATH_PROJECTS   = System.getProperty("java.io.tmpdir");

    private File projectFile = null;
    private String projectFileContentType = null;
    private String projectFileFileName = null;  

    // FIXME:

    // may need to revise this once we have the final workflow in place including
    // CASPER

    // path of the project
    private String repositoryPath = null;
    // name of the project
    private String projectName = null;
    // directory where project is stored on disk
    private String projectDir = null;

    private MemopsRoot project = null;

    private NmrEvidence evid = null;


    //private ExperimentStep experiment_step = null;
    //private GlycanSequence glycan_sequence = null;
    //private BiologicalContext biologicalContext = null;           
    //private List<Reference> references = null;
    
    
    class AllElements implements NodeFilter
    {
      public short acceptNode (Node n)
      {
        if (n.getNodeType() == Node.ELEMENT_NODE)
        {
            return FILTER_ACCEPT;
        }

        return FILTER_SKIP;
      }
    }

    // output message
    private String strMessage = "";

    public String getMessage()
    {
        return strMessage;
    }

    public void setMessage(String strMessage)
    {
        this.strMessage = strMessage;
    }

    //public void setExperimentStep(ExperimentStep exp_step) { experiment_step = exp_step; }
    //public ExperimentStep getExperimentStep() { return experiment_step; }   

    //public void setGlycanSequence(GlycanSequence seq) { glycan_sequence = seq; }
    //public GlycanSequence getGlycanSequence() { return glycan_sequence; }

    //public void setBiologicalContext(BiologicalContext bc) { biologicalContext = bc; }

    //public BiologicalContext getBiologicalContext() { return biologicalContext; }

    //public List<Reference> getReferences() { return references; }
    //public void setReferences(List<Reference> refs) { references = refs; }

    public File getProjectFile() { return this.projectFile; }
    public void setProjectFile(File file) { this.projectFile = file; }

    public String getProjectFileContentType() { return this.projectFileContentType; }
    public void setProjectFileContentType(String contentType) { this.projectFileContentType = contentType; }

    public String getProjectFileFileName() { return this.projectFileFileName; }
    public void setProjectFileFileName(String filename) { this.projectFileFileName = filename; }        

    public Integer getNmrEvidenceId() { return this.evid.getNmrEvidenceId(); }    
    public Integer getEvidenceId() { return this.evid.getEvidenceId(); }    

    private void streamToFile(InputStream stm, String targetFilename)
    {
        FileOutputStream stmOut = null;
        byte[] buffer = new byte[128];
        int bytecount;
        
        try {stmOut = new FileOutputStream(new File(targetFilename));}
        catch (java.io.IOException e) 
        {
            System.out.println("Error opening output file '" + targetFilename + "': " + e.toString()); 
        }
        
        try
        {
            while ((bytecount = stm.read(buffer)) > 0)
            {
                stmOut.write(buffer, 0, bytecount);
            }
            stmOut.close();
        }
        catch (java.io.IOException e) 
        {
            System.out.println("Error writing output file '" + targetFilename + "': " + e.toString()); 
        }
    }
    
    private File unzip(File fArchive) throws Exception
    {
        File fTempDir = createTempFolder();
        
	ms_log.info("Archive name: " + fArchive.getName());

	if(this.getProjectFileFileName().endsWith(".zip"))
	{
	    System.out.println("Attempting to unzip");
	    ZipFile zip = new ZipFile(fArchive);

	    Enumeration en = zip.entries();
	    while(en.hasMoreElements())
            {
		ZipEntry entry = (ZipEntry)en.nextElement();
		if (entry.isDirectory())
                {
		    System.out.println("directory ignored: " + entry.toString());
		    continue;
                }
		InputStream stm;
		try {stm = zip.getInputStream(entry);}
		catch (java.io.IOException e)
                {
		    System.out.println("Cannot get input stream for '" + entry.toString() + "' in zip file '" + fArchive.getAbsolutePath());
		    return null;
		}
                String targetFilename = fTempDir.getAbsolutePath() + File.separator + entry.toString();
                int lastSlash = targetFilename.lastIndexOf(File.separator);
                if (lastSlash > 0)
                {
		    String dirName = targetFilename.substring(0, lastSlash);
		    new File(dirName).mkdirs();
                }

		streamToFile(stm, targetFilename);
	    }
	}
	else
	{
	    System.out.println("Attempting to gunzip and untar");
	    try
            {
		GZIPInputStream in = new GZIPInputStream(new FileInputStream(fArchive));

		String outFilename=fTempDir + File.separator + "project.tar";

		OutputStream out = new FileOutputStream(outFilename);

		byte[] buf = new byte[1024];
		int len;

		while ((len = in.read(buf)) > 0) {
		    out.write(buf, 0, len);
		}
		in.close();
		out.close();
	    }
            catch (Exception e)
            {
		throw (e);
            }
	    try
            {
		/* The 'tar' command must exist on the system */
		String [] untarCmd = {"sh", "-c", "cd " +
				      fTempDir +
				      "; tar -xf project.tar; rm project.tar; cd -"};

		Process proc = Runtime.getRuntime().exec(untarCmd);
		proc.waitFor();

	    }
	    catch (Exception e)
            {
		throw (e);
	    }
	}

	System.out.println("Extracted directory: " + fTempDir);
        
        return fTempDir;
    }
    
    
    
    public static String getNodeValue(Node node) 
    {
        StringBuffer buf = new StringBuffer();
        NodeList children = node.getChildNodes();
        for (int i = 0; i < children.getLength(); i++) 
        {
            Node textChild = children.item(i);
            if (textChild.getNodeType() != Node.TEXT_NODE) 
            {
                continue;
            }
            
            buf.append(textChild.getNodeValue());
        }
        return buf.toString();
    }
    
    public static void removeChildNodes(Node n)
    {
        while (n.hasChildNodes())
        {
            n.removeChild(n.getLastChild());
        }        
    }


    /*

    Looks through the uploaded directory tree to identify the root of the
    repository path and the name of the project.

    FIXME?:

    We could look to change this method to look for ALL the CCPN project
    directories in an uploaded bundle, with a view to running a batch load


    */

    private void determineProjectParameters(File fProjectDir) throws IOException {

	ms_log.info("fProjectDir " + fProjectDir);
	File fMainFile = CcpnUtil.locateMainProjectFile(fProjectDir);

	ms_log.info("fMainFile " + fMainFile);


	String n = fMainFile.getName();
	ms_log.info("name " + n);
	projectName = n.substring(0,n.length()-4);
 	ms_log.info("projectName " + projectName);

	try {
	    projectDir = fMainFile.getParentFile().getParentFile().getParentFile().getName();
	    repositoryPath = fMainFile.getParentFile().getParentFile().getParentFile().getCanonicalPath();
	} catch (SecurityException se) {
	    throw new IOException("cannot determine CCPN repository path");
	}
      	
 	ms_log.info("repositoryPath " + repositoryPath);
    }
 

    
    
    // /// begin - static helper routines
    //
    
    private static void deleteDirectory(File dir)
    {
        File[] fileArray = dir.listFiles();
        
        if (fileArray != null)
        {
            for (int i = 0; i < fileArray.length; i++)
            {
                if (fileArray[i].isDirectory())
                {
                    deleteDirectory(fileArray[i]);
                }
                else
                {
                    fileArray[i].delete();
                }
            }
        }
        
        dir.delete();
    }
    
    private static File createTempFolder() throws IOException
    {
        File tempFile = File.createTempFile("ccpn_", "", new File(PATH_PROJECTS));
        
        if (!tempFile.delete() || !tempFile.mkdir())
        {
            throw new IOException();
        }

        return tempFile;        
    }
    
    public List<String> pathFromReducingEnd(ccp.api.molecule.Molecule.MolResidue molRes) throws Exception
	{
		List<String> vecLinkages = new Vector();
		ccp.api.molecule.Molecule.MolResLinkEnd mrle = parentLinkage(molRes);
		
		while (mrle != null)
		{
			vecLinkages.add( mrle.getLinkCode() );
			molRes = mrle.getMolResidue();
			
			mrle = parentLinkage(molRes);
		}
		
		Collections.reverse(vecLinkages);
	
		return vecLinkages;
	}


	
	public ccp.api.molecule.Molecule.MolResLinkEnd parentLinkage(ccp.api.molecule.Molecule.MolResidue molRes) throws Exception
	{
		Set<ccp.api.molecule.Molecule.MolResLinkEnd> mrles = molRes.getMolResLinkEnds();
		String strElement;
		
		for(ccp.api.molecule.Molecule.MolResLinkEnd mrle : mrles)
		{
			strElement = mrle.getLinkEnd().getBoundChemAtom().getElementSymbol();
			
			if (strElement.equals("C"))
			{
				ccp.api.molecule.Molecule.MolResLink mrl = mrle.getMolResLink();
				ccp.api.molecule.Molecule.MolResLinkEnd otherEnd;
				List<ccp.api.molecule.Molecule.MolResLinkEnd> ends = mrl.sortedMolResLinkEnds();
				
				if (ends.get(0).equals(mrle))
				{
					otherEnd = ends.get(1);
				}
				else
				{
					otherEnd = ends.get(0);
				}
				
				return otherEnd;
			}
		}

		return null;
	}

    
    public String execute() throws Exception 
    {    
        setMessage(submitAction);
        
        ms_log.info(PATH_REF_DATA);
    
        if( submitAction.equals("Upload") ) 
        {
            if (getProjectFile() == null)
            {
                setMessage("no file set");
                return "input";
            }


	    // JMCI EDITED VERSION

	    // All we should need to do is use the standard java i/o
	    // code which requires the path and the project name (get
	    // this from the name of the file in memops/Implementation)

            File fProjectDir = unzip(getProjectFile());
	    determineProjectParameters(fProjectDir);

	    // CASPER may change the project file name so need to
	    // ensure that we keep the original name for uniqueness
	    // in the DB
	    String segmentName = projectName;

	    // CASPER will change the name of the project file to
	    // whatever the parent directory (above memops/Implementation)
	    // is, so store this in order to set the project name
	    // correctly if CASPER works
	    File repDir = new File(repositoryPath);
	    String parentDirName = repDir.getName();
	    ms_log.info("parent directory name is " + parentDirName);

	    /*

	    now we want to run CASPER and save the results. There is
	    a helpful module called Casper_curate which takes a
	    single tgz file as its fileName input. Therefore need
            to run this _before_ uncompressing.

	    NB/
	    
	    1) do we need to check whether CASPER has run before
	    2) need to check whether run was successful
	    
	    */
            ms_log.info("repPath1: " + repositoryPath);
            ms_log.info("projectName1: " + projectName);

 
            ////////////////////////  RUN CASPER ///////////////////////////////
            
	    /*

	    We are going to try to run CASPER and then load the output file.
            However, CASPER needs to have the correct reference data set up
            so we need to load and save the project quickly before trying
            to run CASPER

	    */
	    
	    Casper_curate cproject = new Casper_curate();	    

	    try {
		
		cproject.setProjectFileName(repositoryPath);
		cproject.start();
		
	    } catch (Exception ce) {

		//need to load the original file and log the problem
		ms_log.error("CASPER ERROR: " + ce.getMessage());
		ce.printStackTrace();
	    }
	    
	    String casperOutRepName = repositoryPath + "_CASPER";
	    String casperOutProjectName = parentDirName + "_CASPER";

	    // test to see whether CASPER has worked
	    File newFile = new File(casperOutRepName);

 	    //if (newFile.exists()) {
	    //	repositoryPath = casperOutRepName;
	    //	projectName = casperOutProjectName;
 	    //}


	    // FIXME; shouldn't have to set the ref data. Need to fix the loader
	    // but this should allow stubs to be built using file on the
	    // file system
	    
 	    project = memops.format.sql.Io.loadProjectToDbRef(repositoryPath, projectName, segmentName);	    
 	    ms_log.info("UploadProject.execute: built project " + project);

	    // link in a util method so that we can also access it in
	    // a batch loader.
	    Eurocarb.getEntityManager().beginUnitOfWork();	  
	    evid = CcpnUtil.linkProjectToDatabase(project, getCurrentContributor());
	    Eurocarb.getEntityManager().endUnitOfWork();	  

	    // links the evidence into the DW schema. This is running a
	    // stored procedure on the DB that adds links to the core
	    // schema into the main DW table so enables links out to
	    // be built more quickly
	    Eurocarb.getEntityManager().beginUnitOfWork();
	    evid.linkDw();
	    Eurocarb.getEntityManager().endUnitOfWork();	  

//	    // OLD CODE LEFT FOR INFO ONLY
                        
// 	    // The biological context is a key entry point. However, in this context it
// 	    // makes sense to handle it along with the glycan_sequence because (a)
// 	    // we are going to link to the glycan_sequence (and there may be more than
// 	    // one, each with a different context) and (b) we are going to be following
// 	    // links from Molecule ...
        
//     	    // add biological context
// //     	    if (biologicalContext != null) 
// //             {
// //                 if (biologicalContext.getBiologicalContextId() > 0)
// //                 {
// //                     Eurocarb.getEntityManager().refresh(biologicalContext);
// //                 }
// //                 else 
// //                 {
// //                     biologicalContext.setContributor(Contributor.getCurrentContributor());
// //                     Eurocarb.getEntityManager().store(biologicalContext);
// //                 }
                
// //                 evid.addBiologicalContext(biologicalContext);	    
// //     	    }

//             //add references
//             if (references != null) 
//             {
//                 for (Reference r : references) 
//                 {
//                     if (r.getReferenceId() > 0)
//                     {
//                         Eurocarb.getEntityManager().refresh(r);
//                     }
//                     else 
//                     {
//                         r.setContributor(Contributor.getCurrentContributor());
//                         Eurocarb.getEntityManager().store(r);
//                     }
                    
//                     evid.addReference(r);
//                 }
//             }

// 	    Eurocarb.getEntityManager().store(evid);
            
//             // add evidence to experiment step
//     	    if (experiment_step != null) 
//             {
//         		experiment_step.setEvidence(evid);		
//         		Eurocarb.getEntityManager().update(experiment_step);
//     	    }

            ms_log.error("UploadProject:success");
            return "success";
        }
        else if( submitAction.equals("Cancel") ) 
        {
            ms_log.error("UploadProject:cancel");
            return "cancel";
        }
                       
        ms_log.error("UploadProject:input");
        return "input";
    } 
    
    
} // end class
