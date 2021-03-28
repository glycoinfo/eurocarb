
package org.eurocarbdb.action.nmr;

/*
	usage:
	
		setMolecule()
		layoutMolecule() ... if the structure comes from a format without coordinates
		
		options: setShowH()			... show implicit hydrogens
		         setHeight/Width()
		
		getPNG()
*/

import org.apache.commons.cli.*;
import org.openscience.cdk.CDKConstants;
import org.openscience.cdk.DefaultChemObjectBuilder;
import org.openscience.cdk.aromaticity.CDKHueckelAromaticityDetector;
import org.openscience.cdk.exception.CDKException;
import org.openscience.cdk.geometry.GeometryTools;
import org.openscience.cdk.interfaces.*;
import org.openscience.cdk.layout.StructureDiagramGenerator;
import org.openscience.cdk.renderer.Renderer2D;
import org.openscience.cdk.renderer.Renderer2DModel;
import org.openscience.cdk.renderer.color.CDK2DAtomColors;
import org.openscience.cdk.tools.CDKHydrogenAdder;
import org.openscience.cdk.tools.manipulator.AtomTypeManipulator;
import org.openscience.cdk.atomtype.CDKAtomTypeMatcher;

import org.apache.batik.dom.GenericDOMImplementation;
import org.apache.batik.svggen.SVGGraphics2D;

import org.w3c.dom.DOMImplementation;
import org.w3c.dom.Document;
import javax.vecmath.Vector2d;

import java.awt.*;
import java.io.*;
import java.util.*;
import java.util.StringTokenizer;
import java.awt.image.*;
import javax.imageio.ImageIO;


public class CDKDrawMolecule
{
    protected int 				m_nWidth 			= -1;
    protected int 				m_nHeight 			= -1;
	protected boolean			m_bShowImplicitH	= false;
	protected boolean			m_bShowAtomNumbers	= false;
	protected Color				m_backColor 		= Color.white;
	protected IMolecule			m_cdkmol 			= null;
	protected CDKHydrogenAdder	m_hAdder 			= null;
	

    public CDKDrawMolecule()
	{
		DefaultChemObjectBuilder cob = DefaultChemObjectBuilder.getInstance();
		m_hAdder = CDKHydrogenAdder.getInstance(cob);
    }

	public void setMolecule(IMolecule mol) throws Exception
	{
		m_cdkmol = mol;
		
		/*
		// assign correct atom types
		CDKAtomTypeMatcher matcher = CDKAtomTypeMatcher.getInstance(m_cdkmol.getBuilder());
		Iterator<IAtom> atoms = m_cdkmol.atoms();
		while (atoms.hasNext()) 
		{
			IAtom atom = atoms.next();
			IAtomType type = matcher.findMatchingAtomType(m_cdkmol, atom);
			AtomTypeManipulator.configure(atom, type);
		}
		
		// add hydrogens (needs correct atom types)
		m_hAdder.addImplicitHydrogensToSatisfyValency(m_cdkmol);
		
		CDKHueckelAromaticityDetector.detectAromaticity(m_cdkmol);
		*/
		
		/* 
		for (int i = 0; i < m_cdkmol.getAtomCount(); i++)
		{
			m_cdkmol.getAtom(i).setProperty("OriginalNumber", i * 2 - 1);
		}
		*/

	}
	
	public void setHeight(int nHeight)
	{
		m_nHeight = nHeight;
	}
	
	public void setWidth(int nWidth)
	{
		m_nWidth = nWidth;
	}
	
	public boolean getShowImplicitH()
	{
		return m_bShowImplicitH;
	}
	
	public void setShowImplicitH(boolean bH)
	{
		m_bShowImplicitH = bH;
	}
	
	public boolean getShowAtomNumbers()
	{
		return m_bShowAtomNumbers;
	}
	
	public void setShowAtomNumbers(boolean bNumbers)
	{
		m_bShowAtomNumbers = bNumbers;
	}
	
	/*
		generates 2d coordinates for a molecule
	*/
	public void layoutMolecule() throws Exception
	{
		StructureDiagramGenerator sdg = new StructureDiagramGenerator();
		// sdg.setUseTemplates(true);
		// sdg.setBondLength(0.5);
		sdg.setMolecule(m_cdkmol);
		// sdg.generateExperimentalCoordinates();
		sdg.generateCoordinates();
		m_cdkmol = sdg.getMolecule();
	}
	
