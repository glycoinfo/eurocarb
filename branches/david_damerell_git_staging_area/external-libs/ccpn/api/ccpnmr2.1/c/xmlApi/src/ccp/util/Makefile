include ../../../environment.txt

INCLUDE_FLAG = -I../../../include

OBJS = \
	CcpUtilChemComp.o \
	CcpUtilMolecule.o \
	CcpUtilNmr.o \


all: objects library

library:
	ar -r ../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

CcpUtilChemComp.o: ChemComp.c
	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) -o CcpUtilChemComp.o ChemComp.c

CcpUtilMolecule.o: Molecule.c
	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) -o CcpUtilMolecule.o Molecule.c

CcpUtilNmr.o: Nmr.c
	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) -o CcpUtilNmr.o Nmr.c

clean:
	rm *.o
