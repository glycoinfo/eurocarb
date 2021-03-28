include ../../../../../environment.txt

INCLUDE_FLAG = -I../../../../../include

OBJS = \
	Chem_AbstractChemAtom.o \
	Chem_AtomSysName.o \
	Chem_ChemAngle.o \
	Chem_ChemAtom.o \
	Chem_ChemAtomSet.o \
	Chem_ChemBond.o \
	Chem_ChemComp.o \
	Chem_ChemCompSysName.o \
	Chem_ChemCompVar.o \
	Chem_ChemTorsion.o \
	Chem_ChemTorsionSysName.o \
	Chem_LinkAtom.o \
	Chem_LinkEnd.o \
	Chem_NamingSystem.o \
	Chem_NonStdChemComp.o \
	Chem_StdChemComp.o \
	Chem_Stereochemistry.o


all: objects library

library:
	ar -r ../../../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

.c.o:;	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) $<

clean:
	rm *.o
