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
*   Last commit: $Rev: 1756 $ by $Author: john.ionides $ on $Date:: 2009-10-07 #$  
*/

package org.eurocarbdb.dataaccess.nmr;

import java.io.Serializable;

import org.eurocarbdb.dataaccess.core.Evidence;

import org.apache.log4j.Logger;

import memops.api.Implementation.MemopsRoot;
import ccp.api.molecule.ChemComp.ChemComp;

import static org.eurocarbdb.dataaccess.Eurocarb.getEntityManager;

/**
*   Represents the topmost class in the NMR experiment evidence 
*   class hierachy.
*/


/*
    Design notes:

    The NMR DB is based heavily around the CCPN JAVA-SQL API.  In
    particular, most of the hbm mapping files and ddl have been copied
    directly over from the CCPN API, along with the ccpn-sql-ECDB.jar
    file.

    This class provides a link between the top CCPN class,
    memops.api.Implementaiton.MemopsRoot and the ECDB core.Evidence
    class. This allows the CCPN structure to be kept separate from the
    ECDB core schema - especially important given the heavy use of
    cascades in the CCPN mapping.

    In terms of loading from CCPN, we just use the standard CCPN
    loading system. Because of the large schema it is critically
    important to set the Perm Gen space high and flag it as
    recyclable. The flags for this are set in the relevant ant tasks.

    Retrieving from the DB using the API is slow, and is further
    hindered by a bug in the current CCPN api that means that objects
    retrieved through HQL are not fully functional (essentially, the
    SQL API requires a different cardinality between MemopsRoot and
    memops.api.Implementation.TopObject that requires objects to be
    post-processed on retrieval and attached to the correct MemopsRoot.

    Therefore, triggers have been put in place to load a large,
    denormalised table, NMR.TUNE_SHIFT2ATOMS. Most of the NMR data
    retrieved from the UI comes from this table.

    Becuase trigger code and stored procedures are not very portable,
    it might make sense to formally map this "linking class" and map
    it through hibernate.

    Also, fixing the CCPN bug should be a high priority. It is
    envisaged that this will be done by creating an Interceptor that
    knows the current MemopsRoot so can reattach on retrieval.
    

*/


public class NmrEvidence extends Evidence implements Serializable
{

    static final Logger log = Logger.getLogger( NmrEvidence.class );

    private int nmrEvidenceId;

    private MemopsRoot memopsRoot;


    public int getNmrEvidenceId()
    {
        return this.nmrEvidenceId;
    }

    public void setNmrEvidenceId( int nmrEvidenceId )
    {
        this.nmrEvidenceId = nmrEvidenceId;
    }


    public MemopsRoot getMemopsRoot()
    {
        return this.memopsRoot;
    }

    public void setMemopsRoot( MemopsRoot memopsRoot)
    {
        this.memopsRoot = memopsRoot;
    }


    public Type getEvidenceType()
    {
        return Evidence.Type.NMR;
    }


    // NOTE: THE ID HERE IS THE EVIDENCEID, NOT THE NMREVIDENCEID

    public static NmrEvidence lookupById( int id )
    {
        log.debug("looking up nmrEvidence by evidenceId");
        Object i = getEntityManager()
                  .getQuery( "org.eurocarbdb.dataaccess.nmr.NmrEvidence.BY_ID" )
                  .setParameter("evidenceId", id )
                  .uniqueResult();

        assert i instanceof NmrEvidence;

        return (NmrEvidence) i;
    }


    /*

    linkDw() is a method used to link the core schema to the CCPN
    datawarehouse table. It is a bit of a hack, in that it uses a
    named sql-query to run a stored procedure which then goes and
    populated the glycan_sequence (as stored in appdata during the
    load) and evidence ids in nmr.tune_shift2atoms. See notes on
    future work for how this might be coded better.

    */


    public void linkDw()
    {
	try {

	    log.debug("linking evidence into DW");
	    getEntityManager()
		.getQuery( "org.eurocarbdb.dataaccess.nmr.NmrEvidence.LoadLink" )
		.setParameter("rootId", getMemopsRoot().getDbId() )
		.uniqueResult();
	} catch (Exception e) {
	    log.error("linking evidence into DW" + e.getMessage());
	    e.printStackTrace();
	}
    }

    public static ChemComp lookupCompById( String ccpCode )
    {
        log.debug("looking up chemComp by ccpCode");
        Object i = getEntityManager()
                  .getQuery( "org.eurocarbdb.dataaccess.nmr.NmrEvidence.COMP_BY_ID" )
                  .setParameter("ccpCode", ccpCode )
                  .uniqueResult();

        assert i instanceof ChemComp;

        return (ChemComp) i;
    }



}


