
package org.eurocarbdb.action.nmr;

import org.eurocarbdb.tranche.*;
import org.eurocarbdb.action.*;
import org.eurocarbdb.dataaccess.*;
import org.eurocarbdb.dataaccess.core.*;
import org.eurocarbdb.dataaccess.nmr.*;
import org.eurocarbdb.dataaccess.hibernate.*;

import org.eurocarbdb.action.user.UserManager;

import org.eurocarbdb.dataaccess.hibernate.*;

import java.util.*;
import java.io.*;

import memops.api.Implementation.MemopsRoot;

import org.eurocarbdb.action.AbstractUserAwareAction;

/*

Loading script for batches of entries. The aim is to get around two
problems. The first is that loading multiple entries through a single
SessionFactoty leads to memory problems as the number of persistent
objects build. Ideally we would detatch (evict?) MemopsRoot objects
at the end of the load but I haven't been able to find a way to do
this yet. The second problem is how to reload the SessionFactory.
As the sessionFactory is generated statically, we can't just generate
a new one. We could try to reload the class, but this is not easy in
java. Therefore the simple solution is to have a java script that
loads a certain number of entries and then loop externally through
them. This is not a pleasant way of doing it but will work to get
ECSB loaded with sugbase for now. We can then look into the more
sophisticated methods.

FIXME

The iteration is extremely simple here and is designed for sugabase.
This hsould be rewritten in more general form

*/

public class LoadBatchData
{

    private static final String usage = "LoadBatchXmlSql <rootDir> <suffix> <contributor> <ref repository> <entry>+";
    
    private static String rootDir;
    private static String suffix;
    private static String user;
    private static String refRep;
    private static ArrayList<String> entries = new ArrayList<String>();

    static public void main(String[] args)
    {

	if (args[0] != null) {
	    rootDir = (String) args[0];
	    if (rootDir.endsWith("/")) {
		rootDir = rootDir.substring(0,rootDir.length()-1);
	    }
	    System.out.println("Setting rootDir to " + rootDir);	    
	} else {
	    System.out.println(usage);
	    System.exit(1);
	}
	
	if (args[1] != null) {
	    suffix = (String) args[1];
	    if (suffix.endsWith("/")) {
		suffix = suffix.substring(0,suffix.length()-1);
	    }
	    System.out.println("Setting suffix to " + suffix);	    
	} else {
	    System.out.println(usage);
	    System.exit(1);
	}
	
	if (args[2] != null) {
	    user = (String) args[2];
	    System.out.println("Setting user to " + user);	    
	} else {
	    System.out.println(usage);
	    System.exit(1);
	}

	if (args[3] != null) {
	    refRep = (String) args[3];
	    System.out.println("Setting reference repository to " +refRep);	    
	} else {
	    System.out.println(usage);
	    System.exit(1);
	}

	for (int i = 4; i < args.length; i++) {
	    entries.add((String) args[i]); 
	    System.out.println("Adding entry " + i + ": " + args[i]);	    
	}

	// Do all this as guest for now. It is just easier than
	// trying to hack into the login system ...

  	Eurocarb.getEntityManager().beginUnitOfWork();	  
 	Contributor contributor = Eurocarb.getCurrentContributor();
  	Eurocarb.getEntityManager().endUnitOfWork();	  
			
	for (int i=0; i<entries.size(); i++) {
	    
	    String projectName = entries.get(i);
	    String segmentName = projectName;
	    String repositoryPath = rootDir + "/" + projectName + "/" + suffix;
	    System.out.println("LOADING index " + i + ": " + projectName);

		    
	    try {

//              // FOR NOW RUN CASPER OFFLINE AND THEN CHECK TO SEE
//              // WHETHER OUTPUT FILE EXISTS

// 		Casper_curate cproject = new Casper_curate();	    

// 		try {

// 		    cproject.setProjectFileName(repositoryPath);
// 		    cproject.start();
	      
// 		} catch (Exception ce) {

// 		    //need to load the original file and log the problem
// 		    System.out.println("CASPER ERROR: " + ce.getMessage());
// 		    ce.printStackTrace();
// 		}
	    
		String casperOutFileName = repositoryPath + "_CASPER";
		String casperOutProjectName;

		// FIXME
		// This is a quick workaround. Needs to handle all cases
		// properly

		if (suffix != "") {
		   casperOutProjectName = suffix + "_CASPER";
		} else {
		   casperOutProjectName = projectName + "_CASPER";		    
		}
		File newFile = new File(casperOutFileName);

		if (newFile.exists()) {
		   repositoryPath = casperOutFileName;
		   projectName = casperOutProjectName;
		}

		    
		MemopsRoot project = memops.format.sql.Io.loadProjectToDbRef( repositoryPath, projectName, segmentName, refRep);

                // links the CCPN project to the core schema
 		Eurocarb.getEntityManager().beginUnitOfWork();	  
 		NmrEvidence evid = CcpnUtil.linkProjectToDatabase(project, contributor);
 		Eurocarb.getEntityManager().endUnitOfWork();	  

		// links the evidence into the DW schema
 		Eurocarb.getEntityManager().beginUnitOfWork();	  
		evid.linkDw();
 		Eurocarb.getEntityManager().endUnitOfWork();	  

	    } catch (Exception e) {
			
		e.printStackTrace();
		System.out.println(e.getMessage());	

	    }
	}
    }
}
