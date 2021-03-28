include ../../../../../environment.txt

INCLUDE_FLAG = -I../../../../../include

OBJS = \
	Mols_Atom.o \
	Mols_Chain.o \
	Mols_ChainFragment.o \
	Mols_ChainInteraction.o \
	Mols_MolSystem.o \
	Mols_MolSystemLink.o \
	Mols_MolSystemLinkEnd.o \
	Mols_MolSystemSysName.o \
	Mols_NonCovalentBond.o \
	Mols_Residue.o \
	Mols_StructureGroup.o


all: objects library

library:
	ar -r ../../../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

.c.o:;	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) $<

clean:
	rm *.o
