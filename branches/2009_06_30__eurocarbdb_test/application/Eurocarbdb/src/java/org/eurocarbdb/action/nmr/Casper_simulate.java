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
*   Last commit: $Rev: 1352 $ by $Author: magnusl@organ.su.se $ on $Date:: 2009-06-30 #$  
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

public class Casper_simulate extends Casper
{
    //------------------------- FIELDS ----------------------------//

    public class residueData
    {
    private String name;
    private String value;
    
    public residueData()
    {
        name="";
        value="";
    }
    
    public residueData(String inName, String inValue)
    {
        name=inName;
        value=inValue;
    }

    public String getName()
    {
        return this.name;
    }
    public void setName(String str)
    {
        this.name=str;
    }
    public String getValue()
    {
        return this.value;
    }
    public void setValue(String str)
    {
        this.value=str;
    }
    }
    private residueData [] residueList;

    //------------------------ METHODS ----------------------------//

    public Casper_simulate()
    {
    String [] Names= {"D-Galp","D-Glcp","D-Manp","D-GlcpNAc","D-GalpNAc",
              "D-ManpNAc","D-GalpA","D-GlcpA","D-ManpA","L-Fucp",
              "D-Fucp","L-Rhap","D-Rhap","D-Quip","L-FucpNAc",
              "L-RhapNAc","D-QuipNAc","D-GalpANAc","D-ManpANAc",
              "Abep","Colp","Parp","Tyvp","Ascp","MurpNAc",
              "Aspargine","Serine","Threonine"};
    String [] Values= {"DGal.12346","DGlc.12346","DMan.12346",
               "DGlcNAc.1346","DGalNAc.1346","DManNAc.1346",
               "DGalA.1234","DGlcA.1234","DManA.1234","LFuc.1234",
               "DFuc.1234","LRha.1234","DRha.1234","DQui.1234",
               "LFucNAc.134","LRhaNAc.134","DQuiNAc.134",
               "DGalANAc.134","DManANAc.134",
               "Abe.124","Col.124","Par.124","Tyv.124","Asc.124",
               "MurNAc.146","Asn.4","Ser.3","Thr.3"};
    
    residueList = new residueData[Names.length];

    for(int i=0;i<Names.length;i++)
        {
        residueList[i] = new residueData(Names[i],Values[i]);
        }

    this.setMode("simulate");
    }

    public residueData [] getResidueList()
    {
    return this.residueList;
    }
    public void setResidueList(residueData [] res)
    {
    this.residueList=res;
    }
    public residueData getResidue(int i)
    {
    return this.residueList[i];
    }
    public BufferedReader getGlycoCT() throws Exception
    {
    String data;
    Process proc;
    BufferedReader input;

    System.out.println("GWS: " + this.getSequenceGWS());
    try
        {
        String [] converter = {
            "sh",
            "-c",
            "java -jar " + 
            this.getPath() + File.separator + ".." + File.separator +
            "GlycanBuilder/dist/ConvertGWS.jar '" +
            this.getSequenceGWS() +
            "' glycoct_condensed"
        };
        proc=Runtime.getRuntime().exec(converter);
        input = new BufferedReader(new InputStreamReader(proc.getInputStream()));
        proc.waitFor();
        }
    catch(Exception e)
        {
        System.err.println("Error converting from GWB to GlycoCT structure.");
        throw (e);
        }
    return input;
    }

