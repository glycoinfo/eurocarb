include ../../../../../environment.txt

INCLUDE_FLAG = -I../../../../../include

OBJS = \
	Lmol_AtomLabel.o \
	Lmol_LabeledMixture.o \
	Lmol_LabeledMolecule.o \
	Lmol_MolLabel.o \
	Lmol_MolLabelFraction.o \
	Lmol_ResLabel.o \
	Lmol_ResLabelFraction.o \
	Lmol_SingleAtomLabel.o \
	Lmol_UniformAtomLabel.o


all: objects library

library:
	ar -r ../../../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

.c.o:;	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) $<

clean:
	rm *.o
