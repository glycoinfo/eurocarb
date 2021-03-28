include ../../../../../environment.txt

INCLUDE_FLAG = -I../../../../../include

OBJS = \
	Mole_Alignment.o \
	Mole_MolResLink.o \
	Mole_MolResLinkEnd.o \
	Mole_MolResidue.o \
	Mole_MolSeqFragment.o \
	Mole_Molecule.o \
	Mole_MoleculeSysName.o


all: objects library

library:
	ar -r ../../../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

.c.o:;	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) $<
