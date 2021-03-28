
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

Batch run script for Capser based on LoadBatchData. This is
probably not the simplest way of doing this and is a strong
candidate for refactoring later.

*/

public class RunBatchCasper
{

    private static final String usage = "RunBatchCasper <rootDir> <suffix> <contributor> <ref repository> <entry>+";
    
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

	
	for (int i=0; i<entries.size(); i++) {
	    
	    String projectName = entries.get(i);
	    String segmentName = projectName;
	    String repositoryPath = rootDir + "/" + projectName + "/" + suffix;
	    System.out.println("TESTING: CASPER " + i + ": " + projectName);

	    
	    try {

	        System.out.println("  reading " + repositoryPath);

		Casper_curate cproject = new Casper_curate();	    

		cproject.setProjectFileName(repositoryPath);
		cproject.start();
	      
	    
	    } catch (Exception e) {
			
		e.printStackTrace();
		System.out.println(e.getMessage());	

	    }
	}
    }
}
