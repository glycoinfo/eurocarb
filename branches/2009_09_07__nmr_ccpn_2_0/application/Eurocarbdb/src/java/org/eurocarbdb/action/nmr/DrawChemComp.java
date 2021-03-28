
package org.eurocarbdb.action.nmr;


import java.util.*;
import java.io.*;

import org.apache.log4j.Logger;

import org.eurocarbdb.tranche.*;
import org.eurocarbdb.action.*;
import org.eurocarbdb.dataaccess.*;
import org.eurocarbdb.dataaccess.core.*;
import org.eurocarbdb.dataaccess.nmr.*;
import org.eurocarbdb.dataaccess.hibernate.*;
import com.opensymphony.xwork.Action;
import com.opensymphony.xwork.Preparable;

import org.apache.batik.transcoder.TranscoderInput;
import org.apache.batik.transcoder.TranscoderOutput;
import org.apache.batik.transcoder.image.ImageTranscoder;
import org.apache.batik.transcoder.image.JPEGTranscoder;
import org.apache.batik.transcoder.image.PNGTranscoder;

import memops.general.ApiException;
import memops.api.Implementation.MemopsRoot;
import memops.xml.Implementation;
import memops.api.Implementation.Repository;
import memops.api.Implementation.Url;
import ccp.api.molecule.MolSystem.*;
import ccp.api.molecule.ChemCompCoord.*;
import ccp.api.molecule.ChemComp.*;

import org.openscience.cdk.*;
import org.openscience.cdk.CDKConstants;
import org.openscience.cdk.interfaces.*;
import org.openscience.cdk.tools.CDKHydrogenAdder;
import org.openscience.cdk.atomtype.CDKAtomTypeMatcher;
import org.openscience.cdk.tools.manipulator.AtomTypeManipulator;


public class DrawChemComp extends AbstractExperimentAwareAction
{
	protected static final Logger ms_log = Logger.getLogger( DrawChemComp.class.getName() );
	protected String m_strMolType;
	protected String m_strCcpCode;
    protected String m_strVariant = null;
	protected IMolecule m_molecule;
    protected Boolean m_bLayoutMolecule;
    
    
    // TODO - move to properties file
    private static final String PATH_REF_DATA   = "/home/schloi/ccpn_ref_data";
    //

	public String getMolType()
	{
		return m_strMolType;
	}
	
	public void setMolType(String str)
	{
		m_strMolType = str;
	}
	
	public String getCcpCode()
	{
		return m_strCcpCode;
	}
	
	public void setCcpCode(String str)
	{
		m_strCcpCode = str;
	}
    
    public String getVariant()
    {
        return m_strVariant;
    }
    
    public void setVariant(String strVariant)
    {
        m_strVariant = strVariant;
    }
    
    protected void setLayoutMolecule(Boolean b)
    {
        m_bLayoutMolecule = b;
    }
    
    protected Boolean getLayoutMolecule()
    {
        return m_bLayoutMolecule;
    }
    
    protected void setRepositoryForTopLevelObject(MemopsRoot project, String strObject, String strPath) throws Exception
    {
        memops.api.Implementation.PackageLocator packageLocator = project.findFirstPackageLocator("targetName", strObject);
        Repository r = packageLocator.findFirstRepository("name",  "refData");
        HashMap<String, Object> hashArgs = new HashMap<String, Object>();
        hashArgs.put("path", strPath);
        hashArgs.put("protocol", "file");

        if (r == null)
        {
            // no repository for refData exists
            r = project.newRepository("name", new Url(hashArgs));
            packageLocator.addRepository(r);
        }
        else
        {
            // exists, change Url
            r.setUrl( new Url(hashArgs) );
        }
    }
    