    /* Generates the script that will be used by Casper for this run */
    public String writeScript() throws Exception
    {
    Unit unit;
    FileOutputStream outfile;
    PrintStream out;
    String res, toRes, line, name;
    String experimental="exp";
    boolean manualres=true;
    File outDir, outFile;
    BufferedReader result;

    try
        {
        outfile=new FileOutputStream
            (this.getPath() + File.separator + "temp" + 
             File.separator + this.getId() + ".script");
        out = new PrintStream(outfile);

        outDir=this.createTempDirectory();

        out.println("set error '" + this.getPath() + File.separator + "temp" +
                File.separator + this.getId() + ".error'");


        if(this.getGraphicalStructures())
            {
            out.println("set printct 1");
            }

        if(!this.getProjectFileName().equals(""))
            {
            out.println("ccpnload '"+ this.getProjectFileName() + "'");
            experimental="/";

            String [] split=this.getUnit(0).getResidue().split("\\.");
            res=split[0];
            if(res.equals(""))
                {
                out.println("build sim /");
                manualres=false;
                }
            }
        if(manualres==true)
            {
            out.println("build sim {");
            /* If there is a structure from GlycanBuilder convert
               it to GlycoCT format and use it as CASPER input */
            if(!this.getSequenceGWS().equals(""))
                {
                out.println("glycoinput *");
                result=getGlycoCT();
                while((line=result.readLine())!=null)
                    {
                    System.out.println(line);
                    out.println(line);
                    }
                out.println("*");
                /*                out.println("set printct 1");*/
                }
            /* Otherwise use the specified structure */
            else
                {
                for(int i=0;i<8;i++)
                    {
                    unit=this.getUnit(i);
                    String [] split=unit.getResidue().split("\\.");
                    res=split[0];
                    if(!res.equals(""))
                        {
                        if(unit.getLinkToPos().equals("m"))
                            {
                            res=res+"OMe";
                            }
                        if(res.equals("Asn") || res.equals("Ser") || res.equals("Thr"))
                            {
                            unit.setConfiguration("");
                            }
                        out.println("unit " + (char)('a'+i) + " " +
                                unit.getConfiguration() +
                                res);
                        }
                    }
                for(int i=0;i<8;i++)
                    {
                    unit=this.getUnit(i);
                    res=unit.getResidue();
                    if(!res.equals(""))
                        {
                        toRes=unit.getLinkToResidue();
                        if(!toRes.equals("") && !unit.getLinkToPos().equals("m"))
                            {
                            out.println("link '" + (char)('a'+i) + "(->" +
                                    unit.getLinkToPos() + ")" +
                                    toRes + "'");
                            }
                        }
                    }
                }
            }
        out.println("}");
        out.println("show str sim");

        if(!this.getCShifts().equals("") || !this.getHShifts().equals("") ||
           !this.getProjectFileName().equals(""))
            {
            if(!this.getCShifts().equals(""))
                {
                out.println("ldexp c exp *");
                out.println(this.getCShifts());
                out.println("*");
                }
            else if(!this.getProjectFileName().equals(""))
                {
                out.println("ldexp c /");
                }
            if(!this.getHShifts().equals(""))
                {
                out.println("ldexp h exp *");
                out.println(this.getHShifts());
                out.println("*");
                }
            else if(!this.getProjectFileName().equals(""))
                {
                out.println("ldexp h /");
                }
            if(!this.getProjectFileName().equals(""))
                {
                out.println("ldexp ch /");
                out.println("ldexp hh /");
                out.println("ldexp cl /");
                }
            if(!this.getCCorrection().equals("") ||
               !this.getHCorrection().equals(""))
                {
                out.println("correct "+ experimental + " " +
                        this.getCCorrection() + " " +
                        this.getHCorrection());
                }
            }

        /* Save spectra as pictures to be able to show them */
        out.println("gnuplot c sim " + experimental +
                " '" + outDir +
                File.separator + "cSpectra.png'");
        out.println("gnuplot c sim " + experimental +
                " '" + outDir +
                File.separator + "cSpectra.eps'");
        out.println("gnuplot h sim " + experimental +
                " '" + outDir +
                File.separator + "hSpectra.png'");
        out.println("gnuplot h sim " + experimental +
                " '" + outDir +
                File.separator + "hSpectra.eps'");
        out.println("gnuplot ch sim " + experimental +
                " '" + outDir +
                File.separator + "chSpectra.png'");
        out.println("gnuplot ch sim " + experimental +
                " '" + outDir +
                File.separator + "chSpectra.eps'");
        
        if(!this.getCShifts().equals("") || !this.getHShifts().equals("") ||
           !this.getProjectFileName().equals(""))
            {
            out.println("assign sim "+ experimental);
            out.println("echo 'experimental structure'");
            out.println("show str "+ experimental);
            }
        outFile=new File(this.getProjectFileName());
        
        name=outFile.getName();
        
        if(name.equals(""))
            {
            name="casper_project";
            }
        
        out.println("ccpnsave '" + outDir +
                File.separator + "save" +
                File.separator + 
                name +"'");
        
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

}
