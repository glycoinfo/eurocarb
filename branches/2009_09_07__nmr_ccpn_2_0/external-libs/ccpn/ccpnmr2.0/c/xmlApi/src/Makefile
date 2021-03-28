all: library examples

library: shared Implementation AccessControl KeywordDefinition Affiliation AnnealProtocol DataLocation ChemElement Stereochemistry DbRef Taxonomy Template Classification Location Citation NmrExpPrototype ChemComp Holder Instrument ChemCompLabel ChemCompCharge AnalysisProfile NmrReference ChemCompCoord Method Molecule NameMapping LabeledMolecule MolSystem RefSampleComponent StructureValidation Symmetry Sample Target MolStructure Crystallization Protocol ExpBlueprint Nmr Experiment NmrConstraint NmrEntry Analysis Annotation NmrSim Dangle

shared:
	make -f makeSharedCode.mk library

examples:
	make -f makeSharedCode.mk examples

Implementation:
	cd memops/api/Implementation; make

AccessControl:
	cd memops/api/AccessControl; make

KeywordDefinition:
	cd ccp/api/general/KeywordDefinition; make

Affiliation:
	cd ccp/api/general/Affiliation; make

AnnealProtocol:
	cd molsim/api/AnnealProtocol; make

DataLocation:
	cd ccp/api/general/DataLocation; make

ChemElement:
	cd ccp/api/molecule/ChemElement; make

Stereochemistry:
	cd ccp/api/molecule/Stereochemistry; make

DbRef:
	cd ccp/api/general/DbRef; make

Taxonomy:
	cd ccp/api/general/Taxonomy; make

Template:
	cd ccp/api/general/Template; make

Classification:
	cd ccp/api/lims/Classification; make

Location:
	cd ccp/api/lims/Location; make

Citation:
	cd ccp/api/general/Citation; make

NmrExpPrototype:
	cd ccp/api/nmr/NmrExpPrototype; make

ChemComp:
	cd ccp/api/molecule/ChemComp; make

Holder:
	cd ccp/api/lims/Holder; make

Instrument:
	cd ccp/api/general/Instrument; make

ChemCompLabel:
	cd ccp/api/molecule/ChemCompLabel; make

ChemCompCharge:
	cd ccp/api/molecule/ChemCompCharge; make

AnalysisProfile:
	cd ccpnmr/api/AnalysisProfile; make

NmrReference:
	cd ccp/api/nmr/NmrReference; make

ChemCompCoord:
	cd ccp/api/molecule/ChemCompCoord; make

Method:
	cd ccp/api/general/Method; make

Molecule:
	cd ccp/api/molecule/Molecule; make

NameMapping:
	cd ccpnmr/api/NameMapping; make

LabeledMolecule:
	cd ccp/api/molecule/LabeledMolecule; make

MolSystem:
	cd ccp/api/molecule/MolSystem; make

RefSampleComponent:
	cd ccp/api/lims/RefSampleComponent; make

StructureValidation:
	cd ccp/api/molecule/StructureValidation; make

Symmetry:
	cd molsim/api/Symmetry; make

Sample:
	cd ccp/api/lims/Sample; make

Target:
	cd ccp/api/lims/Target; make

MolStructure:
	cd ccp/api/molecule/MolStructure; make

Crystallization:
	cd ccp/api/lims/Crystallization; make

Protocol:
	cd ccp/api/lims/Protocol; make

ExpBlueprint:
	cd ccp/api/lims/ExpBlueprint; make

Nmr:
	cd ccp/api/nmr/Nmr; make

Experiment:
	cd ccp/api/lims/Experiment; make

NmrConstraint:
	cd ccp/api/nmr/NmrConstraint; make

NmrEntry:
	cd ccp/api/nmr/NmrEntry; make

Analysis:
	cd ccpnmr/api/Analysis; make

Annotation:
	cd ccp/api/general/Annotation; make

NmrSim:
	cd molsim/api/NmrSim; make

Dangle:
	cd cambridge/api/Dangle; make