	public void createCDKMolecule(String strMolType, String strCcpCode) throws Exception
	{
		DefaultChemObjectBuilder cdkBuilder = DefaultChemObjectBuilder.getInstance();
		CDKHydrogenAdder cdkHAdder = CDKHydrogenAdder.getInstance(cdkBuilder);
        HashMap<String, Object> hashArgs = new HashMap<String, Object>();
        
        setLayoutMolecule(false);
		
		MemopsRoot project = new MemopsRoot("dummy_project");
		setRepositoryForTopLevelObject(project, "ccp.molecule.ChemComp", PATH_REF_DATA);
        setRepositoryForTopLevelObject(project, "ccp.molecule.ChemCompCoord", PATH_REF_DATA);
        
        hashArgs.clear();
        hashArgs.put("molType", strMolType);
        hashArgs.put("ccpCode", strCcpCode);
		ChemComp cc = project.findFirstChemComp(hashArgs);
        ChemCompVar ccv;
        
        hashArgs.clear();
        hashArgs.put("molType", strMolType);
        hashArgs.put("ccpCode", strCcpCode);
        hashArgs.put("sourceName", "ideal");
        ChemCompCoord ccc = project.findFirstChemCompCoord(hashArgs);
        ChemCompVarCoord ccvc = null;
        
        if (getVariant() != null)
        {
            ccv = cc.findFirstChemCompVar("descriptor", getVariant());
            
            if (ccc != null)
            {
                ccvc = ccc.findFirstChemCompVarCoord("descriptor", getVariant());
            }
        }
        else
        {
            ccv = cc.findFirstChemCompVar();
            
            if (ccc != null)
            {
                ccvc = ccc.findFirstChemCompVarCoord("descriptor", ccv.getDescriptor());
            }
        }
        
        if (ccvc == null) 
        {
            System.out.println("no reference coordinates available");
            setLayoutMolecule(true);
        }
        
		List<ChemBond> arrBonds = ccv.sortedChemBonds();
		
		AbstractChemAtom aa1, aa2;
		ChemAtom ca1, ca2;
        ChemAtomCoord cac;
		IMolecule molecule = cdkBuilder.newMolecule();
		IAtom atom1 = null, atom2 = null;
		IBond bond;
		IBond.Order bondStatus;
		
		HashMap<String, IAtom> hashAtomsAdded = new HashMap<String, IAtom>();
		
		for (ChemBond cb : arrBonds)
		{
			if (cb.getBondType().equals("double"))
			{
				bondStatus = IBond.Order.DOUBLE;
			}
			else if (cb.getBondType().equals("triple"))
			{
				bondStatus = IBond.Order.TRIPLE;
			}
			else
			{
				bondStatus = IBond.Order.SINGLE;
			}
		
			aa1 = cb.sortedChemAtoms().get(0);
			aa2 = cb.sortedChemAtoms().get(1);
			
			if (aa1 instanceof ChemAtom)
			{
				ca1 = (ChemAtom)aa1;
			}
			else
			{
				ca1 = null;
			}
			
			if (aa2 instanceof ChemAtom)
			{
				ca2 = (ChemAtom)aa2;
			}
			else
			{
				ca2 = null;
			}
			
			if (ca1 != null)
			{
				if (!hashAtomsAdded.containsKey(ca1.getName()))
				{
					atom1 = cdkBuilder.newAtom(ca1.getElementSymbol());
                    
                    if (ccc != null)
                    {
                        cac = ccvc.findFirstChemAtomCoord("name", ca1.getName());
                        
                        if (cac != null)
                        {
                            atom1.setPoint3d( new javax.vecmath.Point3d(cac.getX(), cac.getY(), cac.getZ()) );
                        }
                        else 
                        {
                            setLayoutMolecule(true);
                            System.out.println("could not assign reference coordinates to " + ca1.getName());
                        }
                    }
                    
					molecule.addAtom(atom1);
					hashAtomsAdded.put(ca1.getName(), atom1);

					atom1.setProperty("Label", ca1.getName());
				}
				else
				{
					atom1 = hashAtomsAdded.get(ca1.getName());
				}
			}
			
			if (ca2 != null)
			{
				if (!hashAtomsAdded.containsKey(ca2.getName()))
				{
					atom2 = cdkBuilder.newAtom(ca2.getElementSymbol());
                    
                    if (ccc != null)
                    {
                        cac = ccvc.findFirstChemAtomCoord("name", ca2.getName());
                        
                        if (cac != null)
                        {
                            atom2.setPoint3d( new javax.vecmath.Point3d(cac.getX(), cac.getY(), cac.getZ()) );
                        }
                        else 
                        {
                            setLayoutMolecule(true);
                            System.out.println("could not assign reference coordinates to " + ca2.getName());
                        }
                    }
                    
					molecule.addAtom(atom2);
					hashAtomsAdded.put(ca2.getName(), atom2);

					atom2.setProperty("Label", ca2.getName());
				}
				else
				{
					atom2 = hashAtomsAdded.get(ca2.getName());
				}
			}

			if (ca1 != null && ca2 != null)
			{
				bond = cdkBuilder.newBond(atom1, atom2, bondStatus);
				molecule.addBond(bond);
			}
		}
		
		CDKAtomTypeMatcher matcher = CDKAtomTypeMatcher.getInstance(cdkBuilder);
		Iterator<IAtom> atoms = molecule.atoms().iterator();
		int i = 0;
		while (atoms.hasNext()) 
		{
			IAtom atom = atoms.next();
			i++;
			try 
			{
				IAtomType type = matcher.findMatchingAtomType(molecule, atom);
				AtomTypeManipulator.configure(atom, type);
			}
			catch (Exception e) 
			{
				ms_log.error("Cannot perceive atom type for atom #" + i + " " + atom.getSymbol());
				atom.setAtomTypeName("X");
			}
		}
		

		// cdkHAdder.addImplicitHydrogens(molecule);
        
        setLayoutMolecule(true);
		
		m_molecule = molecule;
	}
	
	public InputStream draw() throws Exception
	{
        CDKDrawMolecule cdk_dm = new CDKDrawMolecule();
		
		cdk_dm.setShowAtomNumbers(false);
		
		cdk_dm.setWidth(400);
		cdk_dm.setHeight(400);
		cdk_dm.setShowImplicitH(false);
	
		createCDKMolecule(getMolType(), getCcpCode());
		cdk_dm.setMolecule(m_molecule);
        
        if (getLayoutMolecule())
        {
            cdk_dm.layoutMolecule();
        }
		
		return cdk_dm.getPNG();
	}

    public InputStream getPNG() throws Exception
    {  
        return draw();
    }
    
    public void setPng(InputStream is) {}
    
    @Override
    public String execute() throws Exception
    {
		return "png";
    }
}

