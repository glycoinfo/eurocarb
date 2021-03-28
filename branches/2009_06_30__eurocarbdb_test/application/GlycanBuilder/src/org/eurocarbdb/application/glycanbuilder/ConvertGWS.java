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
*   Last commit: $Rev: 1210 $ by $Author: glycoslave $ on $Date:: 2009-06-11 #$  
*/
/**
   @author Alessio Ceroni (a.ceroni@imperial.ac.uk)
*/

package org.eurocarbdb.application.glycanbuilder;


class ConvertGWS {

    static public void main(String[] args) {

    try {
        if( args.length==0 ) {
        System.err.println("Usage: ConvertGWS <GWS string> [<output format>]");
        return;
        }

        String sequences = args[0];
        String outputType = (args.length>1) ?args[1] :"glycoct_xml";
                
        BuilderWorkspace theWorkspace = new BuilderWorkspace(null,false);
        GlycanDocument theDoc = theWorkspace.getStructures(); 
        
        theDoc.fromString(sequences,false);
        System.out.println(theDoc.toString(outputType));
    }
    catch(Exception e) {
            System.err.println("Error: " + LogUtils.getError(e));
            System.err.println("Stack: " + LogUtils.getErrorStack(e));
    }           
    }
}