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
 *   Last commit: $Rev: 1685 $ by $Author: magnusl@organ.su.se $ on $Date:: 2009-09-21 #$  
 */
/*  class Casper_simulate
 *
 *
 *
 *  @author           ml
 *
 */
package org.eurocarbdb.action.nmr;

import java.util.Collection;
import java.io.*;
import java.util.regex.Pattern;
import java.util.regex.Matcher;
import java.util.Enumeration;
import java.util.Iterator;

// 3rd party imports
import com.opensymphony.webwork.dispatcher.multipart.MultiPartRequestWrapper;
import com.opensymphony.webwork.ServletActionContext;

// eurocarb imports
import org.eurocarbdb.action.EurocarbAction;
import org.eurocarbdb.dataaccess.EntityManager;
import org.eurocarbdb.action.exception.InsufficientParams;

// static imports
import static org.eurocarbdb.util.StringUtils.join;
import static org.eurocarbdb.dataaccess.Eurocarb.getEntityManager;

public class Casper_curate extends Casper
{
    //------------------------- FIELDS ----------------------------//

    //------------------------ METHODS ----------------------------//

    public Casper_curate()
    {
	this.setMode("curate");
    }

    /* Generates the script that will be used by Casper for this run */
    public String writeScript() throws Exception
    {
	FileOutputStream outfile;
	PrintStream out;
	File outDir, outFile;

	try
	    {
		if(this.getProjectFileName().endsWith("/"))
		    {
			/* Remove trailing / from projectFileName */
			this.setProjectFileName(this.getProjectFileName().
						substring(0,this.getProjectFileName().length()-1));
		    }
		System.out.println("Project name: " + this.getProjectFileName());
		if(this.getProjectFileName().equals(""))
		    {
			throw new Exception("In order to curate a project a CCPN project file name must be specified.");
		    }

		outfile=new FileOutputStream
		    (this.getPath() + File.separator + "temp" + 
		     File.separator + this.getId() + ".script");
		out = new PrintStream(outfile);

		outDir=this.createTempDirectory();

		out.println("set error '" + this.getPath() + File.separator + "temp" +
			    File.separator + this.getId() + ".error'");

		out.println("ccpnload '"+ this.getProjectFileName() + "'");

		/* Don't use experimental shifts more than once - only use
		   the assignments in the project */
		out.println("set nomultiassign 1");

		/* Don't make any new assignments in the project */
		out.println("set onlycurate 1");

		out.println("multibuild sim");
		out.println("multildassign sim /");
		out.println("multicorrect /");

		out.println("multiassign sim /");

		out.println("ccpnsave '" + getProjectFileName() + "_CASPER'");
        
		out.println("quit");
		out.close();
	    }
	catch(Exception e)
	    {
		System.err.println("Error writing parameters script file");
		throw (e);
	    }
	try
	    {
		this.writeExecutionScript();
	    }
	catch(Exception e)
	    {
		throw (e);
	    }

	return SUCCESS;
    }

    public String start()
    {
	Process proc;
	BufferedReader input;
	String data, path, binpath, scriptpath;

	try
	    {
		this.findPath();
	    }
	catch (Exception e)
	    {
		System.err.println("Directory pattern not found. Exception: " + e);
		return ERROR;
	    }

	try
	    {
		idFromFile();
		System.out.println("Id is: "+ this.getId());
	    }
	catch(Exception e)
	    {
		System.err.println("Exception getting Id: " + e);
		return ERROR;        
	    }

	if(this.getProjectFileName().equals(""))
	    {
		System.err.println("In order to curate a project a CCPN project file name must be specified.");
		return ERROR;
	    }
	System.out.println(getProjectFileName());
	if(this.getProjectFileName().endsWith(".tgz") ||
	   this.getProjectFileName().endsWith(".tar.gz"))
	    {
		try
		    {
			this.unzipProject();
		    }
		catch(Exception e)
		    {
			System.err.println("Error opening/unzipping project. Exception: " +e);
			return ERROR;
		    }
            }
	try
	    {
		writeScript();
	    }
	catch(Exception e)
	    {
		System.err.println("Exception writing script: " + e);
		return ERROR;        
	    }
	scriptpath=this.getPath() + File.separator + "temp" + File.separator + this.getId() + 
	    ".runscript";
    
	try
	    {
		String [] execstr={"sh", scriptpath};

		System.out.println("Starting CASPER: " + scriptpath);

		proc=Runtime.getRuntime().exec(execstr);

		/*		input = new BufferedReader(new InputStreamReader(proc.getInputStream()));*/

		/* Shouldn't need to parse the output. The errors are saved in
		   the project. */
		/*		this.parseOutput(input);*/

		proc.waitFor();
	    }
	catch(Exception e)
	    {
		System.err.println("Exception running Casper: " + e);
		return ERROR;        
	    }
	try
	    {
		this.removeFiles();
	    }
	catch(Exception e)
	    {
		System.err.println("Exception removing files: " + e);
		return ERROR;
	    }
	return SUCCESS;
    }
}