	public InputStream getPNG() throws Exception
	{
		Renderer2DModel r2dm = new Renderer2DModel();
		CDK2DAtomColors colorer = new CDK2DAtomColors();
		
		// set up rendering
		r2dm.setDrawNumbers(getShowAtomNumbers());

		r2dm.setBackColor(m_backColor);
		r2dm.setColorAtomsByType(true);
		r2dm.setAtomColorer(colorer);

		r2dm.setShowEndCarbons(true);
		r2dm.setUseAntiAliasing(true);
		r2dm.setShowReactionBoxes(false);
		r2dm.setKekuleStructure(true);

		r2dm.setShowAromaticity(false);
		
		r2dm.setShowImplicitHydrogens(getShowImplicitH());
		r2dm.setShowExplicitHydrogens(true);
        
		/*
		if(selected>-1)
		{
			r2dm.setExternalHighlightColor(Color.RED);
			IAtomContainer ac=cdkmol.getBuilder().newAtomContainer();
			if(selected>=cdkmol.getAtomCount())
			{
				selected=cdkmolwithh.getAtomNumber((IAtom)cdkmolwithh.getConnectedAtomsList(cdkmolwithh.getAtom(selected)).get(0));
			}
			
			ac.addAtom(cdkmol.getAtom(selected));
			r2dm.setExternalSelectedPart(ac);
		}
		*/
		
		/* bond highlighting */
		/*
		for (int i = 0; i < m_cdkmol.getBondCount() / 2; i++)
		{
			r2dm.getColorHash().put(m_cdkmol.getBond(i), Color.red);
		}
		*/
		
		
		Renderer2D renderer = new Renderer2D(r2dm);
		int moleculewidth;
		int moleculeheight;
		
		if(m_nWidth > -1)
		{
			// use user specified dimensions
			moleculewidth = m_nWidth;
			moleculeheight = m_nHeight;
		}
		else
		{
			// guess dimensions based on the number of atoms
			int number = ((int)Math.sqrt(m_cdkmol.getAtomCount()))+1;
			moleculewidth = number * 100;
			moleculeheight = number * 100;
		}
		
		// switch to compact view
		if(moleculeheight < 200 || moleculewidth < 200)
		{
			r2dm.setIsCompact(true);
			r2dm.setBondDistance(3);
		}

		// scale and center molecule
		r2dm.setBackgroundDimension(new Dimension(moleculewidth, moleculeheight));
		
		// FIXME jmci: comment out to get to compile
		//GeometryTools.translateAllPositive(m_cdkmol, r2dm.getRenderingCoordinates());
		//GeometryTools.scaleMolecule(m_cdkmol, 
		//						    new Dimension(moleculewidth, moleculeheight), 
		//							1.0, r2dm.getRenderingCoordinates());
		//GeometryTools.center(m_cdkmol, new Dimension(moleculewidth, moleculeheight), r2dm.getRenderingCoordinates());
		// jmci END COMMENT OUT

		// write svg
		DOMImplementation domImpl = GenericDOMImplementation.getDOMImplementation();
		Document document = domImpl.createDocument(null, "svg", null);
        
        BufferedImage bImage = null;
        bImage = new BufferedImage(moleculewidth, moleculeheight, BufferedImage.TYPE_BYTE_INDEXED);
        Graphics2D g = bImage.createGraphics();
        g.setBackground(Color.WHITE);
        g.setColor(Color.WHITE);
        g.fillRect(0, 0, moleculewidth, moleculeheight);
        
        renderer.paintMolecule(m_cdkmol, g, new Rectangle(0, 0, moleculewidth, moleculeheight));
        
        ByteArrayOutputStream ostream = new ByteArrayOutputStream();
        
        ImageIO.write(bImage, "png", ostream);
        
        return new ByteArrayInputStream(ostream.toByteArray());

        /*
		SVGGraphics2D svgGenerator = new SVGGraphics2D(document);
		svgGenerator.setFont(new Font("Tahoma", Font.PLAIN, 12));
		svgGenerator.setSVGCanvasSize(new Dimension(moleculewidth, moleculeheight));
		
		ByteArrayOutputStream baos = new ByteArrayOutputStream();
		Writer outwriter = new OutputStreamWriter(baos, "UTF-8");

		renderer.paintMolecule(m_cdkmol, svgGenerator, new Rectangle(0, 0, moleculewidth, moleculeheight));
        
		svgGenerator.stream(outwriter, false);
		
		return baos.toString();
        */
        
        
	}
}
