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
*   Last commit: $Rev: 1666 $ by $Author: magnusl@organ.su.se $ on $Date:: 2009-09-20 #$  
*/
/*  class Casper_getshifts
*
*
*
*  @author           ml
*
*/
package org.eurocarbdb.action.nmr;

import java.util.Collection;
import java.io.*;
import java.util.Enumeration;
import java.util.Iterator;
import java.util.regex.Pattern;
import java.util.regex.Matcher;

// 3rd party imports
import com.opensymphony.webwork.dispatcher.multipart.MultiPartRequestWrapper;
import com.opensymphony.webwork.ServletActionContext;

// eurocarb imports
import org.eurocarbdb.action.EurocarbAction;
import org.eurocarbdb.dataaccess.EntityManager;
import org.eurocarbdb.action.exception.InsufficientParams;
import org.eurocarbdb.application.glycanbuilder.ConvertGWS;

// static imports
import static org.eurocarbdb.util.StringUtils.join;
import static org.eurocarbdb.dataaccess.Eurocarb.getEntityManager;

public class Casper_getShifts extends Casper
{
    private InputStream shiftTable;

    public InputStream getShiftTable()
    {
	return this.shiftTable;
    }
    public void setShiftTable(InputStream str)
    {
	this.shiftTable=str;
    }
    public void setShiftTable(String str) throws UnsupportedEncodingException
    {
	try
	    {
		this.shiftTable = new ByteArrayInputStream(str.getBytes("UTF-8"));
	    }
	catch(UnsupportedEncodingException e)
	    {
		throw e;
	    }
    }

    public Casper_getShifts()
    {
	this.setMode("getShifts");
    }
    
    public String writeScript() throws Exception
    {
	FileOutputStream outfile;
	PrintStream out;
	File outDir;

	try
	    {
		this.setStructure(this.getStructure().replaceAll("'",""));
		this.setStructure(this.getStructure().replaceAll("\"",""));
		this.setStructure(this.getStructure().replaceAll(";",""));
		this.setName(this.getName().replaceAll("'",""));
		this.setName(this.getName().replaceAll("\"",""));
		this.setName(this.getName().replaceAll(";",""));
		
		if(this.getStructure().equals(""))
		    {
			System.err.println("No structure specified");
			return ERROR;
		    }
		outfile=new FileOutputStream
		    (this.getPath() + File.separator + "temp" + 
		     File.separator + this.getId() + ".script");
		out = new PrintStream(outfile);
		
		outDir=this.createTempDirectory();
		
		out.println("set error '" + this.getPath() + File.separator + "temp" +
			    File.separator + this.getId() + ".error'");

		this.setDisableCcpn(true);
		out.println("disableccpn");
		out.println("set UseCarbBank 1");
		if(this.getName().equals(""))
		    {
			this.setName("sim");
		    }
		out.println("build '" + this.getName() + "' {");
		out.println("ln '" + this.getStructure() + "'");
		out.println("}");
		out.println("show str '" + this.getName() + "'");
		out.println("quit");
		out.close();
	    }
	catch(Exception e)
	    {
		System.err.println("Error writing parameters script file");
		throw(e);
	    }
	try
	    {
		this.writeExecutionScript();
	    }
	catch(Exception e)
	    {
		throw(e);
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

		input = new BufferedReader(new InputStreamReader(proc.getInputStream()));

		this.parseOutput(input);

		this.setShiftTable(this.getResults());

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

    public void parseOutput(BufferedReader input) throws IOException
    {
	String data;

	try
	    {
		System.out.println("Output parsing started");
		while((data=input.readLine())!=null)
		    {
			this.appendResults(data.replaceAll(", actual 0.00 C; 0.00 H; ", " ppm (13C)"));
		    }
	    }
	catch(IOException e)
	    {
		throw(e);
	    }
	System.out.println("Output parsing finished");
    }
}